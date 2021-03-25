#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;
    TreeNode(T data)
    {
        this->data = data;
    }
};

void printTree(TreeNode<int> *root)
{
    cout << root->data << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}
void printTree_with_child(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree_with_child(root->children[i]);
    }
}
TreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    int n;
    cout << "enter number of child of " << rootData << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
TreeNode<int> *takeInput_level_wise()
{
    int rootdata;
    cout << "Enter the data: ";
    cin >> rootdata;

    TreeNode<int> *root = new TreeNode<int>(rootdata);
    queue<TreeNode<int> *> pending_nodes;
    pending_nodes.push(root);
    while (pending_nodes.size() != 0)
    {
        TreeNode<int> *fronts = pending_nodes.front();
        pending_nodes.pop();
        cout << "Enter the number of children of " << fronts->data << endl;
        int num_child;
        cin >> num_child;
        for (int i = 0; i < num_child; ++i)
        {
            int child_data;
            cout << "Enter the " << i << " th child of " << fronts->data << endl;
            cin >> child_data;
            TreeNode<int> *child = new TreeNode<int>(child_data);
            fronts->children.push_back(child);
            pending_nodes.push(child);
        }
    }

    return root;
}

int number_of_nodes(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ans = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += number_of_nodes(root->children[i]);
    }
    return 1 + ans;
}
int height_of_the_tree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int maximum_height = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        int height = height_of_the_tree(root->children[i]);
        maximum_height = max(height, maximum_height);
    }
    return maximum_height + 1;
}

void print_at_depth_d(TreeNode<int> *root, int depth)
{
    if (root == NULL)
    {
        return;
    }
    if (depth == 0)
    {
        cout << root->data << endl;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        print_at_depth_d(root->children[i], depth - 1);
    }
}

int number_of_leaf_nodes(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->children.size() == 0)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += number_of_leaf_nodes(root->children[i]);
    }
    return ans;
}

void preorder(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        preorder(root->children[i]);
    }
}
void postorder(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        postorder(root->children[i]);
    }
    cout << root->data << " ";
}
void delete_tree(TreeNode<int> *root)
{
    for (int i = 0; i < root->children.size(); i++)
    {
        delete_tree(root->children[i]);
    }
    delete root;
}
bool search_tree(TreeNode<int> *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == x)
    {
        return true;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        bool ans;
        ans = search_tree(root->children[i], x);
        if (ans)
        {
            return true;
        }
    }
    return false;
}

int get_nodes_greater_than_x(TreeNode<int> *root, int x)
{
    int ans = 0;
    if (root->data > x)
    {
        ans = 1;
    }
    for (int j = 0; j < root->children.size(); j++)
    {
        int small_ans = get_nodes_greater_than_x(root->children[j], x);
        ans += small_ans;
    }
    return ans;
}

bool identical_tree(TreeNode<int> *root, TreeNode<int> *root1)
{
    if (root->data != root1->data)
    {
        return false;
    }
    int sizes = root->children.size();
    int sizes1 = root1->children.size();
    if (sizes != sizes1)
    {
        return false;
    }
    for (int i = 0; i < sizes; i++)
    {
        bool small_l = identical_tree(root->children[i], root1->children[i]);
        if (small_l == false)
        {
            return false;
        }
    }
    return true;
}

int main()
{ //TreeNode <int >T(1);
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);
    TreeNode<int> *node3 = new TreeNode<int>(4);
    root->children.push_back(node1);
    root->children.push_back(node2);
    node1->children.push_back(node3);
    printTree_with_child(root);
    return 0;
}