#include <stdio.h>

void go_south_east (int* lat, int* lng)
{
    *lat += 1;
    *lng -= 1;
}

int main(void)
{
    int latitude = 64;
    int longitude = 70;

    go_south_east(&latitude, &longitude);

    printf("%d, %d", latitude, longitude);
}