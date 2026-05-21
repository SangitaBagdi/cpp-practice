#include<iostream>
using namespace std;
int main(){
    int n,temp,original,rev=0;
    cout<<"Enter a number:";
    cin>>n;
    temp=n;
   // original=n;
    while(n>0){
        rev=rev*10 + n%10;
        n=n/10;
    }
    cout<<"The reverse is:"<<rev<<endl;
    if(temp==rev){
        cout<<temp<<"is a palindrome number.";   }
        else{
            cout<<temp<<"is not a palindrome number.";
        }return 0;
    }