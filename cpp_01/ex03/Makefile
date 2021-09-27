NAME = Unnecessary_violence
LIB = Unnecessary_violence.a
SRC =./main.cpp \
	./HumanA.cpp \
	./HumanB.cpp \
	./Weapon.cpp

HEADERS = ./HumanA.hpp \
	./HumanB.hpp \
	./Weapon.hpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME) 

$(NAME) : ./main.o ./HumanA.o ./HumanB.o ./Weapon.o
	ar rcs $(LIB) $(OBJ)
	clang++  $(FLAGS) $(LIB) -o $(NAME)

%.o: %.cpp $(HEADERS)
	clang++ $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ) $(LIB)

fclean: clean
	@rm -f $(NAME)

re: fclean all