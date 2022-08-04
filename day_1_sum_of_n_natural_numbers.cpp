/*
Title : Sum of N Natural Numbers
Input : N (natural number)
Output : Sum of n natural number
*/

#include<iostream>
using namespace std;

int Sum_Of_N_natural_number (int n){
    int val = 1;
    int sum = 0;
    while (val<=n){
        sum = sum+val;
        val = val +1;
    }
    cout<<"Sum of "<<n<<" Natural number is: "<< sum;

}

int main()
{
    int n;
    cout<<"Enter any Natural Number: ";
    cin>>n;

Sum_Of_N_natural_number(n);
}