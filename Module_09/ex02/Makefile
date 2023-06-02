# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 14:48:17 by nrahali           #+#    #+#              #
#    Updated: 2023/05/23 20:00:44 by nrahali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PmergeMe =  PmergeMe
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp PmergeMe.cpp Errors.cpp utils.cpp algo_vector.cpp algo_deque.cpp

OBJ = ${SRC:.cpp=.o}

all : PmergeMe
	
$(PmergeMe): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o PmergeMe 

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@rm -f PmergeMe

re: fclean all