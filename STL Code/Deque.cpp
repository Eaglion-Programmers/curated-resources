#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    cout<<"size"<<d.size()<<endl;
    d.push_back(70);
    d.push_front(50);
    cout<<"size"<<d.size()<<endl;

    cout<<"index element is->"<<d.at(1)<<endl;
    cout<<"is deque empty?->"<<d.empty()<<endl;
    d.pop_front();
    cout<<"size"<<d.size()<<endl;
    cout<<"index element is->"<<d.at(0)<<endl;


}