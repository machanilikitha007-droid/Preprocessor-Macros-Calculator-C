#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUBTRACT(a, b) ((a) - (b))
#define MULTIPLY(a, b) ((a) * (b))
#define SQUARE(a) ((a) * (a))

int main()
{
    int a, b;

    printf("===== Preprocessor Macros Calculator =====\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nAddition: %d\n", ADD(a, b));
    printf("Subtraction: %d\n", SUBTRACT(a, b));
    printf("Multiplication: %d\n", MULTIPLY(a, b));
    printf("Square of first number: %d\n", SQUARE(a));

    return 0;
}
