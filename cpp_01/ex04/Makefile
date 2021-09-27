NAME = replace
LIB = replace.a
SRC =./main.cpp


OBJ = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ) 
	ar rcs $(LIB) $(OBJ)
	clang++  $(FLAGS) $(LIB) -o $(NAME)

%.o: %.cpp
	clang++ $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ) $(LIB)

fclean: clean
	@rm -f $(NAME) *.replace

re: fclean all