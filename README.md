# Basic SWC Simulation with Shared Memory

This project demonstrates a minimal ECU simulation using basic Sensor and Controller software components (SWCs) communicating via shared memory, written in modern C++.

## 🧱 Architecture

- **Sensor SWC** simulates temperature and pressure readings.
- **Controller SWC** reads sensor data and processes it.
- **SharedMemory** class is used to simulate inter-process communication.

## 📂 Folder Structure

```
basic_swc_shared_memory/
├── include/                # Header files
│   ├── shared_memory.hpp
│   └── shared_types.hpp
├── src/                    # Source files
│   ├── sensor.cpp
│   ├── controller.cpp
│   ├── main.cpp
│   └── shared_memory.cpp
├── Makefile
└── build/                  # Created during compilation
```

## ⚙️ Build & Run

```bash
make clean
make
./build/ecu
```

## 🧪 Example Output

```
[Sensor] Temp: 20, Pressure: 1.0
[Controller] Temp: 20, Pressure: 1.0
```

## 🔗 Part of a Larger Learning Path

This is the starting point of a series that evolves into:
- Classic AUTOSAR RTE simulation
- Adaptive AUTOSAR architecture

## 📘 License

MIT
