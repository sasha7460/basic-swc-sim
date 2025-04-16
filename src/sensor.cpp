#include "../include/shared_memory.hpp"
#include <iostream>
#include <thread>
#include <chrono>

void sensorApp(SharedMemory& shm) {
    int i = 0;
    while (i < 10) {
        SensorData data;
        data.temperature = 20.0f + i;
        data.pressure = 1.0f + 0.1f * i;
        shm.writeData(data);
        std::cout << "[Sensor] Temp: " << data.temperature << ", Pressure: " << data.pressure << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        i++;
    }
}
