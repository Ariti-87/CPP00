# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arincon <arincon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 12:23:16 by arincon           #+#    #+#              #
#    Updated: 2024/01/11 09:33:44 by arincon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= phonebook

#SOURCES_____________________________________________________________

SRCS		:=	phonebook.cpp

#OBJECT______________________________________________________________

OBJS		:= $(SRCS:.cpp=.o)

#FLAGS_______________________________________________________________

CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98 -g
RM			:= rm -f
MAKEFLAGS	+= --no-print-directory
DIR_DUP		= mkdir -p $(@D)

#COLORS______________________________________________________________

GREEN	=	\033[0;32m
RED		=	\033[0;31m
WHITE	=	\033[0;97m
RESET	=	\033[0m
YELLOW 	=	\033[0;93m

#MAIN_RULE___________________________________________________________

all: $(NAME)

$(NAME): $(OBJS)
	@echo -n "$(YELLOW)Compiling	${WHITE}→	$(YELLOW)$(NAME)$(RESET) "
	@echo "$(GREEN)[ok]✓$(RESET)"
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

#CLEAN_RULE__________________________________________________________

clean:
	@echo -n "$(RED)Deleting	${WHITE}→	$(RED)$(NAME) object$(RESET) "
	$(RM) $(OBJS)
	@echo "$(GREEN)[ok]$(RED)✗$(RESET)"

fclean: clean
	@echo -n "$(RED)Deleting	${WHITE}→	$(RED)$(NAME) executable$(RESET) "
	$(RM) $(NAME)
	@echo "$(GREEN)[ok]$(RED)✗$(RESET)"

re: fclean all


#SPEC________________________________________________________________

.PHONY: clean fclean re
.SILENT:

