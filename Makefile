# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iltellat <iltellat@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 17:20:55 by iltellat          #+#    #+#              #
#    Updated: 2025/03/16 15:04:35 by iltellat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
AR = ar rc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
SRCS = ft_printf utils/ft_strlen utils/ft_putchar utils/ft_putstr utils/ft_putnbr \
		utils/ft_putnbr_base utils/ft_putunbr
HEADER = ft_printf.h utils/utils.h
MAKEFILEFLAGS += silent
OBJ = $(SRCS:=.o)

all: signature $(NAME)

signature :
	@ clear
	@ echo "\033[36m ________  _________         _______  _______     _____  ____  _____  _________  ________  "
	@ echo "|_   __  ||  _   _  |       |_   __ \|_   __ \   |_   _||_   \|_   _||  _   _  ||_   __  | "
	@ echo "  | |_ \_||_/ | | \_|         | |__) | | |__) |    | |    |   \ | |  |_/ | | \_|  | |_ \_| "
	@ echo "  |  _|       | |             |  ___/  |  __ /     | |    | |\ \| |      | |      |  _|    "
	@ echo " _| |_       _| |_  _______  _| |_    _| |  \ \_  _| |_  _| |_\   |_    _| |_    _| |_     "
	@ echo "|_____|     |_____||_______||_____|  |____| |___||_____||_____|\____|  |_____|  |_____|  \033[0mby ricky9leet"
	@ echo -n "Loading ft_printf" 
	@ for i in 1 2 3; do echo -n ".";sleep 0.7;done;	 

$(NAME): $(OBJ)
	@ echo "\n\033[32m[OK] \033[0mCompiling $(NAME)"
	@ sleep 0.5
	@$(AR) $(NAME) $(OBJ)
	@ echo "\033[32m[OK] \033[0m$(NAME) is ready"

%.o:%.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@ echo "\033[31m[OK] \033[0mCleaning object files"
	@ sleep 0.5
	@$(RM) $(OBJ)
	@ echo "\033[31m[OK] \033[0mObject files are cleaned"

fclean: clean
	@ echo "\033[31m[OK] \033[0mCleaning $(NAME)"
	@ sleep 0.5
	@$(RM) $(NAME)
	@ echo "\033[31m[OK] \033[0m$(NAME) is cleaned"

re: fclean all

.PHONY: clean