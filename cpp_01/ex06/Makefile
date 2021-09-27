NAME = karenFilter
LIB = karenFilter.a
SRC =./main.cpp \
	./Karen.cpp


OBJ = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ) 
	ar rcs $(LIB) $(OBJ)
	clang++  $(FLAGS) $(LIB) -o $(NAME)

%.o: %.cpp Karen.hpp
	clang++ $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ) $(LIB)

fclean: clean
	@rm -f $(NAME)

re: fclean all