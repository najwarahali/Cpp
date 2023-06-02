# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 18:18:51 by nrahali           #+#    #+#              #
#    Updated: 2022/12/08 15:38:11 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


Bureaucrat = Bureaucrat
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp Bureaucrat.cpp Form.cpp

OBJ = ${SRC:.cpp=.o}

all : Bureaucrat
	
$(Bureaucrat): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Bureaucrat 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f Bureaucrat

re: fclean all