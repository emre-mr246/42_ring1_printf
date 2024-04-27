/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgul <emgul@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:18:16 by emgul             #+#    #+#             */
/*   Updated: 2024/02/27 09:31:15 by emgul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

void	ft_putnbr(int n, t_format *f)
{
	char	*num;

	num = ft_itoa(n);
	ft_putstr(num, f);
	free(num);
}
