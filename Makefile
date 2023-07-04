# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 16:45:08 by johnavar          #+#    #+#              #
#    Updated: 2023/07/04 19:03:29 by sebasnadu        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

DIR_SRCS	= src
DIR_OBJS	= obj
SUBDIRS		= is to mem str put lst printf

SRCS_DIRS	= $(foreach dir, $(SUBDIRS), $(DIR_SRCS)/$(dir))
OBJS_DIRS	= $(foreach dir, $(SUBDIRS), $(DIR_OBJS)/$(dir))
SRCS		= $(foreach dir, $(SRCS_DIRS), $(wildcard $(dir)/*.c))
OBJS		= $(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))

INCLUDES	= includes

CC			= cc
FLAGS		= -Wall -Wextra -Werror
RM			= rm -f

LIBC		= ar -rcs

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c
	@mkdir -p $(DIR_OBJS) $(OBJS_DIRS)
	@$(CC) $(FLAGS) -I$(INCLUDES) -c $< -o $@

all: 		$(NAME)

$(NAME):	$(OBJS)
	@$(LIBC) $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@$(RM) $(OBJS)
	@$(RM) -r $(DIR_OBJS)

fclean:		clean
	@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
