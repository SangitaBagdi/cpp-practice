#include<iostream>
using namespace std;
int main(){
    int l,m,n;
    cout<<"Enter the numbers:";
    cin>>l;
    cin>>m;
    cin>>n;
    if(l>m){
        if(l>n){
            cout<<l<<"is the greatest";
            }  
        else{
            cout<<n<<"is the greatest";
        }  }
        else if(m>n){
            cout<<m<<"is the greatest";
        }
        else{
            cout<<n<<"is the greatest";
        }
        return 0;
    
}