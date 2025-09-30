CXX = g++
CXXFLAGS = -std=c++17 -Wall -I src
TARGET = c4
SRC = src/main.cpp src/interface.cpp
HEADERS = src/c4.hpp src/interface.hpp

all: $(TARGET)

$(TARGET): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)