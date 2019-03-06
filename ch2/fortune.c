#include <stdio.h>

void greet(char msg[])
{
    printf("%s\n", msg);
    printf("msg occupies %d bytes\n", sizeof(msg));
    printf("msg actually occupies %d bytes\n", sizeof(*msg));
}

int main(void)
{
    char greeting[] = "Hello, World!";

    printf("size of greeting is %d", sizeof(greeting));

    greet(greeting);

    return 0;
}
