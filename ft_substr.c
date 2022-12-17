/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasalam <hasalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 00:22:58 by hasalam           #+#    #+#             */
/*   Updated: 2022/11/18 01:01:53 by hasalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sb;
	size_t	i;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	sb = malloc(sizeof(char) * (len + 1));
	if (!sb)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s))
	{
		sb[i] = s[start];
		i++;
		start++;
	}
	sb[i] = '\0';
	return (sb);
}
