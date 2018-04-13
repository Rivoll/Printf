NAME = libftprintf.a

SRC = ft_parse.c\
      ft_printf.c\
      ft_unicode.c\
      ft_prec_and_padd.c\
      ft_cast.c\
      ft_cast2.c\
      ft_flag.c\
      ft_strdel.c\
      ft_strlen.c\
      ft_strnfdup.c\
      ft_ullitoa_base.c\
      ft_strequ.c\
      ft_strdup.c\
      ft_stradd_start.c\
      ft_putchar.c\
      ft_llitoa_base.c\
      ft_exit.c\
      ft_bzero.c\
      ft_atoi.c\
      ft_add_char_end.c\
      ft_add_char.c\
      ft_memset.c\
      ft_putstr_fd.c\
      ft_str_replace.c\
      ft_strcmp.c\
      ft_strjoin.c\
      ft_strchr.c\
      ft_putstr_fd.c\
      ft_atlli_base.c\
      ft_strnew.c\
      ft_unicode2.c

OBJ = $(SRC:.c=.o)

SRCDIR = srcs
OBJDIR = objs

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(OBJ))
HEADER = -I includes

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

C_NO = "\033[00m"
C_OK = "\033[35m"
C_GOOD = "\033[32m"
C_ERROR = "\033[31m"
C_WARN = "\033[33m"

SUCCESS = $(C_GOOD)SUCCESS$(C_NO)
OK = $(C_OK)OK$(C_NO)

.PHONY: all clean fclean re

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@/bin/mkdir -p $(OBJDIR)
	@$(CC) -I include  $(CFLAGS) $(HEADER) $< -o $@
	@echo "Linking" [ $< ] $(OK)

$(NAME): $(OBJS)
	@ar rc $@ $^
	@ranlib $@
	@echo "Compiling & indexing" [ $(NAME) ] $(SUCCESS)

clean:
	@/bin/rm -rf $(OBJDIR)
	@echo "Delete" [ objs ] $(OK)

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Delete" [ $(NAME) ] $(OK)

re: fclean all
