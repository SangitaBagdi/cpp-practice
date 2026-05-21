#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    i=n;
    cout<<"Even numbers are:";
    while(i>=1){
        if(i%2 ==0){
            cout<<i<<endl;
            sum=sum+i;
        }i--;
    }  
    cout<<"The sum of the even numbers are:"<<sum;
    return 0;
}