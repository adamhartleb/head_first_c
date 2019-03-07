#include <stdio.h>

void change_letter(char* msg)
{
    msg[3] = 'F';
}

int main(void)
{
    char msg[5];

    printf("Enter your message: ");
    fgets(msg, sizeof(msg), stdin);

    change_letter(msg);

    printf("Your message is %s", msg);
}

