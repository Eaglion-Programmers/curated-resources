#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"size before inserting elements"<<v.size()<<endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<"size after inserting elements"<<v.size()<<endl;
    v.capacity();

    v.pop_back();
    for(int i:v)
    {
        cout<<i<<endl;
    }cout<<endl;

    cout<<"front element is->"<<v.front()<<endl;
    cout<<"last element is->"<<v.back()<<endl;
    cout<<"Index element is->"<<v.at(3)<<endl;
    cout<<"Is vector empty?"<<v.empty()<<endl;

    
    v.clear();
    for(int i:v)
    {
        cout<<i<<endl;
    }cout<<endl;

    cout<<"size?"<<v.size();
    

}