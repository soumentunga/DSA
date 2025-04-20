#include<iostream>
using namespace std;

int Factorial(int num ){
    int fact=1;
    for (int i =1;i<=num;i++) fact=fact*i;
    cout<<"Factorial Number is :"<<fact;
    return 0;
}

int main(){

    cout<<"Enter a Number :";
    int num;
    cin>>num;
    Factorial(num);

    return 0;
}

