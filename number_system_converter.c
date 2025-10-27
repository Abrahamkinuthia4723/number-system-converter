#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long toDecimal(char num[], int base);
void fromDecimal(long long decimal, int base, char result[]);

int main() {
    char number[100], result[100];
    int fromBase, toBase;
    long long decimal;

    printf("Enter number: ");
    scanf("%s", number);

    printf("Convert from base (2, 8, 10, 16): ");
    scanf("%d", &fromBase);

    printf("Convert to base (2, 8, 10, 16): ");
    scanf("%d", &toBase);

    decimal = toDecimal(number, fromBase);
    fromDecimal(decimal, toBase, result);

    printf("\n%s (base %d) = %s (base %d)\n", number, fromBase, result, toBase);
    return 0;
}

long long toDecimal(char num[], int base) {
    int len = strlen(num);
    long long result = 0, power = 1;

    for (int i = len - 1; i >= 0; i--) {
        int digit;

        if (num[i] >= '0' && num[i] <= '9')
            digit = num[i] - '0';
        else if (num[i] >= 'A' && num[i] <= 'F')
            digit = num[i] - 'A' + 10;
        else if (num[i] >= 'a' && num[i] <= 'f')
            digit = num[i] - 'a' + 10;
        else {
            printf("Error: invalid character '%c'\n", num[i]);
            exit(1);
        }

        if (digit >= base) {
            printf("Error: '%c' is invalid for base %d\n", num[i], base);
            exit(1);
        }

        result += digit * power;
        power *= base;
    }
    return result;
}

void fromDecimal(long long decimal, int base, char result[]) {
    char digits[] = "0123456789ABCDEF";
    int i = 0;

    if (decimal == 0) {
        strcpy(result, "0");
        return;
    }

    while (decimal > 0) {
        result[i++] = digits[decimal % base];
        decimal /= base;
    }

    result[i] = '\0';
    for (int j = 0; j < i / 2; j++) {
        char temp = result[j];
        result[j] = result[i - j - 1];
        result[i - j - 1] = temp;
    }
}
