#include <stdio.h>

enum colors {
    RED,
    GREEN,
    BLUE
};

int main()
{
    enum colors favorite = BLUE;
    const char* fav;

    switch(favorite) {
        case RED:
            fav = "RED";
            break;
        case BLUE:
            fav = "BLUE";
            break;
        case GREEN:
            fav = "GREEN";
            break;
    }

    printf("Your favorite color is %s", fav);
}