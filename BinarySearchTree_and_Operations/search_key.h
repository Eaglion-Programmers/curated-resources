// Non-Recursive Method
Node* searchBST(Node* root, int data) {
    if(root == nullptr) return root;
    
    Node* tmp = root;
    while(true){
        if(tmp->data == data) return tmp;
        
        else if(tmp->data > data){
            if(tmp->left == nullptr) return tmp->left;
            else tmp = tmp->left;
        }
        
        else{
            if(tmp->right == nullptr) return tmp->right;
            else tmp = tmp->right;
        }
    }
}

// Non-Recursive Method
Node* searchBSTRecursive(Node* root, int val) {
    if(root == nullptr) return root;
    
    if(root->data > val){
        root = searchBSTRecursive(root->left,val);
    }
    else if(root->data < val){
        root = searchBSTRecursive(root->right,val);
    }
    
    return root;
}