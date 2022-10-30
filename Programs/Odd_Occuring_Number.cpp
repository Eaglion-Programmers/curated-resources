#include<iostream>
using namespace std;

int findodd(int arr[],int n){
int res=0;
for(int i=0;i<n;i++){
    res=res^arr[i];
}
return res;

}
int main(){
int n=5,arr[5];
cout<<"enter the 5 elements ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int res=findodd(arr,n);
cout<<res;

}
