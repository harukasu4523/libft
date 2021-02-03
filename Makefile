# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/15 10:39:17 by hiwata            #+#    #+#              #
#    Updated: 2020/10/31 16:58:52 by hiwata           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAG = -Wall -Wextra -Werror

SRCS =ft_memcpy.c ft_memset.c ft_bzero.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_isdigit.c ft_atoi.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_strlcat.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_itoa.c

OBJS = $(SRCS:.c=.o)

BOBJ = $(BONUS:.c=.o)

RM = rm -rf

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

.c.o:
		$(CC) $(CFLAG) -I lift.h -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

bonus: $(BOBJ)
		ar rc $(NAME) $(BOBJ)

all: $(NAME)

clean:
		$(RM) $(OBJS) $(BOBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONEY: all clean fclean re
