CXX = g++
CXXFLAGS = -Wall -Werror -std=c++11

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: stack

stack: $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) stack