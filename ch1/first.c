#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char card_name[3];
    int count = 0;

    do {
        int val = 0;

        puts("Enter the card_name or 'X' to exit: ");
	    scanf("%2s", card_name);

        switch (card_name[0]) {
		case 'A':
			val = 11;
			break;
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
        case 'X':
            continue;
		default:
			val = atoi(card_name);
	    }

        if (val > 11 || val < 1) {
            puts("Invalid card entered.");
            continue;
        }

        if (val >= 3 && val <= 6) {
            count++;
        } else if (val == 10) {
            count--;
        }

        printf("The current count is %i\n", count);
    } while (card_name[0] != 'X');

	return 0;
}