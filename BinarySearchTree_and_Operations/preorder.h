// Recursive Method
void preorderRec(Node* root){
    if(root == nullptr)
        return;
    cout << root->data << " ";
    preorderRec(root->left);
    preorderRec(root->right);
}

// Non-Recursive Method
void preorderNRec(Node* root){
    stack<Node*> util; 
    Node* temp = root;

    if(temp == nullptr)
        return;

    util.push(temp);

    while(util.empty() == false){
        temp = util.top();
        util.pop();
        cout << temp->data << " ";
        
        if(temp->right != nullptr)
            util.push(temp->right);
        
        if(temp->left != nullptr)
            util.push(temp->left);
    }

    cout << "\n";
}