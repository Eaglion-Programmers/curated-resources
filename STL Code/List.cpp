#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> k;
    cout<<"size ?"<<k.size()<<endl;
    k.push_back(1000);
    k.push_back(2000);
    k.push_front(5000);
    k.push_front(8000);

    cout<<"size ?"<<k.size()<<endl;
    for(int i:k)
    {
        cout<<i<<endl;
    }cout<<endl;

    k.erase(k.begin());  //pop the element

    for(int i:k)
    {
        cout<<i<<endl;
    }cout<<endl;

    cout<<"size ?"<<k.size()<<endl;
    cout<<"is this empty?->"<<k.empty();


}