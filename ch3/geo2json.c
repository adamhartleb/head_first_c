#include <stdio.h>

int main()
{
    float latitude, longitude;
    char info[80];
    int started = 0;
    FILE* file_out = fopen("output.json", "w");

    fprintf(file_out, "[");
    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (started)
            fprintf(file_out, ",\n");
        else
            started = 1;

        fprintf(file_out, "{\"latitude\": %f, \"longitude\": %f, \"info\": \"%s\"}", latitude, longitude, info);
    }

    fprintf(file_out, "\n]");

    fclose(file_out);

    return 0;
}