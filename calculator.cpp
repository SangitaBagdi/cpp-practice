#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float n,m;
    char oprt;
    cout<<"Enter the first number:";
    cin>>n;
    cout<<"Enter the second number:";
    cin>>m;
    cout<<"Enter operator:";cin>>oprt;
    cout<<fixed<<setprecision(3);
    if(oprt == '+'){cout<<"The addition of the given numbers is:"<<n+m;}
    else if(oprt == '-'){cout<<"The subtraction of the given numbers is:"<<n-m;}
    else if(oprt == '*'){cout<<"The multiplication of the given numbers is:"<<n*m;}
    else if(oprt == '/'){cout<<"The division of the given numbers is:"<<n/m;}
    else{cout<<"Invalid , it's not a operator";}
    return 0;}