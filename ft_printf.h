/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:33:06 by fanny             #+#    #+#             */
/*   Updated: 2019/10/03 16:56:38 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# define NB_CONV 10
# define NB_FLAGS 11

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
	point
}					t_flags;

typedef struct	s_data
{
	va_list		arg;
	int			index;

	char		buffer[4096];
	int			len;

	char		conv;
	int			flag[NB_FLAGS];

	int			precis;
	int			field;
	int			width_max;

	char		argument[100];
	int			neg;

	char		*prefix;
	int			prfx;
	int			ad_pf;

}				t_data;

typedef struct	s_float
{
	int			sign;
	char		*exponent;
	int			exp;
	char		*mantissa;
	double		m;
}				t_float;

int				ft_printf(const char *format, ...);
void			parsing(const char *format, t_data *data);
void			init_new_arg(t_data *d);
int				dispatcher(t_data *data);

int				print_c(t_data *data);
int				print_s(t_data *data);
int				print_p(t_data *data);
int				print_d(t_data *data);
int				print_o(t_data *data);
int				print_u(t_data *data);
int				print_x(t_data *data);
int				print_f(t_data *data);

void			manage_size(t_data *data, void *arg);
char			*ft_ftoa(t_float *nb);
void			print_majhex(char *nb);
int				print_percent(t_data *d);

#endif
