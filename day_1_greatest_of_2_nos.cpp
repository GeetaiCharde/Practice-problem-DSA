/*
Title : Find the greatest of two number
Input: Two number (no1,no2)
Output: Greater number
*/

#include<iostream>
using namespace std;

int Greater_of_two_number(int n, int m)
{
    if(n<m){
        return m;
    }
    else{
        return n;
    }

}

int main()
{
    int no1, no2;
    cout<<"Enter number 1: ";
    cin>>no1;
    cout<<"Enter number 2: ";
    cin>>no2;

    cout<<"Greter Number among "<<no1<<" and "<<no2<<" is "<<Greater_of_two_number(no1,no2);
}