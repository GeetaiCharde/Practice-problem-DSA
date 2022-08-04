/*
Title: Find all even number between 9- 100
Input:-
Output: all even number
*/

#include<iostream>
using namespace std;

void evennumber(){

    for (int i=9; i<100; i++){
        if(i%2==0){
           cout<<i<<' ';
        }
    }
}

int main()
{
    cout<<"Even numbers between 9-100 are ";
    evennumber();
}