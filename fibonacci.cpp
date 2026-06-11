#include<iostream>
using namespace std;
int main(){
    int n,s1=0,s2=1,ms;
    cout<<"Enter the number you want fibonacci series upto:";
    cin>>n;
   cout<<s1 <<" "<<s2 <<" ";
    for(int i=3;i<=n;i++){
         //cout<<s1 <<" "<<s2 <<" ";
        ms=s1+s2;
        cout<<ms<<" ";
        s1=s2;
        s2=ms;

    }

    return 0;
}
