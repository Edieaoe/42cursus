NAME	= libft.a
SRCS_m	= ft_isdigit.c ft_memset.c ft_striteri.c ft_strrchr.c\
		ft_isprint.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c\
		ft_atoi.c ft_itoa.c ft_putendl_fd.c ft_strlcat.c ft_substr.c\
		ft_bzero.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c\
		ft_calloc.c  ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c\
		ft_isalnum.c ft_memcmp.c ft_split.c ft_strmapi.c\
		ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strncmp.c\
		ft_isascii.c  ft_memmove.c ft_strdup.c ft_strnstr.c
SRCS_b	= 
OBJS_m	= $(SRCS_m:%.c=%.o)
OBJS_b	= $(SRCS_b:%.c=%.o)
CC		= cc -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

