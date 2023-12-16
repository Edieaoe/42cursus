NAME	= libft.a
SRCS_m	= ft_isdigit.c ft_memset.c ft_striteri.c ft_strrchr.c\
		ft_isprint.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c\
		ft_atoi.c ft_itoa.c ft_putendl_fd.c ft_strlcat.c ft_substr.c\
		ft_bzero.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c\
		ft_calloc.c  ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c\
		ft_isalnum.c ft_memcmp.c ft_split.c ft_strmapi.c\
		ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strncmp.c\
		ft_isascii.c  ft_memmove.c ft_strdup.c ft_strnstr.c
SRCS_b	= ft_lstlast.c ft_lstmap.c ft_lstnew.c\
		ft_lstadd_back.c ft_lstsize.c ft_lstadd_front.c\
		ft_lstclear.c ft_lstdelone.c ft_lstiter.c
OBJS_m	= $(SRCS_m:%.c=%.o)
OBJS_b	= $(SRCS_b:%.c=%.o)
CC		= cc -Wall -Wextra -Werror

all: $(NAME)

ifeq ($(flag), 1)
$(NAME): $(OBJS_m) $(OBJS_b)
	ar -rc $(NAME) $(OBJS_m) $(OBJS_b)
else
$(NAME): $(OBJS_m)
	ar -rc $(NAME) $(OBJS_m)
endif

bonus: $(OBJS_m) $(OBJS_b)
	@make flag=1

clean:
	rm -rf $(OBJS_m) $(OBJS_b)

fclean: clean
	rm -rf $(NAME)

re: fclean all

