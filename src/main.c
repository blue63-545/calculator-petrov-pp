//
// Created by sr9000 on 2/24/25.
//
#include <stdio.h>

int a_plus_b(int a, int b)
{
    return a + b;
}

#ifndef GTEST
int main()
{
    // Calculator read <number> <op> <number>
    // evaluates result and prints it
    // supports +, -, *, /
    int num1, num2;
        char op;
        scanf("%d %c %d", &num1, &op, &num2);

        switch (op) {
            case '+':
                printf("%d\n", a_plus_b(num1, num2));
                break;
            case '-':
                printf("%d\n", num1 - num2);
                break;
            case '*':
                printf("%d\n", num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("%d\n", num1 / num2);
                else
                    fprintf(stderr, "Error: Division by zero\n");
                break;
            default:
                fprintf(stderr, "Error: Unsupported operator \"%c\"\n", op);
                break;
        }

    return 0;
}
#endif
