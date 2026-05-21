#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,ch;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Available operations are:"<<endl;
    cout<<"1 = Square"<<endl;
    cout<<"2 = Cube"<<endl;
    cout<<"3 = Odd or even"<<endl;
    cout<<"Enter your choice:";
    cin>>ch;
   
    if(ch==1){
        cout<<"The square of the number is"<<n*n;}
        else if(ch==2){
            cout<<"The cube of the number is"<<n*n*n;
        }
        else if(ch==3){
            if(n%2==0){
                cout<<"The number is even";
            }else{
            cout<<"The number is odd";
        }
    }
        return 0;
    
}