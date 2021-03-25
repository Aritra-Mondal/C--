#include <iostream>
#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};
template <typename T>
class stack_using_ll
{
    Node<T> *head;
    int sizes;

public:
    stack_using_ll()
    {
        head = NULL;
        sizes = 0;
    }
    int Get_size()
    {
        return sizes;
    }
    bool isEmpty()
    {
        return sizes == 0;
    }

    void push(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        sizes++;
    }
    T pop()
    {
        if (sizes == 0)
        {
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        sizes--;
        return ans;
    }
    T top()
    {
        if (sizes == 0)
        {
            return 0;
        }
        return head->data;
    }
};
bool is_Bracket_balanced(string expre)
{
    stack_using_ll<char> s;
    char x;
    for (int i = 0; i < expre.length(); i++)
    {
        if (expre[i] == '(' || expre[i] == '{' || expre[i] == '[')
        {
            s.push(expre[i]);
            continue;
        }
        if (s.isEmpty())
        {
            return false;
        }
        if (expre[i] == ')')
        {
            x = s.pop();
            if (x == '{' || x == '[')
            {
                return false;
            }
        }
        else if (expre[i] == '}')
        {
            x = s.pop();
            if (x == '(' || x == '[')
            {
                return false;
            }
        }
        else if (expre[i] == ']')
        {
            x = s.pop();
            if (x == '(' || x == '{')
            {
                return false;
            }
        }
    }
    return s.isEmpty();
}

int main()
{
    string str = "{{[[(())]]}}";
    if (is_Bracket_balanced(str))
    {
        cout << "balanced";
    }
    else
    {
        cout << "unbalanced";
    }
    return 0;
}
