#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode()
    {
        delete left;
        delete right;
    }
};

void printTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data;
    printTree(root->left);
    printTree(root->right);
}

void printTree_details(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L" << (root->left)->data;
    }
    if (root->right != NULL)
    {
        cout << "R" << (root->right)->data;
    }
    cout << endl;
    printTree_details(root->left);
    printTree_details(root->right);
}

BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter Data" << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *left_child = takeInput();
    BinaryTreeNode<int> *right_child = takeInput();
    root->left = left_child;
    root->right = right_child;
    return root;
}

BinaryTreeNode<int> *takeInput_Level()
{
    int rootData;
    cout << "Enter Data" << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *current_Node = q.front();
        q.pop();
        int left_child, right_child;
        cout << "enter left child of " << current_Node->data << endl;
        cin >> left_child;
        if (left_child != -1)
        {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(left_child);
            current_Node->left = leftNode;
            q.push(leftNode);
        }
        cout << "enter Right child of  " << current_Node->data << endl;
        cin >> right_child;
        if (right_child != -1)
        {
            BinaryTreeNode<int> *right_Node = new BinaryTreeNode<int>(right_child);
            current_Node->right = right_Node;
            q.push(right_Node);
        }
    }
    return root;
}

void Inorder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << "  ";
    Inorder(root->right);
}

void preorder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "  ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << "  ";
}

int num_of_nodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + num_of_nodes(root->left) + num_of_nodes(root->right);
}

int sum_of_tree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->data + sum_of_tree(root->left) + sum_of_tree(root->right);
}

BinaryTreeNode<int> *Remove_leaf_nodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        BinaryTreeNode<int> *temp = root;
        delete (temp);

        //or this
        delete (root);
        return NULL;
    }
    if (root->left != NULL)
    {
        root->left = Remove_leaf_nodes(root->left);
    }
    if (root->right != NULL)
    {
        root->right = Remove_leaf_nodes(root->right);
    }

    return root;
}

//1 2 3 4 5 6 -1 -1 -1 -1 -1 -1 -1

//2 -1 -1

int main()
{
    /*BinaryTreeNode<int> * root=new BinaryTreeNode <int>(1);
    BinaryTreeNode<int> * left=new BinaryTreeNode <int>(2);
    BinaryTreeNode<int> * right=new BinaryTreeNode <int>(3);
    BinaryTreeNode<int> * left1=new BinaryTreeNode <int>(4);
    root->left=left;
    root->right=right;
    root->left->left=left1;*/
    BinaryTreeNode<int> *root = takeInput_Level();
    printTree_details(root);
    cout << endl;
    cout << " Inorder:      ";
    Inorder(root);
    cout << endl;
    cout << " Preorder:      ";
    preorder(root);
    cout << endl;
    cout << " Postorder:      ";
    postorder(root);
    int num = num_of_nodes(root);
    cout << endl;
    cout << " number of node in a tree   :  " << num << endl;
    int sum_tree = sum_of_tree(root);
    cout << endl
         << " sum of tree :  " << sum_tree << endl;
    Mirror_Image_tree(root);
    printTree_details(root);
    cout << endl
         << endl
         << "After removing leaf nodes :  ";
    Remove_leaf_nodes(root);
    printTree_details(root);
    return 0;
}