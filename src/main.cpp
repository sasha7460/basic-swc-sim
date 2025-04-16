#include "../include/shared_memory.hpp"
#include <thread>

void sensorApp(SharedMemory& shm);
void controllerApp(SharedMemory& shm);

int main() {
    SharedMemory shm;
    std::thread sensor(sensorApp, std::ref(shm));
    std::thread controller(controllerApp, std::ref(shm));

    sensor.join();
    controller.join();
    return 0;
}
