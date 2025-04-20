#include <iostream>
using namespace std;

void Prints(int number = 5){
    for (int i=0;i<=number;i++)
    cout<<i<<" ";
    cout<<endl;
    
}

int main(){


    int num;
    cout<<"Enter a Number :";
    cin>>num ;

    Prints(num);  //send 10 as a Arguments 
    Prints();   //No Argument So the Default Parameter Run

    return 0;
}