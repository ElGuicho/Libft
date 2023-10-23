# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 12:03:13 by gmunoz            #+#    #+#              #
#    Updated: 2023/10/05 18:10:11 by gmunoz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CC = gcc	

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlen.c \
	ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
	ft_substr.c ft_tolower.c ft_toupper.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BNSSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# Object files
OBJS = $(SRCS:.c=.o)
BNSOBJS = $(BNSSRCS:.c=.o)

# Header file
HEADER = libft.h

# Executable name
NAME = libft.a

# Default NAME
all: $(NAME)

# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files into the executable
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	ranlib $(NAME)

# Include bonus functions on libft.a
bonus: $(BNSOBJS)
	ar -rcs $(NAME) $(BNSOBJS)
	ranlib $(NAME)


# Clean up generated files
clean:
	rm -f $(OBJS) $(BNSOBJS)

#
fclean:
	rm -f $(NAME) $(OBJS) $(BNSOBJS)

# Re-compile everything
re: fclean all

.PHONY: all clean fclean re