#include<iostream>
using namespace std;

int isEvenOdd(int num){

    if(num%2==0)
        return 0 ;
    else
        return 1;    
}

int main(){

    int num ;
    cout<<"Enter a Number :";
    cin>>num;

    int number = isEvenOdd(num);
    if (number==0) cout<<"Even Number";
    else cout<<"Odd number";

    return 10 ;
}