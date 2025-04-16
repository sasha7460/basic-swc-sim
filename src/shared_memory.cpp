#include "../include/shared_memory.hpp"

void SharedMemory::writeData(const SensorData& data) {
    buffer_ = data;
}

SensorData SharedMemory::readData() {
    return buffer_;
}
