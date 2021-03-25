#include <iostream>

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
class Queue_using_ll
{
public:
    Node<T> *head;
    Node<T> *tail;
    int sizes;

    Queue_using_ll()
    {
        this->head = NULL;
        this->tail == NULL;
        sizes = 0;
    }
    int get_sizes()
    {
        return sizes;
    }
    bool isEmpty()
    {
        return sizes == 0;
    }
    void enqueue(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        sizes++;
    }

    T dequeue()
    {
        if (isEmpty())
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
    T fronts()
    {
        if (isEmpty())
        {
            return 0;
        }
        return head->data;
    }
};

int main()
{
    Queue_using_ll<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout << q.fronts() << endl;
    cout << q.get_sizes() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.get_sizes() << endl;
    cout << q.isEmpty() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.isEmpty() << endl;
    return 0;
}