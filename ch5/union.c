#include <stdio.h>

typedef union {
  short count;
  float weight;
  float volume;
} quantity;

int main()
{
  // Three ways to declare a union.
  quantity q = {3};

  quantity q2 = {.volume = 3.5};

  quantity q3;
  q3.weight = 5.6;

  // The size of a union is the same as the size of its largest field.
}