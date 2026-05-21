#include<iostream>
using namespace std;
int main(){
    int n,i=0,temp,rev=0;
    cout<<"Enter a number:";
    cin>>n;
    temp=n;
    while(temp>0){
        i=temp%10;
        rev=rev*10+i;
        temp=temp/10;
    }cout<<"The reverse number is:"<<rev;
    return 0;
}