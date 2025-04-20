#include <iostream>

using namespace std;


int main(){
    int num;
    cout<<"Enter the Binary Number Want to Covert into Decimal :";
    cin>>num;
    int sum =0;
    int mul =1;
    while (num>0)
    {
        int rem = num%10;
        sum = sum + rem * mul;
        mul = mul * 2;
        num = num / 10;

    }
    cout<<sum ;
}