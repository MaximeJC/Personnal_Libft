# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 14:57:39 by mgouraud          #+#    #+#              #
#    Updated: 2025/01/21 13:17:51 by mgouraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#! Variables

NAME		= libft.a
INCLUDES	= ./
OBJ_DIR		= obj/
SRC_DIR		= src/

AR		= ar rcs
CC		= gcc
CFLAGS	= -g -Wall -Wextra -Werror -I

#! Sources

FT_IS_DIR	=	ft_is/
FT_IS		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint \
				ft_iswhitespace

FT_LST_DIR	=	ft_lst/
FT_LST		=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsecondtolast \
				ft_lstsize

FT_MATH_DIR	=	ft_math/
FT_MATH		=	ft_max ft_min ft_pow

FT_MEM_DIR	=	ft_mem/
FT_MEM		=	ft_bzero ft_memset ft_memcpy ft_memmove ft_memchr \
				ft_memcmp ft_calloc

FT_MISC_DIR	=	ft_misc/
FT_MISC		=	ft_printf get_next_line

FT_PUT_DIR	=	ft_put/
FT_PUT		=	ft_putchar_fd ft_putendl_fd ft_putlnbr_fd ft_putnbr_base_fd \
				ft_putnbr_fd ft_putptr_fd ft_putstr_fd

FT_STR_DIR	=	ft_str/
FT_STR		=	ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr \
				ft_strncmp ft_strnstr ft_strdup ft_substr ft_strjoin \
				ft_strtrim ft_split ft_strmapi ft_striteri

FT_TO_DIR	=	ft_to/
FT_TO		=	ft_atoi ft_atol ft_itoa ft_tolower ft_toupper

SRC_FILES	=	$(addprefix $(FT_IS_DIR),$(FT_IS)) \
				$(addprefix $(FT_LST_DIR),$(FT_LST)) \
				$(addprefix $(FT_MATH_DIR),$(FT_MATH)) \
				$(addprefix $(FT_MEM_DIR),$(FT_MEM)) \
				$(addprefix $(FT_MISC_DIR),$(FT_MISC)) \
				$(addprefix $(FT_PUT_DIR),$(FT_PUT)) \
				$(addprefix $(FT_STR_DIR),$(FT_STR)) \
				$(addprefix $(FT_TO_DIR),$(FT_TO))

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

#! Make

$(NAME): $(OBJS)
	@echo "Compiling Libft.a ..."
	@$(AR) $(NAME) $(OBJS)
	@echo "Libft.a compiled!"

#? %  : Pattern ou Joker -
#?		Permet d'appliquer une regle a tous les fichiers designes
#? $@ : produit (ou but) de la règle
#? $< : nom de la première dépendance (ou source)
#? $? : toutes les dépendances plus récentes que le but
#? $^ : toutes les dépendances
#? $+ : idem mais chaque dépendance apparait autant de fois
#?		qu'elle est cité et l'ordre d'apparition est conservé.

#? On a besoin de la regle obj_mkdir pour n'executer qu'une seule
#? fois les mkdir, au lieu d'une fois par fichier.

#? OBJS = $(SRC_FILES:.c=.o)
$(OBJ_DIR)%.o : $(SRC_DIR)%.c | obj_mkdir
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Libft objects files cleaned!"

fclean: clean
	@rm -f $(NAME)
	@echo "Libft.a cleaned!"

obj_mkdir:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_IS_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_LST_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_MATH_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_MEM_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_MISC_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_PUT_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_STR_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_TO_DIR)

re: fclean all
	@echo "Cleaned and rebuild Libft from zero!"

.PHONY: all clean fclean obj_mkdir re
