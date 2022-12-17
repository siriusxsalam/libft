/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasalam <hasalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:22:36 by hasalam           #+#    #+#             */
/*   Updated: 2022/11/20 17:15:11 by hasalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (*s1)
	{
		if (*s1 == (unsigned char)c)
			return ((char *)s1);
		s1++;
	}
	if (*s1 == (unsigned char)c)
		return ((char *)s1);
	return (0);
}
