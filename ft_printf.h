/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <fgarault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:33:06 by fgarault          #+#    #+#             */
/*   Updated: 2020/02/29 14:59:34 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# define NB_CONV 10
# define NB_FLAGS 11

int					ft_printf(const char *format, ...);

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
	point,
}					t_flags;

typedef struct		s_data
{
	va_list			arg;
	char			buffer[4096];
	char			argument[4096];
	char			prefix[3];
	char			conv;
	int				flag[NB_FLAGS];
	int				index;
	int				len;
	int				precis;
	int				field;
	int				width_max;
	int				neg;
	int				prfx;
	int				ad_pf;
}					t_data;

typedef union 		u_float
{
	long double		fl;
	struct
	{
		unsigned long 	mantisse : 64;
		unsigned int		exp : 15;
		unsigned int		sign : 1;
	} 				b_count;
}					t_float;

void				parsing(t_data *data, const char *format);
void				get_size(t_data *data, const char *format);
int					dispatcher(t_data *data, const char*format);
int					print_c(t_data *data);
int					print_s(t_data *data);
int					print_p(t_data *data);
int					print_d(t_data *data);
int					print_o(t_data *data);
int					print_u(t_data *data);
int					print_x(t_data *data);
int					print_f(t_data *data);
char				*ft_float(t_data *d, long double f);
void				handler(t_data *data, void *arg);
void				print_majhex(char *nb);
void				print_a(t_data *d, unsigned char c);
void				init_new_arg(t_data *d);
void				init_struct(t_data *d);
int					is_even(char n);

#endif
