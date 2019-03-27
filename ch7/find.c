#include <stdio.h>
#include <string.h>

int sports_no_bieber(char *s)
{
    return strstr(s, "sports") && !strstr(s, "bieber");
}

int sports_or_workout(char *s)
{
    return strstr(s, "sports") || strstr(s, "workout");
}

void find(int (*filter) (char*))
{
    int NUM_ADS = 7;
    char *ADS[] = {
        "William: SBM GSOH likes sports, TV, dining",
        "Matt: SWM NS likes art, movies, theater",
        "Luis: SLM ND likes books, theater, art",
        "Mike: DWM DS likes trucks, sports and bieber",
        "Peter: SAM likes chess, working out and art",
        "Josh: SJM likes sports, movies and theater",
        "Jed: DBM likes theater, books and dining"
    };

    for (int i = 0; i < NUM_ADS; i++) {
        if(filter(ADS[i])) {
            printf("%s\n", ADS[i]);
        }
    }
}

int main()
{
    find(sports_no_bieber);
}