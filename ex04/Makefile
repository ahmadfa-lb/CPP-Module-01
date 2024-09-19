# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 12:07:47 by afarachi          #+#    #+#              #
#    Updated: 2024/09/19 12:03:24 by afarachi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Sed_is_for_losers

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp FileHandler.cpp
OBJ		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all re clean fclean

