/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasalam <hasalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:46:04 by hasalam           #+#    #+#             */
/*   Updated: 2022/11/15 14:07:50 by hasalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hs;
	size_t	i;
	size_t	c;

	i = 0;
	hs = (char *)haystack;
	if (!needle[i] || hs == needle)
		return (hs);
	while (hs[i] && i < len)
	{
		c = 0;
		while (needle[c] && hs[i + c] == needle[c] && i + c < len)
		{
			if (needle[c + 1] == '\0')
				return (hs + i);
			c++;
		}
		i++;
	}
	return (NULL);
}
