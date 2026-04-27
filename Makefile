# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dandrush <dandrush@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/22 18:20:13 by dandrush          #+#    #+#              #
#    Updated: 2026/04/27 16:00:57 by dandrush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re test norm
NAME = libft.a
ALL_SRCS = $(wildcard *.c)
TEST_SRC = main.c tests.c
SRC = $(filter-out $(TEST_SRC), $(ALL_SRCS) )
HEAD = libft.h
OBJ = $(SRC:.c=.o)
INCLUDES = -I.
COMPILED = main.o tests.o a.out test_exec libft.h.gch
# target: prequsitions
# 	action
all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c $(HEAD)
	cc -c -Wall -Wextra -Werror $(INCLUDES) $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(COMPILED)

re: fclean 

norm:
	norminette libft.h $(SRC)

test: all
	cc -Wall -Wextra -Werror $(TEST_SRC) libft.a $(INCLUDES) -o test_exec
	./test_exec