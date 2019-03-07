#include <stdio.h>
#include <string.h>

int main(void)
{
    char tracks[][80] = {
        "I left my heart in Harvard Med School",
        "Newark, Newark - a wonderful town",
        "Dancing with a Dork",
        "From here to maternity",
        "The girl from Iwo Jima"
    };

    char lyrics[80];

    printf("What lyrics are you looking for? ");
    fgets(lyrics, 80, stdin);

    // Necessary because fgets reads up to and including the newline character
    // so it needs to be removed for strstr to work properly.
    lyrics[strlen(lyrics) - 1] = '\0';

    for (int i = 0; i < 5; i++) {
        if (strstr(tracks[i], lyrics)) {
            printf("The lyrics are in track #%d\n", i);
            break;
        }
    }

    return 0;
}