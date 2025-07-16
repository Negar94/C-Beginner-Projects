#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 7;
    int n;

    printf("Guess the magic number: ");
    scanf("%d", &n);

    printf("Your number is %d\n", n);

    if (n == a) {
        printf("Your number is correct!\n");
    }
    else if (n > a) {
        printf("Your number is bigger\n");
    }
    else if (n < a) {
        printf("Your number is smaller\n");
    }

    return 0;
}
