/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasalam <hasalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:32:48 by hasalam           #+#    #+#             */
/*   Updated: 2022/11/24 17:19:56 by hasalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_isneg(int *n, int *neg, int *t)
{
	if (*n == -2147483648)
	{
		*n = *n + 1;
		*neg = -1;
		*t = 1;
		*n = *n * (-1);
	}
	else if (*n < 0)
	{
		*neg = -1;
		*n = *n * (-1);
		*t = 0;
	}
	else if (*n >= 0)
	{
		*neg = 1;
		*t = 0;
	}
}

static	int	ft_len(int n)
{
	int	len;

	len = 0;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

static	void	ft_write(char *s, int len, int n, int t)
{
	while (n > 9)
	{
		s[len] = (n % 10) + '0' + t;
		n = n / 10;
		t = 0;
		len--;
	}
	s[len] = n + '0';
}

char	*ft_itoa(int n)
{
	char	*s;
	int		neg;
	int		t;
	int		len;

	ft_isneg(&n, &neg, &t);
	len = ft_len(n);
	if (neg == -1)
	{
		s = malloc(sizeof(char) * (len + 2));
		if (!s)
			return (0);
		len++;
		s[0] = '-';
	}
	else
	{
		s = malloc(sizeof(char) * (len + 1));
		if (!s)
			return (0);
	}
	s[len] = '\0';
	len--;
	ft_write(s, len, n, t);
	return (s);
}
