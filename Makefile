# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/18 17:20:48 by mbaloyi           #+#    #+#              #
#    Updated: 2018/06/01 17:19:04 by mbaloyi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a	
CC = gcc	
SRCS = *.c		
CFLAGS = -Wall -Wextra -Werror 
OBJS 	= *.o			

all: $(NAME)

$(NAME) :
	@gcc $(CFLAGS) -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJS)
	@rm -rf $(OBJDIR)

fclean : clean
	@/bin/rm -rf $(NAME)

re : fclean all
