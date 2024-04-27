/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgul <emgul@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:06:29 by emgul             #+#    #+#             */
/*   Updated: 2024/02/27 13:20:51 by emgul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>

typedef struct s_format
{
	char	specifier;
	int		specifier_index;
	int		printed_chars;
}	t_format;

// MAIN FUNCTION
int			ft_printf(const char *input, ...);

// UTILS
t_format	*ft_initialize_format(void);
int			ft_check_specifier(char *input);
int			ft_find_specifier_index(char *input);
void		ft_print_format(t_format *f, va_list args);
int			ft_strchrs(char *haystack, char *needles);
int			ft_format_specifier(char *input, va_list args, int *i);

// PRINT FUNCTIONS
void		ft_putnbr(int n, t_format *f);
int			ft_number_len(long nbr);
void		ft_putstr(char *str, t_format *f);
void		ft_putptr(unsigned long long ptr, t_format *f);
void		ft_puthex(unsigned int num, t_format *f);
void		ft_putunsigned(unsigned int nb, t_format *f);
int			ft_putchar(char c);

#endif