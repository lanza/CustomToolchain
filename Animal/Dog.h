#pragma once
#include "Animal.h"


struct Dog : public Animal {
  void makeNoise() override;
};

void doThingWithDog(Animal *a);
