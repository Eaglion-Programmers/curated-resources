#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    cout<<"size is "<<s.size()<<endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(50);

    cout<<"size is "<<s.size()<<endl;
    cout<<"Is stack empty? "<<s.empty()<<endl;
    s.pop();
    cout<<"size is "<<s.size()<<endl;

    cout<<"top element is "<<s.top()<<endl;



    
}