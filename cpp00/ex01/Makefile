SRCS			= PhoneBook.cpp Contact.cpp main.cpp
OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= PhoneBook

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

test:			$(NAME)
				./PhoneBook

.PHONY:			all clean fclean re test