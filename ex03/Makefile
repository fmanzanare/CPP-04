# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 11:00:25 by fmanzana          #+#    #+#              #
#    Updated: 2023/07/07 13:20:39 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interfaces

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	AMateria.cpp\
		Ice.cpp\
		Cure.cpp\
		Character.cpp\
		MateriaSource.cpp\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Interfaces compiled!"

%.o:	%.cpp
	@$(CC) $(CFLAGS) -c $<

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)
	@echo "Everything cleaned!"

re:		fclean all

.PHONY: all clean fclean re
