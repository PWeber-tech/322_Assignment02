#include "math_ops.h"

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

float sin(int x)
{
    int steps = 10;
    int sign = 1;
    int result = 0;
    for(int i = 0; i < steps; i++)
    {
        int x = (my_pow(x,(2*i)+1))/factorial((2*i)+1);
        if(sign == 1){
            result += x;
            sign = 0;
        }
        else{
            result -= x;
            sign = 1;
        }
    }
}