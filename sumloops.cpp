#include<iostream>
using namespace std;
int main(){
    int n,sum = 0;
    cout<<"Enter the range:";
    cin>>n;
    cout<<"The sum is:";
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum= sum+i;
        }
    }cout<<sum<<endl;
    return 0;
}