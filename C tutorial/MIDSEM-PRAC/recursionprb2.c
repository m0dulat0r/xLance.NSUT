#include <stdio.h>

int factorial(int n);
int main()
{

    int a;
    printf("Enter the no. : ");

    scanf("%d", &a);

    printf("The factorial of the number is : %d", factorial(a));

    return 0;
}

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}