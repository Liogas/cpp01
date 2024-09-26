CC 		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
NAME	= zombie

SRCS		= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS		= $(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) -o $@ -c $^

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

run: $(NAME)
	@./$(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re : fclean $(NAME)

.PHONY: clean fclean re

