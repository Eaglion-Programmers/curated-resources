#include<iostream>
#include<stack>
#include<unordered_map>
#include<cmath>

#include"node.h"
#include"insertNode.h"
#include"preorder.h"
#include"inorder.h"
#include"postorder.h"
#include"height.h"
#include"search_key.h"

using namespace std;

// Node* root;

int main()
{
    root = insert(root, 12);
    insert(root, 6);
    insert(root, 18);
    insert(root,3);
    insert(root,9);
    insert(root,21);
    insert(root,15);
    insert(root,14);
    insert(root,13);

    inorderRec(root);
    cout << endl;
    preorderRec(root);
    cout << endl;
    postorderRec(root);
    cout << endl;
    // postorderNRec(root);

    cout << "Height of Tree : " << getHeight_BST(root) << endl;
    cout << "Search Key(21) : " << searchBSTRecursive(root,21)->data << endl;

    return 0;
}


    //           12
    //     6           18
    // 3       9    15      21
    //                      