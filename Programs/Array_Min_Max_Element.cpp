#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,arr[n];
    cout<<"Enter the sixe of Array :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the Array elements :"<<endl;
        cin>>arr[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0;i<n;i++){
       // if(max<arr[i]){
         //   max=arr[i];
        //}
        maxno = max(maxno,arr[i]);
        minno = min(minno,arr[i]);
        
        //if(min<arr[i]){
          //  min=arr[i];
        //}
    }
    cout<<"Maximum Number is: "<<maxno<<endl;
    cout<<"Minimum Number is: "<<minno<<endl;

    return 0;
}
