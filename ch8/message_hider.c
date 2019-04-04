#include <stdio.h>
#include <string.h>
#include "encrypt.h"
#include "checksum.h"

int main (int argc, char* argv[])
{
  int size = sizeof(argv[1]);
  char copy[size];
  strcpy(copy, argv[1]);

  encrypt(argv[1]);

  printf("Original message: %s\n", copy);
  printf("Encrypted message: %s\n", argv[1]);
  printf("Original checksum is: %d\n", checksum(copy));
}