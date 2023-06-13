CC = g++
CFLAGS := -Os -pipe -Wall -Wextra -fPIC -I. -Wno-unused-function $(CFLAGS)
LDFLAGS := $(LDFLAGS) -lstdc++ -lm -L.
EXEC = exec

SRCS = main.cpp List/Linked/linked.cpp Tree/Binary/binary.cpp Tree/AVL/avl.cpp Tree/Huffman/huffman.cpp Tree/B/b.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS) $(EXEC)
