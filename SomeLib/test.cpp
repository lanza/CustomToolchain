#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>

int main(int argc, char const **argv) {
  (void)argc;
  (void)argv;
  Dog *d = new Dog;

  doThingWithDog(d);
  useAnimal(d);
}
