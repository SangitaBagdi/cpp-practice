#include<iostream>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"Enter the number:";
    cin>>n;
   
   for(int i=2;i<n;i++){
    if(n%i==0){
        flag = 1;
        break;
       // cout<<n<<" is a prime number";
    }
   }
   if(flag==1){
    cout<<n<<" is not a prime number";
   }else{
    cout<<n<<" is a prime number";
   }
   return 0;
        
}