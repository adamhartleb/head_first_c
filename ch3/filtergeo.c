#include <stdio.h>

// On Windows need to run:
// (filtergeo | geo2json) < gpsdata.csv > output.json
int main(int argc, char* argv[])
{
  float latitude;
  float longitude;
  char info[80];
  FILE* file_in = fopen("gpsdata.csv", "r");

  if (!file_in)
  {
    fprintf(stderr, "Unable to find gpsdata.csv file.\n");
    return 1;
  }

  while (fscanf(file_in, "%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
  {
    if (latitude >= -90 && latitude <= 90 && longitude >= -180 && longitude <= 180)
    {
      fprintf(stdout, "%f,%f,%s\n", latitude, longitude, info);
    }
  }

  fclose(file_in);

  return 0;
}