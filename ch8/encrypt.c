#include "encrypt.h"
#include <string.h>
#include <stdio.h>

void encrypt (struct message *msg)
{
  strcpy(msg->encrypted, msg->original);

  char *p = &(msg->encrypted[0]);

  while (*p) {
    *p = *p ^ 31;
    p++;
  }
}