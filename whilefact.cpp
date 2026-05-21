#include<iostream>
using namespace std;
int main(){
    int n,i=1,fact=1;
    cout<<"Enter the number:";
    cin>>n;
    while(i<=n){
        fact = fact*i;
        i++;
    }cout<<"The factorial is:"<<fact;
    return 0;

}