// Recursive Method

int getHeight_BST(Node* head){
    if(head == nullptr) return 0;

    int ht = 0;
    
    ht = max(1 + getHeight_BST(head->left),ht);
    ht = max(1 + getHeight_BST(head->right),ht);

    return ht;
}