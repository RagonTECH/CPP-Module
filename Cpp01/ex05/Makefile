NAME = main
FLAGS = -std=c++98 -Wall -Wextra -Werror -std=c++98
CC = c++
SRCS = Harl.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
		@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean : 
	rm $(OBJS)
fclean : clean
	rm $(NAME)
re :clean all