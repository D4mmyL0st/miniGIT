
CC = gcc
CFLAGS = -Wall -Wextra -Iheaders

SRC = core/main.c core/repo.c core/file.c core/hash.c core/branch.c core/commit.c
OBJ = $(SRC:.c=.o)

TARGET = mini_git

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
