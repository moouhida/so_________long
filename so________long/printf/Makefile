NAME = libftprintf.a

SRC = ft_putnbr.c ft_putunbr.c ft_printf.c ft_putupx.c ft_putlowerx.c ft_putchar.c  ft_putstr.c ft_putlongx.c ft_putadres.c

OBJ = $(SRC:.c=.o)

AR = ar rcs

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
