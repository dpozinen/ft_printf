#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpozinen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/14 22:51:25 by dpozinen          #+#    #+#              #
#    Updated: 2018/03/15 12:55:36 by dpozinen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

FLAGS = -Wall -Werror -Wextra

PRINTSRCS = ft_main_printf.c \
make_flags.c \
add_width_precision_length.c \
make_and_put_return_string.c \
ft_printf.c \
make_width_precision_length.c \
tools.c \
make_signed.c \
make_unicode.c \
make_unsigned.c \
make_char_types.c

LIBSRCS = ft_strcmp.c ft_strncpy.c ft_isdigit.c	ft_strcpy.c	ft_strnew.c \
ft_number_size.c ft_strdup.c ft_toupper.c \
ft_putchar.c ft_strjoin.c get_char_index.c \
ft_putstr.c	ft_strlen.c	\
ft_strchr.c	ft_strncmp.c put_while_not_c.c

PRINTOBJS = $(addprefix $(OBJDIR)/, $(PRINTSRCS:.c=.o))

LIBOBJS = $(addprefix $(OBJDIR)/, $(LIBSRCS:.c=.o))

OBJDIR = objects

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJDIR) $(LIBOBJS) $(PRINTOBJS)
	@ar rc $(NAME) $(PRINTOBJS) $(LIBOBJS)
	@echo "made $(NAME)"

$(LIBOBJS): $(OBJDIR)/%.o : libft_printf/%.c
	@gcc $(FLAGS) -I libft_printf/libft.h -o $@ -c $<

$(PRINTOBJS): $(OBJDIR)/%.o : %.c
	@gcc $(FLAGS) -o $@ -c $<

$(OBJDIR):
	@mkdir $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

nf:
	@gcc -o nf $(SRCS) main.c libftprintf.a
	@./nf
	@rm nf

main:
	@gcc -o main main.c libftprintf.a
	@./main
	@rm main