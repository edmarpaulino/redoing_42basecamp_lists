# variables
PROJECT_NAME = libft.a
SOURCE_FILES = srcs/ft_putchar.c \
               srcs/ft_swap.c \
               srcs/ft_putstr.c \
               srcs/ft_strlen.c \
               srcs/ft_strcmp.c
HEADER_DIR = includes
# This is called as substitution reference (.c will be substituted by .o)
OBJECT_FILES = ${SOURCE_FILES:.c=.o}
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror -c

# The first target is the default target (Often called the default goal)
# but we can change this behavior using the .DEFAULT_GOAL
# The .DEFAULT_GOAL can call only a one target
.DEFAULT_GOAL := all
# $() or ${} are variables expansion
all: ${PROJECT_NAME}

# The pattern rule %.o : %.c says how to make 
# any file stem.o from another file stem.c
# Every .o file in this Makefile will execute
# this rule when another rule needs the .o file
# % can match any target name one by one
# $< is patterned to match prerequisites (%.c) 
# and $@ matches the target (%.o)
# both $< and $@ are automatic variables one string at a time
%.o: %.c
	${CC} ${CC_FLAGS} $< -o $@ -I ${HEADER_DIR}

#
${PROJECT_NAME}: ${OBJECT_FILES}
	ar cr $@ ${OBJECT_FILES}

# It is a good practice not to call 'clean' in 'all' or put
# it as the first target.
# A .gch file is a precompiled header file. 
clean:
	rm -f ${OBJECT_FILES} ${HEADER_DIR}/*.gch

fclean: clean
	rm -f ${PROJECT_NAME}

re: fclean all
