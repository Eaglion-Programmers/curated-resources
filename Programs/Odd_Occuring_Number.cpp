#include<iostream>
using namespace std;
bool bitSet(int n,int k){
   if(n&(1<<(k-1))!=0){
    return true;
   }
   else return false;
}

bool bitSet1(int n,int k){
   if(((n>>(k-1))&1)==1){
    return true;
   }
   else return false;
}

int main(){
int n,k;
cout<<"Enter the number ";
cin>>n;

cout<<"enter the bit position";
cin>>k;

bool res=bitSet1(n,k);
if(res){
    cout<<"bit is set";}
else{
    cout<<"bit not set";
}
}
