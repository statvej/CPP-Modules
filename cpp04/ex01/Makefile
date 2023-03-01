SRCS			= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -I. -Wall -Wextra -Werror

NAME			= Animals
all:	$(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) wrong

# wrong:
# 	rm -f wrong
# 	$(CXX) $(CXXFLAGS) WrongAnimal.cpp WrongCat.cpp WrongMain.cpp -o wrong

fclean:			clean
	$(RM) $(NAME)
re:				fclean $(NAME)
