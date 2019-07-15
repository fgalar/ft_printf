/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:33:06 by fanny             #+#    #+#             */
/*   Updated: 2019/07/15 15:52:23 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# define NB_CONV  2

typedef struct		s_data
{
	char			buffer[4096];
	int				index;
	va_list			arg;
	char			conv;
	int				len;
}					t_data;

int		ft_printf(const char *format, ...);
void	parsing(const char *format, t_data *data);
int		dispatcher(t_data *data);
int		print_c(t_data *data);
int		print_s(t_data *data);
#endif
