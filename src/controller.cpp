#include "../include/shared_memory.hpp"
#include <iostream>
#include <thread>
#include <chrono>

void controllerApp(SharedMemory& shm) {
    int i = 0;
    while (i < 10) {
        SensorData data = shm.readData();
        std::cout << "[Controller] Temp: " << data.temperature << ", Pressure: " << data.pressure << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        i++;
    }
}
