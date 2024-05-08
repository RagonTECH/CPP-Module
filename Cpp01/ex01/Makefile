NAME = Zombie
FLAGS = -std=c++98 -Wall -Wextra -Werror -std=c++98
CC = c++
SRCS = Zombie.cpp zombieHorde.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
		@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean : 
	rm $(OBJS)
fclean : clean
	rm $(NAME)
re :clean all