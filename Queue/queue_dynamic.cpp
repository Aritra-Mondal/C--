#include <iostream>

using namespace std;

template <typename T>
class Queue_Array
{
    T *data;
    int first_index;
    int next_index;
    int sizes;
    int capacity;

public:
    Queue_Array()
    {
        data = new T[2];
        first_index = -1;
        next_index = 0;
        sizes = 0;
        capacity = 2;
    }
    int Get_size_queue()
    {
        return sizes;
    }
    bool isEmpty()
    {
        return sizes == 0;
    }
    void enqueue(T element)
    {
        if (sizes == capacity)
        {
            //cout<<"Queue FUll"<<endl;
            //return;
            T *newData = new T[2 * capacity];
            int j = 0;
            for (int i = first_index; i < capacity; i++)
            {
                newData[j] = data[i];
                j++;
            }
            for (int i = 0; i < first_index; i++)
            {
                newData[j] = data[i];
                j++;
            }
            delete[] data;
            data = newData;
            first_index = 0;
            next_index = capacity;
            capacity *= 2;
        }
        data[next_index] = element;
        next_index = (next_index + 1) % capacity;
        if (first_index == -1)
        {
            first_index = 0;
        }
        sizes++;
    }
    T fronts()
    {
        if (isEmpty())
        {
            cout << "queue is empty" << endl;
            return 0;
        }
        return data[first_index];
    }

    T dequeue()
    {
        if (isEmpty())
        {
            cout << "queue is empty" << endl;
            return 0;
        }
        T ans = data[first_index];
        first_index = (first_index + 1) % capacity;
        sizes--;
        if (sizes == 0)
        {
            first_index = -1;
            next_index = 0;
        }
        return ans;
    }
};

int main()
{
    //cout << "Hello world!" << endl;
    Queue_Array<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout << q.fronts() << endl;
    cout << q.Get_size_queue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.Get_size_queue() << endl;
    cout << q.isEmpty() << endl;

    return 0;
}