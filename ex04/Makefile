CC 		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
NAME	= mySed

SRCS		= main.cpp
OBJS		= $(SRCS:.cpp=.o)

FILE_NAME	= file_test
STRING_1	= JE
STRING_2	= TEST

%.o: %.cpp
	@$(CC) $(CFLAGS) -o $@ -c $^

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

run: $(NAME)
	@./$(NAME) $(FILE_NAME) $(STRING_1) $(STRING_2)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re : fclean $(NAME)

.PHONY: clean fclean re

