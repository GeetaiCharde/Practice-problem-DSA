/*
Title : Area of Circle
Input: Radius
Output: Area of Circle
*/

#include<iostream>
using namespace std;

void Area_of_Circle(float r)
{
    float area= 3.14*r*r;
    cout<<"Area of Circle with radius "<<r<<" = "<<area;
}

int main()
{
    float rad;
    cout<<"Enter radius: ";
    cin>>rad;

    Area_of_Circle(rad);
}