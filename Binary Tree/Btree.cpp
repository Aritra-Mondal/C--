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
        this->left = NULL;
        this->right = NULL;
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
        cout << "L" << root->left->data << " ";
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data << " ";
    }
    cout << endl;
}

BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter Node Data: ";
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

BinaryTreeNode<int> *takeInput_level()
{
    int rootData;
    cout << "Enter Node Data: ";
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    queue<BinaryTreeNode<int> *> q;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *curent_Node = q.front();
        q.pop();
        int left_child, right_child;
        cout << "Enter the left child of " << curent_Node->data << ": " << endl;
        cin >> left_child;
        if (left_child != -1)
        {
            BinaryTreeNode<int> *left = new BinaryTreeNode<int>(left_child);
            curent_Node->left = left;
            q.push(left);
        }
        cout << "Enter the rightchild of " << curent_Node->data << ": " << endl;
        cin >> right_child;
        if (right_child != -1)
        {
            BinaryTreeNode<int> *right = new BinaryTreeNode<int>(right_child);
            curent_Node->right = right;
            q.push(right);
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

BinaryTreeNode<int> *Remove_leaf_Nodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        delete (root);
        return NULL;
    }
    if (root->left != NULL)
    {
        root->left = Remove_leaf_Nodes(root->left);
    }
    if (root->right != NULL)
    {
        root->right = Remove_leaf_Nodes(root->right);
    }
    return root;
}
void Mirror_Image_tree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    BinaryTreeNode<int> *temp = root->left;
    root->left = root->right;
    root->right = temp;
    Mirror_Image_tree(root->left);
    Mirror_Image_tree(root->right);
}

int main()
{
    /*BinaryTreeNode<int> * root=new BinaryTreeNode <int>(1);
    BinaryTreeNode<int> * left=new BinaryTreeNode <int>(2);
    BinaryTreeNode<int> * right=new BinaryTreeNode <int>(3);
    BinaryTreeNode<int> * left1=new BinaryTreeNode <int>(4);
    root->left=left;
    root->right=right;
    root->left->left=left1;*/
    BinaryTreeNode<int> *root = takeInput_level();
    printTree_details(root);
    return 0;
}