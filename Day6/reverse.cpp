#include <iostream>

using namespace std;


int main(){
    int num;
    cin>>num;
    int sum =0 ;
    int digit;
    while(num>0){
        digit = num %10;
        sum=(sum*10)+(digit^1);
        num=num/10;
    };
    cout<<sum;
}


//this code have some problem only can fixed this with the use of string 
