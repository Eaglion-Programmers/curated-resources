#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of Elements :";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int current;
    //Sub-Array
    for(int i =0;i<n;i++){
        current =0;
        for(int j=i;j<n;j++){
            current += arr[j];
            cout<<current<<endl;
        }

    }
    return 0;
}
