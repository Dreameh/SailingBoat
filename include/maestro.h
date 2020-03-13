#ifndef SAILINGBOAT_INCLUDE_MAESTRO_H_
#define SAILINGBOAT_INCLUDE_MAESTRO_H_
#include "maestro_registry.h"

class Maestro {
 public:
  Maestro();
  bool Init();
  void Command(int handle, unsigned char channel, MaestroRegistry command, int value);
  int GetFileDescriptor();
  int GetLowerLimit();
  int GetUpperLimit();
 private:
  bool initialized_;
  int file_descriptor_;
  const char *portname_;
  int lower_limit_;
  int upper_limit_;
};

#endif // SAILINGBOAT_INCLUDE_MAESTRO_H_
