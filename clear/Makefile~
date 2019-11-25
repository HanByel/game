CC=g++
OBJS=main.o Terminal_Clear.o
TARGET=app

all: $(TARGET)

clean:
	rm -f *.o
	rm -f $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

main.o: Terminal_Clear.hpp main.cpp
Terminal_Clear.o: Terminal_Clear.hpp Terminal_Clear.cpp
