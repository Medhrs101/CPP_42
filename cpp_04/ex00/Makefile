NAME = Animal
LIB = Animal.a
SRC =./main.cpp \
	./Animal.cpp \
	./Dog.cpp \
	./Cat.cpp\
	./WrongAnimal.cpp \
	./WrongCat.cpp

HEADERS = Animal.hpp WrongAnimal.hpp Cat.hpp WrongCat.hpp Dog.hpp
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