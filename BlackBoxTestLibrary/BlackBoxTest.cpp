#include "BlackBoxTest.h"
#include"pch.h"
#include<math.h>

//Prime Number

bool Prime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

//Area of Rectangle

int RectangleArea( int breadth, int length) {

    int area;

    area = breadth * length;
    return area;

}

//Sum of Digits

int SumDigits(int n)
{
    int sum = 0, m;
     while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
     
         return sum;
}

//Paliindrome

bool Palindrome(int n)
{
    int r, sum = 0, temp;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        return true;
    else
        return false;
    
}

//Area of Circle

float CircleArea(float radius) {
    float area_circle;

    
    area_circle = 3.14 * radius * radius;
    return area_circle;

    
}

