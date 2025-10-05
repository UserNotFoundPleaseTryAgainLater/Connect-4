CXX = g++
CXXFLAGS = -std=c++17 -Wall -I src
TARGET = c4
SRC = src/main.cpp src/interface.cpp src/engine.cpp src/eval.cpp
HEADERS = lib/c4.hpp include/interface.hpp include/engine.hpp include/eval.hpp

all: $(TARGET)

$(TARGET): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)