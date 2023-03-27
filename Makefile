CC=gcc
CFLAGS=-c -Wall -Wextra
LDFLAGS=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11
SOURCES=main.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=example

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(EXECUTABLE) $(OBJECTS)
