NAME = AMateria
LIB = AMateria.a
SRC =./main.cpp \
	./AMateria.cpp \
	./Character.cpp \
	./Cure.cpp \
	./Ice.cpp \
	./MateriaSource.cpp

HEADERS = AMateria.hpp Character.hpp Ice.hpp Cure.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp
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