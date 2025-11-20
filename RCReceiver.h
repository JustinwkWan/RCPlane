#include <iostream>
#include <string>
#include <vector>
#include <map> 
#ifndef RCCEIVER_H
#define RCCEIVER_H
class RCReceiver
{
  int const MaxThrottle = 100;
  int const Min = -100;

  constexpr static int ControlStep = 5;
  constexpr static int throttleStep = 10;

  enum Channel
  {
    THROTTLE,
    AILERON,
    ELEVATOR,
    RUDDER
  };

private:
  std::map<Channel, int> flightControls;

public:
  RCReceiver();

  void displayInfo() const;
  void displayFlightInfo() const;
  // Setters and Getters for flight controls

  int getControlValue(Channel channel) const;
  void increaseThrottle();
  void decreaseThrottle();
  void increaseAileron();
  void decreaseAileron();
  void increaseElevator();
  void decreaseElevator();
  void increaseRudder();
  void decreaseRudder();

  double getthrottle() const;
  double getaileron() const;
  double getelevator() const;
  double getrudder() const;

  ~RCReceiver();
};

#endif // RCCEIVER_H