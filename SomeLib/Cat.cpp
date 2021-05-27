#include "Cat.h"

extern "C" int puts(char const *);

void Cat::makeNoise() { puts("Meow"); }

void doThingWithCat(Animal *a) {
  if (auto d = static_cast<Cat*>(a))
    d->makeNoise();
}

// int doNothing() {
//   return 33;
// }
