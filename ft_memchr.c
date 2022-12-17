/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasalam <hasalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:42:32 by hasalam           #+#    #+#             */
/*   Updated: 2022/11/20 15:51:15 by hasalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	if (n == 0)
		return (0);
	i = 0;
	s1 = (unsigned char *)s;
	while (i < n)
	{
		if (*s1 == (unsigned char)c)
		{
			return (s1);
		}
		s1++;
		i++;
	}
	return (0);
}
