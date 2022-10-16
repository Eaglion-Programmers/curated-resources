#include<iostream>
using namespace std;

int countsetbit(int n){
   int c=0;
   while(n>0){
   if((n&1)==1){
    c++;
   }
   n=n/2;
   }
   return c;
}
int countsetbit1(int n){
   int c=0;
   while(n>0){
   n=n&(n-1);
    c++;


   }
   return c;
}
int main(){
  int n,k;
  cout<<"enter the number";
  cin>>n;

  k=countsetbit1(n);
  cout<<"total set bit is "<<k;
}
