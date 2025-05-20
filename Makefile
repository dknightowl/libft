# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkhoo <dkhoo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 09:05:13 by dkhoo             #+#    #+#              #
#    Updated: 2025/05/18 10:41:46 by dkhoo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library
NAME = libft.a

# Compiler and flags
CC		=	cc
CCFLAGS	=	-Wall -Wextra -Werror

# Files
LIBC_SRC_FILES		=	ft_isalpha.c\
						ft_isdigit.c\
						ft_isalnum.c\
						ft_isascii.c\
						ft_isprint.c\
						ft_strlen.c\
						ft_memset.c\
						ft_bzero.c\
						ft_memcpy.c\
						ft_memmove.c\
						ft_strlcpy.c\
						ft_strlcat.c\
						ft_toupper.c\
						ft_tolower.c\
						ft_strchr.c\
						ft_strrchr.c\
						ft_strncmp.c\
						ft_memchr.c\
						ft_memcmp.c\
						ft_strnstr.c\
						ft_atoi.c\
						ft_calloc.c\
						ft_strdup.c
EXTRA_SRC_FILES		=	ft_substr.c\
						ft_strjoin.c\
						ft_strtrim.c\
						ft_split.c\
						ft_itoa.c\
						ft_strmapi.c\
						ft_striteri.c\
						ft_putchar_fd.c\
						ft_putstr_fd.c\
						ft_putendl_fd.c\
						ft_putnbr_fd.c
BONUS_SRC_FILES		=	ft_lstnew_bonus.c\
						ft_lstadd_front_bonus.c\
						ft_lstsize_bonus.c\
						ft_lstlast_bonus.c\
						ft_lstadd_back_bonus.c\
						ft_lstdelone_bonus.c\
						ft_lstclear_bonus.c\
						ft_lstiter_bonus.c\
						ft_lstmap_bonus.c
MANDATORY_SRC_FILES	=	$(LIBC_SRC_FILES) $(EXTRA_SRC_FILES)
HEADER_FILE			=	libft.h
MANDATORY_OBJ_FILES	=	$(MANDATORY_SRC_FILES:.c=.o)
BONUS_OBJ_FILES		=	$(BONUS_SRC_FILES:.c=.o)

# make all
all: $(NAME)

# make bonus
bonus: $(MANDATORY_OBJ_FILES) $(BONUS_OBJ_FILES)
	ar rcs $(NAME) $(MANDATORY_OBJ_FILES) $(BONUS_OBJ_FILES)

# Create library
# 	r: replace/add object files
# 	c: create library if it does not exist
# 	s: add an index to make it easier for the linker to find symbols
$(NAME): $(MANDATORY_OBJ_FILES)
	ar rcs $(NAME) $(MANDATORY_OBJ_FILES)

# Compile source files into object files
# 	-c : compile without main
# 	-o : output name
$(MANDATORY_OBJ_FILES): %.o:%.c $(HEADER_FILE)
	$(CC) $(CCFLAGS) -c $< -o $@

$(BONUS_OBJ_FILES): %.o:%.c $(HEADER_FILE)
	$(CC) $(CCFLAGS) -c $< -o $@

# Clean object files only
clean:
	rm -f $(MANDATORY_OBJ_FILES) $(BONUS_OBJ_FILES)

# Clean object files and library
fclean: clean
	rm -f $(NAME)

# Clean and rebuild everything
re: fclean all

.PHONY: all clean fclean re bonus
