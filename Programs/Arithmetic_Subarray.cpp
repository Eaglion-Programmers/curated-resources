#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of Elements :";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0];
    int curr=2;
    int ans=0;
    int j=2;
    while(j<n){
        if(pd == arr[j]-arr[j-1]){
            curr += 1;
        }else{
            pd = arr[j]-arr[j-1]; // As our streak breaks so we have to update the PD(previous difference)
            curr =2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<"Answer is :"<<ans<<endl;

    return 0;
}
