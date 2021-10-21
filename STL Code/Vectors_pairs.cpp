#include <bits/stdc++.h>
using namespace std;

void vec_print(vector<int> &v){ //& to pass by refrence if not changing the values to save time complexity O(n) ---> O(1)
    cout << "size: " << v.size() << endl; // O(1)
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void vec_pair(vector<pair<int, int> > v){
    cout << "size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    } 
    cout << endl;
}


int main(){
    
    pair<int,string> p;
    p = make_pair(6,'t');
    // OR
    p = {6,"wihzbang"};
    cout << p.first << " " << p.second << endl;
    
   
   int a[] = {1,2,3};
   int b[] = {4,5,6};

   pair<int,int> p_array[3];
   p_array[0] = {a[0],b[0]};
   p_array[1] = {a[1],b[1]};
   p_array[2] = {a[2],b[2]}; 
   swap(p_array[2],p_array[0]); 
   for(int i=0;i<3;i++)
   {
       cout << p_array[i].first << " " << p_array[i].second << endl;
   }
   

    //// Vector ////
    
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);   // O(1)
    }
    cout << v.size() << endl; // O(1)
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    
    
    
    vector<int> v(10, 1);
    v.push_back(5);
    vec_print(v);
    v.pop_back();  //O(1)
    vec_print(v);
    vector<int> v1 = v;  // copying O(n)*********
    v1.push_back(4);
    vec_print(v1);
    

    
    //Vector pairs
    vector<pair<int, int> > v1;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin >> x >> y;
        v1.push_back(make_pair(x,y)); // or {x,y}
    }
    vec_pair(v1);
    

    
    //array of vectors
    int N;
    cin >> N;
    vector<int> v[N];
    for(int i=0; i<N; i++)
    {
        int n;
        cin >> n;
        for(int j=0; j<n; j++)
        {
        int x;
        cin >> x;
        v[i].push_back(x);
        }
    }

    for(int i=0; i<N; i++)
    {
        vec_print(v[i]);
    }
    


    // Vector of vector
    vector<vector<int> > v;
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for(int j=0; j<n; j++)
        {
        int x;
        cin >> x;
        temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[2].pop_back();
    v.push_back(vector<int>());
    for(int i=0; i<v.size(); i++)
    {
        vec_print(v[i]);
    }

    return 0;
}