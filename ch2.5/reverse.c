#include <stdio.h>
#include <string.h>

void reverse(char str[])
{
    size_t len = strlen(str);

    for (int i = 0; i < len; i++) {
        printf("%c", str[len - 1 - i]);
    }
}

int main(void)
{
    char strToReverse[80];

    printf("Please provide a string to reverse: ");
    fgets(strToReverse, 80, stdin);

    strToReverse[strlen(strToReverse) - 1] = '\0';

    reverse(strToReverse);

    return 0;
}