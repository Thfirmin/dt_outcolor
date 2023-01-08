NAME	= liboclr.a

FUNC	= dt_outcolor.c \
		  dt_foutcolor.c \
		  dt_voutcolor.c \
		  dt_fvoutcolor.c

SRCS	= $(FUNC)

OBJS	= $(SRCS:.c=.o)

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

debug: CFLAGS += -g

debug: all

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
ifneq (,$(shell ls $(OBJS) 2> /dev/null))
	rm -rf $(OBJS)
endif

fclean:	clean
ifneq (,$(shell ls $(NAME) 2> /dev/null))
	rm -rf $(NAME)
endif

re:	fclean all

.PHONY:	all debug clean fclean re
