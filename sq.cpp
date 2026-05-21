#include<iostream>
using namespace std;
int main(){
    int n,op;
    cout<<"Enter the number:";
    cin>>n;
    if(n%2 == 0){
        cout<<"The number is even"<<endl;
    }
    else{
        cout<<"The number is odd"<<endl;
    }
    cout<<"1. Square:"<<endl;
    cout<<"2. Cube:"<<endl;
    cout<<"enter the operation:";
    cin>>op;
    if(cin.fail()){cout<<"Inavalid input";}
    
   else if(op == 1){
    cout<<"The square is:"<<n*n;}
    else if(op == 2){
    cout<<"The cube is:"<<n*n*n;}
else{
    cout<<"invalid operation";
}
    return 0;

}