SRCS = get_/get_next_line_utils.c get_/get_next_line.c \
		printf/ft_printf.c printf/ft_putadres.c printf/ft_putchar.c printf/ft_putlongx.c   printf/ft_putunbr.c  printf/ft_putnbr.c  printf/ft_putlowerx.c printf/ft_putstr.c  printf/ft_putupx.c\
		source/check_edges_map.c source/check_file_name.c source/check_map.c source/cleanup.c  source/message_error.c  source/find_player_and_coins.c source/flood_fill.c source/free_array.c  source/move_player.c source/run_window.c source/so_long.c source/xpm_file_to_image.c source/draw_map.c

OBJS = $(SRCS:.c=.o)
NAME = so_long
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

LIBFLAGS = -L /usr/include/minilibx-linux/ -lmlx -lXext -lX11 -lm

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)  $(LIBFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(NAMEB)
	
re: fclean all

.PHONY: all  clean fclean re