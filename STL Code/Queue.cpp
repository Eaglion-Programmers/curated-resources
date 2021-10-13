#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    cout<<"size ?->"<<q.size()<<endl;

    q.push(10);
    q.push(50);
    q.push(40);
    q.push(70);
    cout<<"size ?->"<<q.size()<<endl;

    cout<<"top element ?->"<<q.front()<<endl;
    q.pop();
    cout<<"top element ?->"<<q.front()<<endl;
    cout<<"Is queue empty?->"<<q.empty();

    

}