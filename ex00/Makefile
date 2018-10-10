# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgong <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/06 13:21:46 by sgong             #+#    #+#              #
#    Updated: 2018/10/09 20:37:58 by sgong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
NAME00 = colle-00
NAME01 = colle-01
NAME02 = colle-02
NAME03 = colle-03
NAME04 = colle-04
OBJ = colle_2.o ft_colle.o ft_read.o ft_rush0x.o ft_rush.o ft_itoa.o ft_print.o
OB2 = ft_rush00.o ft_rush01.o ft_rush02.o ft_rush03.o
CFLAGS = gcc -c -Wall -Wextra -Werror -Iinclude

all : $(NAME) $(NAME00) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

$(NAME) : $(OBJ) $(OB2)
	gcc $(OBJ) $(OB2) -o $(NAME)

colle_2.o : colle_2.c
	$(CFLAGS) colle_2.c

ft_rush0x.o : ft_rush0x.c
	$(CFLAGS) ft_rush0x.c

ft_colle.o : ft_colle.c
	$(CFLAGS) ft_colle.c

ft_read.o : ft_read.c
	$(CFLAGS) ft_read.c

ft_itoa.o : ft_itoa.c 
	$(CFLAGS) ft_itoa.c

ft_print.o : ft_print.c
	$(CFLAGS) ft_print.c

ft_rush00.o : ft_rush00.c 
	$(CFLAGS) ft_rush00.c

ft_rush01.o : ft_rush01.c 
	$(CFLAGS) ft_rush01.c

ft_rush02.o : ft_rush02.c 
	$(CFLAGS) ft_rush02.c

ft_rush03.o : ft_rush03.c 
	$(CFLAGS) ft_rush03.c

$(NAME00) : rush00.o ft_rush.o
	gcc rush00.o ft_rush.o -o $(NAME00)

rush00.o : rush00.c
	$(CFLAGS) rush00.c

$(NAME01) : rush01.o ft_rush.o
	gcc rush01.o ft_rush.o -o $(NAME01)

rush01.o : rush01.c
	$(CFLAGS) rush01.c

$(NAME02) : rush02.o ft_rush.o
	gcc rush02.o ft_rush.o -o $(NAME02)

rush02.o : rush02.c
	$(CFLAGS) rush02.c

$(NAME03) : rush03.o ft_rush.o
	gcc rush03.o ft_rush.o -o $(NAME03)

rush03.o : rush03.c

	$(CFLAGS) rush03.c

$(NAME04) : rush04.o ft_rush.o
	gcc rush04.o ft_rush.o -o $(NAME04)

rush04.o : rush04.c
	$(CFLAGS) rush04.c

ft_rush.o : ft_rush.c

	$(CFLAGS) ft_rush.c

clean :
	rm *.o

cleanexe:
	rm $(NAME) $(NAME00) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

fclean : clean
	rm $(NAME) $(NAME00) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

re : fclean all
