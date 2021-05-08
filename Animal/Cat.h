#pragma once
#include "Animal.h"


struct Cat : public Animal {
  void makeNoise() override;
};

void doThingWithCat(Animal *a);
