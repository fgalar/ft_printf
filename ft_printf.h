/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:33:06 by fanny             #+#    #+#             */
/*   Updated: 2019/07/13 18:26:16 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# define NB_CONV  1

typedef struct		s_data
{
	char		buffer[4096];
	va_list		arg;
	char		conv;
}			t_data;

int	ft_printf(const char *format, ...);
int	parsing(const char *format, t_data *data);
int	dispatcher(t_data *data);
int	print_c(t_data *data);

#endif
