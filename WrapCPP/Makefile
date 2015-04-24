CC=clang
CXX=clang++
CFLAGS=-Wall -g
CXXFLAGS=-Wall -g -std=c++11 -I.

DEPS=CPP.h
OBJ=main.o CPP.o
TARGET=main

RM=rm -f

# compile only, C source
%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

# compile only, C++ source
%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

# link
$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

clean:
	$(RM) $(OBJ)

uninstall:
	$(RM) $(TARGET)
