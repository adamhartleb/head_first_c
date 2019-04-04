#include <stdio.h>
#include <stdarg.h>

enum drink {
    MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE
};

double price(enum drink d)
{
  switch(d) {
  case MUDSLIDE:
    return 6.79;
  case FUZZY_NAVEL:
    return 5.31;
  case MONKEY_GLAND:
    return 4.82;
  case ZOMBIE:
    return 5.89;
  }
  return 0;
}

float total(int num, ...)
{
    va_list ap;
    va_start(ap, num);

    float total = 0;

    for (int i = 0; i < num; i++) {
        total += price(va_arg(ap, enum drink));
    }

    va_end(ap);

    return total;
}

int main()
{
    float x = total(3, MUDSLIDE, ZOMBIE, MONKEY_GLAND);

    printf("The total cost is %.2f", x);
}