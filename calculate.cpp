#include "calculate.h"

int sum(int a, int b)
{
    return a+b;
}

int multiply(int a, int b)
{
    return a*b;
}

double divide(int a, int b)
{
    return (double)a / b;
}

int power(int a, int pow)
{
    if (pow == 0)
    {
        return 1;
    }
    else if (pow == 1) 
    {
        return a;
    }
    else
    {
        return a * power(a, pow - 1);
    }
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}