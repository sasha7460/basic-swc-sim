#pragma once
#include "shared_types.hpp"

class SharedMemory {
public:
    void writeData(const SensorData& data);
    SensorData readData();
private:
    SensorData buffer_;
};
