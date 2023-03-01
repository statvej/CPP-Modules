SRCS			= main.cpp MateriaSource.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp 
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -I. -Wall -Wextra -Werror -g

NAME			= Materia
all:	$(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 


fclean:			clean
	$(RM) $(NAME)
re:				fclean $(NAME)
