#include <stdio.h>

// On Windows need to run:
// (filtergeo | geo2json) < gpsdata.csv > output.json
int main()
{
  float latitude;
  float longitude;
  char info[80];

  while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
  {
    if (latitude >= -90 && latitude <= 90 && longitude >= -180 && longitude <= 180)
    {
      fprintf(stdout, "%f,%f,%s\n", latitude, longitude, info);
    }
  }

  return 0;
}