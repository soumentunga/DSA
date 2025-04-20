#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter the Decimal Number You Want To Convert into Binary :";
    cin>>num;
    long long sum =0;
    int mul =1;

    while(num>0){

            int digit = num %2;
            sum= sum + digit * mul;
            num=num/2;
            mul = mul*10;

    };

    cout<<sum;
}
