/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:33:06 by fanny             #+#    #+#             */
/*   Updated: 2019/07/22 15:58:30 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"
# define NB_CONV 6 

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
int		print_p(t_data *data);
int		print_d(t_data *data);
int		print_o(t_data *data);

#endif
