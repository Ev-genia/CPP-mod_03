# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 11:54:51 by mlarra            #+#    #+#              #
#    Updated: 2022/10/17 12:26:32 by mlarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	DiamondTrap

SRCS	=	main.cpp	ClapTrap.cpp	ScavTrap.cpp	FragTrap.cpp\
			DiamondTrap.cpp

OBJS	=	${SRCS:.cpp=.o}

HEADER	=	ClapTrap.hpp	ScavTrap.hpp	FragTrap.hpp	DiamondTrap.hpp

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

.PHONY	:	all clean fclean re

${NAME}	:	${OBJS} ${HEADER}
			${CC} ${CFLAFS} ${SRCS} -o ${NAME}

all		:	${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all