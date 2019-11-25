CC=g++
OBJS=main.o control_IO.o
TARGET=app

all: $(TARGET)

clean:
	rm -f *.o
	rm -f $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

main.o: control_IO.hpp main.cpp
control_IO.o: control_IO.hpp control_IO.cpp
