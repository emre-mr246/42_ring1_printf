NAME			=	libftprintf.a

CC				=	gcc
CFLAGS			=	-I ./print_functions # -Wall -Wextra -Werror
AR				=	ar
ARFLAGS 		=	rcs
RM				=	rm -rf

SRCS			=	ft_printf.c \
					ft_format_utilities.c \
					./print_functions/ft_putstr.c \
					./print_functions/ft_putnbr.c \
					./print_functions/ft_putunsigned.c \
					./print_functions/ft_putptr.c \
					./print_functions/ft_puthex.c

OBJ_DIR			=	objects
OBJS			=	$(SRCS:.c=.o)

LIBFT_PATH		=	./libft
LIBFT			=	${LIBFT_PATH}/libft.a

all:	$(NAME)

$(NAME):	$(LIBFT) $(OBJS)
	cp	$(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	make move_objects
	@echo "\033[90m[\033[32mSuccess\033[90m]\033[32m Successfully compiled "libftprintf.a"\033[0m"

$(LIBFT):
	make -C $(LIBFT_PATH) all

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

move_objects: $(OBJ_DIR)
	mv ${OBJS} objects

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJ_DIR)
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m object files deleted\033[0m"

fclean:	clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m $(NAME) deleted\033[0m"

re:	fclean all

.PHONY:	all clean fclean re libft
