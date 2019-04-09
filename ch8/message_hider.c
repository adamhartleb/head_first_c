#include <stdio.h>
#include <string.h>
#include "encrypt.h"
#include "checksum.h"

int main (int argc, char* argv[])
{
  struct message messages[argc - 1];

  int totalSize = 0;

  for (int i = 1; i < argc; i++) {
    totalSize += strlen(argv[i]);
    messages[i - 1].original = argv[i];
    encrypt(&messages[i - 1]);
  }

  totalSize += argc - 1;
  char originalMessage[totalSize];
  char encryptedMessage[totalSize];

  strcpy(originalMessage, messages[0].original);
  strcat(originalMessage, " ");

  strcpy(encryptedMessage, messages[0].encrypted);
  strcat(encryptedMessage, " ");

  for (int i = 1; i < argc - 1; i++) {
    strcat(originalMessage, messages[i].original);
    strcat(originalMessage, " ");

    strcat(encryptedMessage, messages[i].encrypted);
    strcat(encryptedMessage, " ");
  }

  printf("Original message: %s\n", originalMessage);
  printf("Encrypted message: %s\n", encryptedMessage);
}