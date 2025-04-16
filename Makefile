CXX = g++
CXXFLAGS = -std=c++17 -Iinclude -pthread

SRC = src/main.cpp src/sensor.cpp src/controller.cpp src/shared_memory.cpp
TARGET = build/ecu

all: $(TARGET)

$(TARGET): $(SRC)
	mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f build/ecu
