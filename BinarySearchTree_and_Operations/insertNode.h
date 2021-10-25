Node* insert(Node* root, int d){
    if(root == nullptr){
        root = new Node(d);
        // root->data = d;
    }
    else{
        if(root->data > d)
            root->left = insert(root->left,d);
        else if(root->data < d)
            root->right = insert(root->right,d);
        else
            cout << "duplicate key insertion attempt!" << endl;
    }
    return root;
}
