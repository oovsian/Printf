# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 19:59:35 by oovsiann          #+#    #+#              #
#    Updated: 2024/07/27 19:43:20 by oovsiann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables:

#The name of the final static library to be created
NAME  = libftprintf.a

#A list of source files to be compiled into object files
SOURCES = 	ft_printf.c\
			ft_putchar.c\
			ft_print_int.c\
			ft_print_str.c\
			ft_print_ptr.c\
			ft_print_unsigned.c\
			ft_print_hex.c\
			ft_print_percent.c\
			
#The '.o' object files generated from the 'SOURCES'
OBJECTS = $(SOURCES:.c=.o)

#The compiler to be used, in this case, 'gcc'
CC = clang

#Compiler flags to use during compilation
CFLAGS = -Wall -Wextra -Werror -gdwarf-4

#The archiver command used to create the static library
AR	= ar rcs

#Pattern Rule:

#A pattern rule that tells 'make' how to create '.o object files from '.c' source files using the specified compiler and flags
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

#The default target. It depends on '$(NAME)', so running 'make' without arguments will build the static library
all: $(NAME)

#Depends on '$(OBJECTS)'. It uses the 'ar' command to create the static library from the object files
$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)
	
#Removes the object files
clean:
	rm -f $(OBJECTS)

#Invokes 'clean' and then removes the static library file
fclean: clean
	rm -f $(NAME)

#Invokes 'fclean' followed by 'all', effectively rebuilding the static library from scratch
re: fclean all

#Special Targets:

#Declares 'all', 'clean', 'fclean' and 're' as phony targets, meaning they don't represent actual files 
#This ensures they always run when specified, regardless of whether a file with that name exists
.PHONY: all clean fclean re
