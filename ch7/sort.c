#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_score(const void *a, const void *b)
{
    int x = *(int*) a;
    int y = *(int*) b;

    return x - y;
}

typedef struct {
    int width;
    int height;
} rectangle;

int compare_areas(const void *a, const void *b)
{
    rectangle x = *(rectangle*) a;
    rectangle y = *(rectangle*) b;

    int area_x = x.height * x.width;
    int area_y = y.height * y.width;

    return area_x - area_y;
}

int cmp(const void *a, const void *b)
{
    return strcmp(*(char**) a, *(char**) b);
}

int main()
{
    int scores[] = {10, 5, 13, 21, 2};

    qsort(scores, 5, sizeof(int), compare_score);

    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }

    rectangle rectangles[] = {
        { 4, 5 },
        { 3, 2 },
        { 10, 20}
    };

    qsort(rectangles, 3, sizeof(rectangle), compare_areas);

    for (int i = 0; i < 3; i++) {
        printf("%d ", rectangles[i].height * rectangles[i].width);
    }
}