#include "Dog.h"

extern "C" int puts(char const *);

void Dog::makeNoise() { puts("Woof"); }

void doThingWithDog(Animal *a) {
  if (auto d = static_cast<Dog*>(a))
    d->makeNoise();
}

int doNothing() {
  return 33;
}
