#include <stdio.h>

typedef struct cell_phone
{
  int cell_no;
  const char *wallpaper;
  float minutes_of_charge;
} phone;

void change_number(phone *p, int new_number)
{
  p->cell_no = new_number;
}

int main()
{
  phone p = {86754309, "sinatra.png", 1.5};

  change_number(&p, 188355204);

  printf("My new number is %d", p.cell_no);
}