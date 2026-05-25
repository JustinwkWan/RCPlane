# RC Plane

A C++ flight control system for RC airplanes that manages throttle, aileron, elevator, and rudder inputs through a channel-based receiver interface.

## What It Does

Implements an `RCReceiver` class that simulates the control system of an RC airplane. Each flight control surface is mapped to a channel with bounded input ranges and configurable step sizes, modeling how a real RC receiver translates stick inputs into servo commands.

### Controls

| Channel | Range | Step | Function |
|---------|-------|------|----------|
| Throttle | -100 to 100 | 10 | Engine speed |
| Aileron | -100 to 100 | 5 | Roll (wing tilt) |
| Elevator | -100 to 100 | 5 | Pitch (nose up/down) |
| Rudder | -100 to 100 | 5 | Yaw (left/right turn) |

## Tech Stack

- **Language:** C++
- **Standard Library:** iostream, map, vector, string
- **Build:** g++

## Build & Run

```bash
g++ -o RCPlane RCReceiver.cpp
./RCPlane
```

## Project Structure

```
RCPlane/
├── RCReceiver.h      # RCReceiver class definition with Channel enum
└── RCReceiver.cpp    # Implementation (control methods, display)
```
