# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/25 23:16:05 by nrahali           #+#    #+#              #
#    Updated: 2022/12/26 17:21:07 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Span = Span
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp  Span.cpp

OBJ = ${SRC:.cpp=.o}

all : Span
	
$(Span): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Span 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f Span

re: fclean all