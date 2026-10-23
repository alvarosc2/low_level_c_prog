CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
CRITERION_FLAGS = $(shell pkg-config --cflags --libs criterion)

TARGET = main
TEST_TARGET = unit_test
SOURCES = main.c base_aritmethic.c
OBJECTS = $(SOURCES:.c=.o)

.PHONY: all clean

all:$(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

$(TEST_TARGET): unit_test.c base_aritmethic.c base_aritmethic.h
	$(CC) $(CFLAGS) unit_test.c base_aritmethic.c -o $(TEST_TARGET) $(CRITERION_FLAGS)

test: $(TEST_TARGET)
	./$(TEST_TARGET)

%.o: %.c base_aritmethic.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(TARGET) $(TEST_TARGET) $(OBJECTS)