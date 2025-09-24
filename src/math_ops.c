#include "math_ops.h"
#define _USE_MATH_DEFINES
#include <math.h>

// --------- FUNCTION IMPLEMENTATIONS ------------


float multiply(float x, float y) 
{
    return x * y;
}

float add(float x, float y) 
{
    return x + y;
}

float square(float x) 
{
    return x * x;
}

float cube(float x) 
{
    return x * x * x;
}

float my_pow(float base, int exponent ) 
{
    float res = 1;
    for(int i = 0; i < exponent; i++) 
    {
        res *= base;
    }
    return res;
}

float sub(float a, float b)
{
    return a - b;
}

float my_div(float a, float b)
{
    float x = a / b;
    return x;
}

int my_factorial(int x){
    int j = x;
    int result = 1;
    while(j > 0){
        result = result * j;
        j -= 1;
    }
    return result;
}

float my_sin(float x)
{
    // change applied inside function body
    return 1.0;
}
