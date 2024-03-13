# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/09 10:00:26 by zramahaz          #+#    #+#              #
#    Updated: 2024/03/13 09:44:47 by zramahaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c ft_printf.c ft_putnbr.c ft_putnbr_hex.c ft_print_string.c \
	ft_print_int.c ft_print_ui.c ft_choice.c gt_print_address

OBJ = $(SRC:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) -o $@ $^ #liste des dependance -> <$^>

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) 

re = fclean all

.PHONY: all bonus clean fclean re
