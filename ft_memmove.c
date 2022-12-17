/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasalam <hasalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:26:28 by hasalam           #+#    #+#             */
/*   Updated: 2022/11/26 17:43:22 by hasalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sorc;

	dest = (char *)dst;
	sorc = (char *)src;
	if (dst <= src)
		dst = ft_memcpy(dest, sorc, len);
	else
	{
		while (len--)
		{
			dest[len] = sorc[len];
		}
	}
	return (dst);
}
