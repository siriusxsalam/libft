/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasalam <hasalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:44:32 by hasalam           #+#    #+#             */
/*   Updated: 2022/11/20 16:00:00 by hasalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	l;
	char	*r;

	l = ft_strlen(s1) + 1;
	r = malloc(sizeof(char) * l);
	if (!r)
		return (NULL);
	r = ft_memcpy(r, s1, l);
	return (r);
}
