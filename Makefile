NAME = libftprint.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = 
OBJS = $(patsubst src/%.c, obj/%.o, $(SRCS))

all: $(NAME)

$(OBJS) : 

obj :
	@mkdir -p $@
obj/%.o: src/%.c
	$(CC) -c $(CFLAGS) $< -o $@
obj/%.o: libft/%.c
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $^

clean:
	rm $(OBJS)

fclean: fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean all re fclean
