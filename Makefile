CXX = g++
CXXFLAGS = -Wall -Wextra
TARGET = main

all: $(TARGET)
	./$(TARGET)

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

clean:
	rm -f $(TARGET)
