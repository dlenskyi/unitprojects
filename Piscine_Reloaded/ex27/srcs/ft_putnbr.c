/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 14:55:33 by dlenskyi          #+#    #+#             */
/*   Updated: 2018/10/23 15:14:04 by dlenskyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int n)
{
	if (n < -9 || n > 9)
		ft_putnbr(n / 10);
	if (n < 0)
	{
		if (n >= -9 && n <= 9)
			ft_putchar('-');
		ft_putchar(48 - (n % 10));
	}
	else
		ft_putchar(48 + (n % 10));
}
