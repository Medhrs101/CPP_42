NAME = Bureaucrat
LIB = Bureaucrat.a
SRC =./main.cpp \
	./Bureaucrat.cpp
HEADERS = Bureaucrat.hpp
OBJ = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ) 
	ar rcs $(LIB) $(OBJ)
	clang++  $(FLAGS) $(LIB) -o $(NAME)

%.o: %.cpp $(HEADERS)
	clang++ $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ) $(LIB)

fclean: clean
	@rm -f $(NAME)

re: fclean all