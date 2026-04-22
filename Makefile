# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dandrush <dandrush@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/22 18:20:13 by dandrush          #+#    #+#              #
#    Updated: 2026/04/22 22:00:20 by dandrush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re test norm
NAME = libft.a
SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c
HEAD = libft.h libft_st.h
OBJ = $(SRC:.c=.o)
TEST_SRC = main.c tests.c
INCLUDES = -I.
# target: prequsitions
# 	action
all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEAD)
	cc -Wall -Wextra -Werror $(INCLUDES) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) main.o tests.o a.out test_exec
re: fclean all

norm:
	norminette libft.h $(SRC)

test: all
	cc -Wall -Wextra -Werror $(TEST_SRC) libft.a $(INCLUDES) -o test_exec
	./test_exec