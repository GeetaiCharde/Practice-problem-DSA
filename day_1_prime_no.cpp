#include<iostream>
using namespace std;

void CheckPrime (int n)
{
    int div=2;
    while (div<n){
        if(n%div==0){
            cout<<"Number "<<n<<" is Not Prime Number";
            break;
        }
        else {
            div = div+1;
        }
        if(n==div){
            cout<<"Number "<<n<<" is Prime Number";
        }
    } 
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

CheckPrime(n);
}