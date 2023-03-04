SRCS			= main.cpp Bureaucrat.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -I. -Wall -Wextra -Werror -g

NAME			= Bureaucracy
all:	$(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 


fclean:			clean
	$(RM) $(NAME)
re:				fclean $(NAME)
