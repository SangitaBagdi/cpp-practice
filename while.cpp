#include<iostream>
using namespace std;
int main(){
    int n,i=1,sum=0;
    cout<<"Enter the range:";
    cin>>n;
    cout<<"The even numbers are:"<<endl;
    while(i<=n){
        if(i%2 == 0){
            cout<<i<<endl;
            sum = sum+i;
        }i++;
    }cout<<"The sum of the even numbers is:"<<sum<<endl;
    return 0;
}