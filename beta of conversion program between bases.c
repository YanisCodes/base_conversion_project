#include <stdio.h>
#include <string.h>
#include <math.h>

int X_todecimal(int n, int base);
char* decimal_toX(int f, int b);

int main() {
    int from_base, to_base, number;
    do {
        printf("\nEnter the base you want to convert from (2, 8, 10, 16): ");
        scanf("%d", &from_base);
        if (from_base != 2 && from_base != 8 && from_base != 10 && from_base != 16) {
            printf("Invalid base. Please enter 2, 8, 10, or 16.\n");
        }
    } while (from_base != 2 && from_base != 8 && from_base != 10 && from_base != 16);

    do {
        printf("Enter the base you want to convert to (2, 8, 10, 16): ");
        scanf("%d", &to_base);
        if ((to_base != 2 && to_base != 8 && to_base != 10 && to_base != 16) || to_base == from_base) {
            printf("Invalid base. Please enter 2, 8, 10, or 16, and ensure it's different from %d.\n", from_base);
        }
    } while ((to_base != 2 && to_base != 8 && to_base != 10 && to_base != 16) || to_base == from_base);


    printf("Enter the number in base %d: ", from_base);
    scanf("%d", &number);
    if (to_base == 10) {
        int result = X_todecimal(number, from_base);
        if (result != -1) {
            printf("The number in base 10 is: %d\n", result);
        }
    } if (from_base == 10) {
        if (to_base == 2 || to_base == 8 || to_base == 16) {
            char* result = decimal_toX(number, to_base);
            printf("The number in base %d is: %s\n", to_base, result);
        }
    }


    char question[4];
    printf("If you want to convert another number, type 'yes'. Otherwise, type 'no': ");
    scanf("%s", question);
    if (strcmp(question, "yes") == 0 || strcmp(question, "Yes") == 0) {
        main();
    } else {
        printf("Thank you for using our program, we hope you enjoyed it!\n");
    }

    return 0;
}
int X_todecimal(int n, int b) {
    int result = 0, counter = 0, digit, k = n;

    while (k > 0) {
        digit = k % 10;
        if (digit >= b) {
            printf("Invalid number for the given base\n");
            return -2; // Error: Invalid digit for base
        }
        result += digit * pow(b, counter);
        k = k / 10;
        counter++;
    }

    return result;
}
char* decimal_toX(int f, int b) {
    static char hex[20];
    int k = f, reminder, i = 0;

    // Check for 0 case
    if (f == 0) {
        hex[i++] = '0';
    }
    // Convert to the specified base
    while (k > 0) {
        reminder = k % b;
        k = k / b;

        if (reminder < 10) {
            hex[i] = '0' + reminder;  // Convert numbers 0-9 to '0'-'9'
        } else {
            // Convert numbers 10-15 to 'A'-'F'
            switch (reminder) {
                case 10: hex[i] = 'A'; break;
                case 11: hex[i] = 'B'; break;
                case 12: hex[i] = 'C'; break;
                case 13: hex[i] = 'D'; break;
                case 14: hex[i] = 'E'; break;
                case 15: hex[i] = 'F'; break;
            }
        }
        i++;
    }
    // Reverse the string (the result is built backwards)
    int start = 0, end = i - 1;
    while (start < end) {
        char temp = hex[start];
        hex[start] = hex[end];
        hex[end] = temp;
        start++;
        end--;
    }
    return hex;
}