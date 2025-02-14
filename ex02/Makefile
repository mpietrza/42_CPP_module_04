# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 17:29:38 by mpietrza          #+#    #+#              #
#    Updated: 2025/02/14 16:36:33 by mpietrza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AbstractClass
CC = c++
CFLAGS = -Wall -Wextra -Werror #-g -O0
STD = -std=c++98
RM = rm -rf

#DIRECTIORIES
DIR_OBJS = ./objs/

#COLORS
DEF_COLOR = "\033[39m"
GRAY = "\033[30m"
R = "\033[31m"
G = "\033[32m"
Y = "\033[33m"
B = "\033[34m"
M = "\033[35m"
C = "\033[36m"
W = "\033[37m"

#SOURCES
SRC		= AAnimal.cpp \
		  Dog.cpp \
		  Cat.cpp \
		  WrongAnimal.cpp \
		  WrongCat.cpp \
		  Brain.cpp \
		  main.cpp 

OBJS	= $(addprefix $(DIR_OBJS), $(SRC:.cpp=.o))

DEPS	= $(OBJS:.o=.d)

all:	$(DIR_OBJS) $(NAME)

-include $(DEPS)

$(DIR_OBJS)%.o : %.cpp
	@echo $(B)Compiling [$<]... $(DEF_COLOR)
	@printf $(Y) 
	$(CC) $(CFLAGS) $(STD) -MMD -MP -c -o $@ $< 
	@echo $(DEF_COLOR)

$(DIR_OBJS):
	@echo $(B)Creating directory: $(DIR_OBJS)
	@printf $(Y)
	mkdir -p $(DIR_OBJS)
	@echo Directory 'objs' generated succesfully! $(DEF_COLOR)


$(NAME): $(OBJS) Makefile
	$(CC) $(CFLAGS) $(STD) $(OBJS) -o $(NAME)
	@echo $(G)AbstractClass compiled successfully! $(DEF_COLOR)

clean:
	@echo $(GRAY)
	$(RM) $(OBJS) $(DEPS) $(DIR_OBJS)
	@echo $(G)AbstractClass object files erased successfully! $(DEF_COLOR)

fclean: clean
	@echo $(GRAY)
	$(RM) $(NAME)
	@echo $(G)AbstractClass executable files erased succesfully! $(DEF_COLOR)

re: fclean all
	@echo $(G)Erased and recompiled every file of AbstractClass successfully! $(DEF_COLOR)

.PHONY: all clean fclean re
