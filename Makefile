# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgarault <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/10 17:41:52 by fgarault          #+#    #+#              #
#    Updated: 2020/03/10 17:42:00 by fgarault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= 	ft_printf.c		\
			dispatcher.c	\
			parsing.c		\
			print_c.c		\
			print_s.c		\
			print_p.c		\
			print_d.c		\
			print_o.c		\
			print_u.c		\
			print_x.c		\
			print_f.c		\
			ft_ftoa.c		\
			handle_arg.c	\
			ft_buffer.c		\
			tools.c			\
			tools2.c

LIBDIR	= libft/
LIBFT	= $(LIBDIR)libft.a

OBJDIR	= objs
OBJS	= $(addprefix $(OBJDIR)/,$(SRCS:.c=.o))

INCLUDE = ft_printf.h 

RED		= \033[1;31m
YELLOW	= \033[1;33m
PURPLE	= \033[1;34m
BLUE	= \033[1;36m
WHITE	= \033[1;39m

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT)
	@echo "$(WHITE)Making\t$(BLUE)Libft.a"
	@ar rcs $(NAME) $^
	@echo "\t\t$(YELLOW)Libftprintf.a Updated\n"

$(OBJS): | $(OBJDIR)

$(OBJDIR)/%.o: %.c
	@echo "$(PURPLE)Updating\t$(WHITE)$@"
	@$(CC) $(CFLAGS) -o $@ -c $^ -I $(INCLUDE)

$(OBJDIR) :
	@mkdir $@

$(LIBFT) : $(OBJDIR)
	@make -C $(LIBDIR)
	@cp $(LIBFT) ./$(NAME)

norme:
	@norminette $(SRCS) libft/

clean:
	@rm -rf $(OBJDIR)
	@make clean -C $(LIBDIR) 
	@echo "$(RED)Objects deleted"

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C $(LIBDIR)
	@echo "$(RED)Delete\t$(BLUE)libftprint.a"

re: fclean all
