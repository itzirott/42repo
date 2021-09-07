NAME = bsq
SRC = main.c fich.c init.c utilities.c checks.c logic.c
INCL = bsq.h
FLAGS = -Wall -Werror -Wextra
all: $(NAME)

$(NAME):
	gcc -I$(INCL) -o $(NAME) $(FLAGS) $(SRC)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: clean all
