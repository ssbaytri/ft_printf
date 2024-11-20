CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

AR = ar rcs

SRCS = 	ft_printf.c\
		ft_putstr.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putun.c\
		ft_puthex.c\
		ft_putp.c\

BONUS = ./bonus/ft_printf_bonus.c\
		./bonus/ft_putstr_bonus.c\
		./bonus/ft_putchar_bonus.c\
		./bonus/ft_putnbr_bonus.c\
		./bonus/ft_putun_bonus.c\
		./bonus/ft_puthex_bonus.c\
		./bonus/ft_putp_bonus.c\

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}

HEADERS = ft_printf.h
BONUS_HEADERS = ./bonus/ft_printf_bonus.h

%.o: %.c ${HEADERS}
	${CC} ${CFLAGS} -c $< -o $@

./bonus/%.o: ./bonus/%.c ${BONUS_HEADERS}
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

bonus: fclean ${BONUS_OBJS}
	${AR} ${NAME} ${BONUS_OBJS}

clean:
	rm -f ${OBJS} ${BONUS_OBJS}

fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re bonus