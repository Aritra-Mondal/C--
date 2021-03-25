#include <iostream>

using namespace std;

template <class T>
class stack_by_array
{
    T *data;
    int pointer_next;
    int capacity;

public:
    stack_by_array()
    {
        data = new T[2];
        pointer_next = 0;
        capacity = 2;
    }
    int size_of_stack()
    {
        return pointer_next;
    }

    bool isEmpty()
    {
        // if (pointer_next == 0)
        // {
        //     return true;
        // }else{
        //     return false;
        // }
        return pointer_next == 0;
    }
    void push(T element)
    {
        if (pointer_next == capacity)
        {
            T *newdata = new T[capacity * 2];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            capacity *= 2;
            delete data;
            data = newdata;
        }

        data[pointer_next] = element;
        pointer_next++;
    }
    T pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return 0;
        }
        pointer_next--;
        return data[pointer_next];
    }
    T top()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return 0;
        }
        return data[pointer_next - 1];
    }
};