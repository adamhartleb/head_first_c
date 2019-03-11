#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
  char* delivery = "";
  int thick = 0;
  int count = 0;
  char ch;

  while ((ch = getopt(argc, argv, "d:t")) != EOF) {
    switch (ch) {
    case 'd':
      // optarg is a pointer to the argument processed from getopt.
      delivery = optarg;
      break;
    case 't':
      thick = 1;
      break;
    default:
      fprintf(stderr, "Unknown option '%s'\n", optarg);

      return 1;
    }
  }
    // optind is the number of strings read from the command line to get past the options.
    argc -= optind;
    argv += optind;

    if (thick)
      puts("Thick crust.");

    if (delivery[0])
      printf("To be delivered %s\n", delivery);

    puts("Ingredients:");

    for (count = 0; count < argc; count++)
      puts(argv[count]);

    return 0;
}