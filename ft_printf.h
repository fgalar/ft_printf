/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:33:06 by fanny             #+#    #+#             */
/*   Updated: 2020/01/14 19:22:50 by fgarault         ###   ########.fr       */
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

typedef struct		s_data
{
	va_list			arg;
	int				index;
	char			buffer[4096];
	int				len;
	char			conv;
	int				flag[NB_FLAGS];
	int				precis;
	int				field;
	int				width_max;
	char			argument[100];
	int				neg;
	char			prefix[3];
	int				prfx;
	int				ad_pf;
}					t_data;

int					ft_printf(
	const char *format, ...) __attribute__((__format__(__printf__,1,2)));

void				parsing(const char *format, t_data *data);
void				get_size(t_data *data, const char *format);
void				init_new_arg(t_data *d);
int					dispatcher(const char *format, t_data *data);

int					print_c(t_data *data);
int					print_s(t_data *data);
int					print_p(t_data *data);
int					print_d(t_data *data);
int					print_o(t_data *data);
int					print_u(t_data *data);
int					print_x(t_data *data);
int					print_f(t_data *data);
void				print_a(t_data *d, unsigned char c);
char				*ft_float(t_data *d, double f);

void				manage_size(t_data *data, void *arg);
void				print_majhex(char *nb);

#endif
