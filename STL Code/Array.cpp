#include<iostream>
#include<array>
using namespace std;

int main()
{
    int Basic[4]={1, 2, 3, 4}; //Basic array

    array<int,5> a ={1,2,3,5,7}; //Stl array

    int size = a.size();
    cout<<"size of array"<<a.size()<<endl;

    cout<<"Index element"<<a.at(2)<<endl;

    cout<<"Is array empty?"<<a.empty()<<endl;

    cout<<"Front element"<<a.front()<<endl;

    cout<<"Last element"<<a.back()<<endl;
}