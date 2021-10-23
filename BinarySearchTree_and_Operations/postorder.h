
// Recursive Method
void postorderRec(Node* root){
    if(root == nullptr)
        return;
    postorderRec(root->left);
    postorderRec(root->right);
    cout << root->data << " ";
}


// left - right - root
// Non-Recursive Method
void postorderNRec(Node* root){
    stack<Node*> stck;
    unordered_map<Node*,bool> visited;
    Node* temp = root;

    if(temp == nullptr) return;

    stck.push(temp);

    while(stck.empty() == false){
        Node* temp = stck.top();
        // stck.pop();
        if(visited[temp] || (temp->left == nullptr && temp->right == nullptr)){
            cout << temp->data << " ";
            stck.pop();

            continue;
        }

        if(temp->right != nullptr)
            stck.push(temp->right);
        
        if(temp->left != nullptr)
            stck.push(temp->left);
        
        visited[temp] = true;
    }

    cout << endl;
}