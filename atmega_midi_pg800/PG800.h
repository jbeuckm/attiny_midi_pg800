#include "Arduino.h"

class PG800 {

  byte READY_PIN;
  byte CLOCK_IN_PIN;
  byte DATA_OUT_PIN;

  byte paramIndex;

public:
  PG800(int ready_pin, int clock_in_pin, int data_out_pin);

  void sendByte(byte data);

  char *paramName();

  byte paramValue();
  void nextParam();
  void prevParam();

  void incValue();
  void decValue();
};

