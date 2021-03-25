#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

void PrintNGE_Right(int arr[], int n)
{
    vector<int> v;
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st.size() == 0)
        {
            v.push_back(-1);
        }
        else if (st.size() > 0 && st.top() > arr[i])
        {
            v.push_back(st.top());
        }
        else if (st.size() > 0 && st.top() <= arr[i])
        {
            while (st.size() > 0 && st.top() <= arr[i])
            {
                st.pop();
            }
            if (st.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(st.top());
            }
        }
        st.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void PrintNGE_Left(int arr[], int n)
{
    vector<int> v;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (st.size() == 0)
        {
            v.push_back(-1);
        }
        else if (st.size() > 0 && st.top() > arr[i])
        {
            v.push_back(st.top());
        }
        else if (st.size() > 0 && st.top() <= arr[i])
        {
            while (st.size() > 0 && st.top() <= arr[i])
            {
                st.pop();
            }
            if (st.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(st.top());
            }
        }
        st.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void PrintNSE_Right(int arr[], int n)
{
    vector<int> v;
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st.size() == 0)
        {
            v.push_back(-1);
        }
        else if (st.size() > 0 && st.top() < arr[i])
        {
            v.push_back(st.top());
        }
        else if (st.size() > 0 && st.top() >= arr[i])
        {
            while (st.size() > 0 && st.top() >= arr[i])
            {
                st.pop();
            }
            if (st.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(st.top());
            }
        }
        st.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void PrintNSE_Left(int arr[], int n)
{
    vector<int> v;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (st.size() == 0)
        {
            v.push_back(-1);
        }
        else if (st.size() > 0 && st.top() < arr[i])
        {
            v.push_back(st.top());
        }
        else if (st.size() > 0 && st.top() >= arr[i])
        {
            while (st.size() > 0 && st.top() >= arr[i])
            {
                st.pop();
            }
            if (st.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(st.top());
            }
        }
        st.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{

    int arr[5] = {4, 5, 2, 10, 8};
    int n = 5;
    PrintNSE_Left(arr, n);
    //cout << "Hello world!" << endl;
    /*queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;
     cout<<q.front()<<endl;*/
    return 0;
}