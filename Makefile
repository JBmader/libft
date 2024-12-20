NAME = libft.a

CC = cc
FLAGS = -Wall -Werror -Wextra

# Fichiers sources
FILE = ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c \
ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_memset.c \
ft_strdup.c ft_calloc.c ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c \
ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memmove.c \
ft_memcpy.c ft_bzero.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \

FILEBUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
ft_lstmap_bonus.c

# Objets correspondants
OBJ = ${FILE:.c=.o}
OBJBUS = ${FILEBUS:.c=.o}

# Règle par défaut
all: $(NAME)

# Construction de la bibliothèque
$(NAME): $(OBJ) $(OBJBUS)
	ar rcs $@ $^

# Compilation des fichiers sources
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ) $(OBJBUS)

# Nettoyage complet (objets et bibliothèque)
fclean: clean
	rm -f $(NAME)

# Récompilation
re: fclean all

.PHONY: all bonus clean fclean re