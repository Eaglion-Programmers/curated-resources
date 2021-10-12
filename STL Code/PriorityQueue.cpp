#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> p;  //max heap

    priority_queue<int, vector<int>, greater<int>> q; //min heap

    p.push(10);
    p.push(70);
    p.push(30);
    p.push(5);
    
    int n = p.size();

    for (int i = 0; i < n; i++)
    {
       cout<<p.top()<<endl;
       p.pop();
    }
    
    q.push(10);
    q.push(70);
    q.push(30);
    q.push(5);
    
    int m = q.size();

    for (int i = 0; i < m; i++)
    {
       cout<<q.top()<<endl;
       q.pop();
    }
}