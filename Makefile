# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smomeu <smoemu@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 21:31:31 by smomeu            #+#    #+#              #
#    Updated: 2024/11/01 19:05:22 by smomeu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
INCLUDES = includes
SRCS = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	ar rcs $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re