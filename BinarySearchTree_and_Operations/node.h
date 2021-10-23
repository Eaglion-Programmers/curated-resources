#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(){
        this->right = nullptr;
        this->left = nullptr;
    }

    Node(int d){
        this->data = d;
        this->right = nullptr;
        this->left = nullptr;
    }
}*root;

// Node* root;
