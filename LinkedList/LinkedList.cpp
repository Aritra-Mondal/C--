#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data; //(*this).data
        this->next = NULL;
    }
};

void print_node(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
}

int length(Node *head)
{
    if (head == NULL)
        return 0;
    return 1 + length(head->next);
}

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            auto *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
}

Node *takeInput_optimal()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *NewNode = new Node(data);
        if (head == NULL)
        {
            head = NewNode;
            tail = NewNode;
        }
        else
        {
            tail->next = NewNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

Node *Delete_Node(Node *head, int pos)
{
    if (pos == 0)
    {
        Node *a = head;
        head = head->next;
        delete a;
        return head;
    }
    int count = 0;
    Node *temp = head;
    while (count < pos - 1 && temp->next != NULL)
    {
        temp = temp->next;
    }
    if (temp->next != NULL)
    {
        temp->next = (temp->next)->next;
    }
    return head;
}

Node *Inser_Node(Node *head, int i, int data)
{
    Node *NewNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if (i == 0)
    {
        NewNode->next = head;
        head = NewNode;
        return head;
    }
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = NewNode;
        NewNode->next = a;
    }
    return head;
}
int nth_node_data(Node *head, int index)
{
    Node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        if (i == index)
        {
            return temp->data;
        }
        i++;
        temp = temp->next;
    }
    assert(0);
}

Node *Insert_Node_R(Node *head, int pos, int data)
{
    if (head == NULL)
    {
        if (pos == 0)
        {
            Node *NewNode = new Node(data);
            head = NewNode;
            return head;
        }
    }
    if (pos == 0)
    {
        Node *NewNode = new Node(data);
        NewNode->next = head;
        head = NewNode;
        return head;
    }
    Node *New_head_Recursion = Insert_Node_R(head->next, pos - 1, data);
    head->next = New_head_Recursion;
    return head;
}
Node *Delete_Node_R(Node *head, int pos)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (pos == 0)
    {
        Node *temp = head->next;
        delete head;
        head = temp;
    }
    Node *New_head_Recursion = Delete_Node_R(head->next, pos - 1);
    head->next = New_head_Recursion;

    return head;
}
void print_all_reverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    print_all_reverse(head->next);
    cout << head->data << " ";
}

Node *append_n_to_first(Node *head, int n)
{
    if (head == NULL)
    {
        return head;
    }
    int len = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        len++;
    }
    temp->next = head;
    Node *p = head;
    for (int i = 0; i < (len - n - 1); i++)
    {
        p = p->next;
    }
    Node *temp1 = p->next;
    p->next = NULL;
    return temp1;
}
void print_mid(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    temp = head;
    int i = 0;
    while (i < ((len - 1) / 2) && temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    cout << temp->data;
}
void print_mid_pointer(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    if (head = NULL)
    {
        return;
    }
    while (fast->next != NULL && (fast->next)->next != NULL)
    {
        slow = slow->next;
        fast = (fast->next)->next;
    }
    cout << slow->data;
}
Node *remove_duplicate(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *temp = head;
    Node *next_next;
    while (temp->next != NULL)
    {
        if (temp->data == (temp->next)->data)
        {
            next_next = (temp->next)->next;
            delete (temp->next);
            temp->next = next_next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}

Node *merge_2_sorted_list(Node *head1, Node *head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    if (head1->data < head2->data)
    {
        head1->next = merge_2_sorted_list(head1->next, head2);
        return head1;
    }
    else
    {
        head2->next = merge_2_sorted_list(head1, head2->next);
        return head2;
    }
}
Node *reverse_all(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *reverse_address_head = reverse_all(head->next);
    Node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    return reverse_address_head;
}

class pairs
{
public:
    Node *head;
    Node *tail;
};

pairs Reversell_class(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        pairs ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }
    pairs small_ans = Reversell_class(head->next);
    (small_ans.tail)->next = head;
    head->next = NULL;

    pairs ans;
    ans.head = small_ans.head;
    ans.tail = head;
    return ans;
}
Node *reversell_i(Node *head)
{
    Node *c = head, *p = NULL, *n = NULL;
    while (c != NULL)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    head = p;
    return head;
}

Node *oddEvenList(Node *head)
{
    if (head == NULL)
        return head;
    Node *odd_head = head;
    Node *even_head = head->next;
    Node *odd_i = head;
    Node *even_i = head->next;
    while (even_i != NULL && even_i->next != NULL)
    {
        odd_i->next = odd_i->next->next;
        even_i->next = even_i->next->next;
        odd_i = odd_i->next;
        even_i = even_i->next;
    }
    odd_i->next = even_head;
    return head;
}
Node *oddEvenList2(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *ends = head, *temp = head;
    int len = length(head);
    while (ends->next != NULL)
    {
        ends = ends->next;
    }
    len /= 2;
    while (len--)
    {
        ends->next = temp->next;
        temp->next = temp->next->next;
        ends->next->next = NULL;
        temp = temp->next;
        ends = ends->next;
    }
    return head;
}

int main()
{

    Node *head = takeInput();
    print_node(head);
    return 0;
}