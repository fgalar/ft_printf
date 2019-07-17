NAME = libftprint.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c dispatcher.c parsing.c \
       print_c.c print_s.c

OBJS = $(addprefix obj/, $(SRCS:.c=.o))

LIBDIR = libft/
LIBFT = $(LIBDIR)libft.a
INCLUDES= $(LIBDIR)libft.h ft_printf.h 

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT)
	libtool -static -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $(SRCS) -I $(INCLUDES)

$(LIBFT) :
	make -C $(LIBDIR)

clean:
	rm $(OBJS)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean all re fclean
