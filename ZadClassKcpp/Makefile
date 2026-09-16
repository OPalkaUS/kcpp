CXX = g++
CXXFLAGS = -Wall -Wextra -Iinclude

TARGET = programKcpp_OP

SRC = main.cc $(wildcard src/*.cc)

OBJ = $(SRC:.cc=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

main.o: main.cc
	$(CXX) $(CXXFLAGS) -c main.cc -o main.o

src/%.o: src/%.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)
