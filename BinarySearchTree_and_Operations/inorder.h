
// Recursive Method
void inorderRec(Node* root){
    if(root == nullptr)
        return;
    inorderRec(root->left);
    cout << root->data << " ";
    inorderRec(root->right);
}

// Non-Recursive Method
void inorderNRec(Node* root){
    stack<Node*> util; 
    Node* temp = root;

    while(temp != nullptr || util.empty() == false){
        while(temp != nullptr){
            util.push(temp);
            temp = temp->left;
        }

        temp = util.top();
        util.pop();

        cout << temp->data << " ";
        temp = temp->right;
    }

    cout << "\n";
}