#include <iostream>

using namespace std;

template <class type>
class ArrayList
{
    struct Array_info
    {
        int sizes;
        type *arr_ptr;
    };

    Array_info *pointer_array_info;

public:
    ArrayList(int sizes)
    {
        pointer_array_info = new Array_info;
        pointer_array_info->sizes = sizes;
        pointer_array_info->arr_ptr = new type[sizes];
    }

    void add_Element(int index, type data)
    {
        if (index >= 0 && index < pointer_array_info->sizes)
            pointer_array_info->arr_ptr[index] = data;
        else
            cout << "index not valid" << endl;
    }

    void view_element(int index)
    {
        if (index >= 0 && index < pointer_array_info->sizes)
        {
            type data = pointer_array_info->arr_ptr[index];
            cout << endl
                 << data;
        }
        else
            cout << "index not valid" << endl;
    }
    void view_list()
    {
        for (int i = 0; i < pointer_array_info->sizes; i++)
            cout << pointer_array_info->arr_ptr[i] << "   ";
    }
};

template <class T, class V> //"typename" can be used instead of "class"
class pairs
{
    T x;
    V y;
    //triplet class
public:
    void set_my_x(T x)
    {
        this->x = x;
    }
    void set_my_y(V y)
    {
        this->y = y;
    }
    T get_my_x()
    {
        return x;
    }
    V get_my_y()
    {
        return y;
    }
};

int main()
{
    ArrayList<float> a1(4);
    a1.add_Element(0, 156.0155);
    a1.add_Element(1, 10.25);
    a1.add_Element(2, 111.545);
    a1.add_Element(3, 112.54);
    a1.view_list();
    a1.view_element(0);

    /*pairs <int,double> p;
    p.set_my_x(10.523);
    p.set_my_y(20.543);
    cout<<p.get_my_x()<<endl;
    cout<<p.get_my_y()<<endl;*/
    /*pairs <pairs<int ,int >,int> p;
    pairs<int ,int> p4;
    p4.set_my_x(15);
    p4.set_my_y(20);
    p.set_my_x(p4);
    p.set_my_y(55);
    cout<<p.get_my_y()<<endl;//55
    cout<<p.get_my_x().get_my_x()<<endl;//15
    cout<<p.get_my_x().get_my_y()<<endl;//20*/

    return 0;
}