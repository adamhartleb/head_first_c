#include <stdio.h>

typedef struct {
    unsigned int old_enough:1;
    unsigned int strong_enough:1;
    unsigned int days_of_week:3;
} stats;

int main()
{
    stats stuff = { 1, 0, 6 };
}