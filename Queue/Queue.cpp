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
    Queue_Array(int s)
    {
        data = new T[s];
        first_index = -1;
        next_index = 0;
        sizes = 0;
        capacity = s;
    }
    int get_size_enque()
    {
        return sizes;
    }
    bool isEmpty()
    {
        return sizes == 0;
    }

    void enque(T element)
    {
        if (capacity == sizes)
        {
            cout << "Queue FUll" << endl;
            return;
        }
        data[next_index] = element;
        next_index = (next_index + 1) % capacity;
        if (first_index == -1)
        {
            first_index = 0;
        }
        sizes++;
    }

    T fonts()
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
    return 0;
}
