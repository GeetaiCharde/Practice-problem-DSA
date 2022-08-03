#include<iostream>
using namespace std;

void maxofthreenumber (int a, int b, int c){
    if (a>b){
        if (a>c){
            cout<<"Max no is: "<<a<<endl;
        }
        else {
            cout<<"Max no is: "<<c<<endl;
        }
    }
    else {
        if (b>c){
        cout<<"Max no is: "<<b<<endl;
    }
        else {
            cout<<"Max no is: "<<c<<endl;
        }
    
    }
}

int main()
{
    int a, b, c;
    cout<<"Enter value of A: ";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
    cout<<"Enter value of C: ";
    cin>>c;

maxofthreenumber(a,b,c);

}