/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasalam <hasalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:34:24 by hasalam           #+#    #+#             */
/*   Updated: 2022/11/20 15:50:49 by hasalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	r;

	r = n;
	if (r < 0)
	{
		ft_putchar_fd('-', fd);
		r = r * (-1);
	}
	if (r > 9)
	{
		ft_putnbr_fd(r / 10, fd);
		ft_putchar_fd((r % 10) + '0', fd);
	}
	else
		ft_putchar_fd(r + '0', fd);
}
