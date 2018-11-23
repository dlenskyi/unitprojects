/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 22:59:14 by dlenskyi          #+#    #+#             */
/*   Updated: 2018/10/26 22:59:15 by dlenskyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (((c >= 48 && c <= 57)) || (c >= 65 && c <= 90) ||
		(c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
