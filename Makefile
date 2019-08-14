NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_printf.c \
		dispatcher.c \
		parsing.c \
       	print_c.c \
		print_s.c \
		print_p.c \
		print_d.c \
		print_o.c \
		print_u.c \
		print_x.c 

OBJS = $(SRCS:.c=.o)

LIBDIR = libft/
LIBFT = $(LIBDIR)libft.a
INCLUDE = ft_printf.h 

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT)
	@ar -rcs $@ $^

%.o: %.c
	@$(CC) $(CFLAGS) -c $(SRCS)-I $(INCLUDE)

$(LIBFT) :
	@make -C $(LIBDIR)

clean:
	@rm -rf $(OBJS)
	@make clean -C $(LIBDIR) 
	
fclean: clean
	@rm -rf $(NAME)
	@make fclean -C $(LIBDIR)

re: fclean all

.PHONY: clean all re fclean
