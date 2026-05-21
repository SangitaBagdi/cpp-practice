#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(cin.fail()){cout<<"Invalid input";}
    else if(n%2==0 && n>0){
        cout<<"the number is even and positive";
    }
    else if(n%2==0 && n<0){
        cout<<"the number is even and negative";
    }
    else if(n%2!=0 && n>0){
        cout<<"the number is odd and positive";
    }
    else if(n%2!=0 && n<0){
        cout<<"the number is odd and negative";
    }
    else if(n==0){
        cout<<"Zero";
    }
    return 0;
}