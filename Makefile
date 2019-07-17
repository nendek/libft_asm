NC = nasm
NASMFLAGS = -f macho64

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -Weverything

NAME = libfts.a

FILES = ft_bzero.s

SRCS_DIR = srcs
SRCS = $(addprefix $(SRCS_DIR)/,$(FILES))

OBJS_DIR = objs
OBJS = $(addprefix $(OBJS_DIR)/,$(FILES:%.s=%.o))

RED = \033[31m
GREEN = \033[32m
END = \033[0m

all: $(NAME)
$(NAME): $(OBJS_DIR) $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	@echo "$(GREEN)LIBFT READY$(END)"

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.s
	$(NC) $(NASMFLAGS) $< -o $@

test:
	$(CC) $(CFLAGS) $(NAME) ./main.c -I ./includes

clean:
	/bin/rm -rf $(OBJS_DIR)
	@echo "$(RED)LIBFT OBJECTS REMOVE$(END)"

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -rf $(OBJS_DIR)
	@echo "$(RED)LIBFT.A REMOVE$(END)"

re: fclean all

.PHONY: all clean fclean re
