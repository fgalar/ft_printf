/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:33:06 by fanny             #+#    #+#             */
/*   Updated: 2019/08/28 09:54:03 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"
# define NB_CONV 10
# define NB_FLAGS 10

typedef enum		e_flags
{
	hh,
	h,
	ll,
	l,
	diese, 
	most, 
	space,
	less,
	zero,
	percent,	
}					t_flags;

typedef struct		s_data
{
	char			buffer[4096];
	int				len;
	int				index;
	va_list			arg;
	int				size;
	char			*argument;
	char			conv;
	int				flag[NB_FLAGS];
}					t_data;

typedef struct		s_float
{
	int			sign;
	char		*exponent;
	int			exp;
	char		*mantissa;
	long double		m;
}					t_float;

int					ft_printf(const char *format, ...);
void				parsing(const char *format, t_data *data);
int					dispatcher(t_data *data);
int					print_c(t_data *data);
int					print_s(t_data *data);
int					print_p(t_data *data);
int					print_d(t_data *data);
int					print_o(t_data *data);
int					print_u(t_data *data);
int					print_x(t_data *data);
int					print_f(t_data *data);
char				*print_majhex(char *nb);
int					get_conv(const char *format, t_data *data);
int					get_flags(const char *format, t_data *data);
void				check_overrides(const char *format, t_data *data);
char				*ft_ftoa(t_float *nb);
#endif
