SRCS =	main_0.c find_mid.c\
		find.c is_prev.c\
		sort_0.c sort_1.c\
		utils_1.c utils_0.c\
		utils_push-swap_0.c utils_rotate_0.c\
		stack_init.c

HDRS =	push_swap.h

OBJS = 	$(SRCS:.c=.o)

NAME = 	push_swap

CC = 	gcc
CFLAGS = -Wall -Wextra -Werror
RM = 	rm -f

.PHONY: all clean fclean re

all:	$(NAME)

$(MOBJS):$(HDRS) Makefile
$(OBJS):$(HDRS) Makefile

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

