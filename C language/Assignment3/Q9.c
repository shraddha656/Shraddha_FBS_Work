#include <stdio.h>

int main() {
    int num, i = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (i < num) {
        if (num % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}
