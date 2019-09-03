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
		print_x.c \
<<<<<<< HEAD
		print_f.c 
=======
		print_f.c \
		ft_ftoa.c \
>>>>>>> dev

OBJS = $(SRCS:.c=.o)

LIBDIR = libft/
LIBFT = $(LIBDIR)libft.a
INCLUDE = ft_printf.h 

all : $(NAME)

<<<<<<< HEAD
$(NAME) : $(LIBFT) $(OBJS)
	cp $(LIBFT) $@
	ar rcs $@ $^ 
=======
$(NAME) : $(OBJS)
	@make -C $(LIBDIR)
	@cp libft/libft.a ./$(NAME)
	ar rcs $(NAME) $^

>>>>>>> dev
%.o: %.c
	@$(CC) $(CFLAGS) -c $^ -I $(INCLUDE)

clean:
	@rm -rf $(OBJS)
	@make clean -C $(LIBDIR) 
	
fclean: clean
	@rm -rf $(NAME)
	@make fclean -C $(LIBDIR)

re: fclean all
