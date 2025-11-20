#include "RCReceiver.h"

RCReceiver::RCReceiver() : RCReceiver() {
    flightControls[THROTTLE] = 0;
    flightControls[AILERON] = 0;
    flightControls[ELEVATOR] = 0;
    flightControls[RUDDER] = 0;
}

void RCReceiver::displayFlightInfo() const {
    std::cout << "Throttle: " << THROTTLE << "\n";
    std::cout << "Aileron: " << AILERON << "\n";
    std::cout << "Elevator: " << ELEVATOR << "\n";
    std::cout << "Rudder: " << RUDDER << "\n";
}

int RCReceiver::getControlValue(Channel channel) const {
    return flightControls.at(channel);
}

void RCReceiver::increaseThrottle() {
    if (flightControls[THROTTLE] + throttleStep <= MaxThrottle) {
        flightControls[THROTTLE] += throttleStep;
    }
}

void RCReceiver::decreaseThrottle() {
    if (flightControls[THROTTLE] - throttleStep >= 0) {
        flightControls[THROTTLE] -= throttleStep;
    }
}