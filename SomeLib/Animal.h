#pragma once

struct Animal {
  virtual void makeNoise() = 0;
};

void useAnimal(Animal *a);
