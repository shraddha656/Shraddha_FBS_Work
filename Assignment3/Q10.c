#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;

        int fact = 1, i = 1;
        while (i <= remainder) {
            fact *= i;
            i++;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == originalNum)
        printf("%d is a Strong number.\n", originalNum);
    else
        printf("%d is not a Strong number.\n", originalNum);

    return 0;
}
