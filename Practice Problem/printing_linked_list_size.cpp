#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int v)
    {
        val = v;
        next = NULL;
    }
};
void insertAtTail(int val, Node *&head, int &count)
{
    Node *nameP1 = new Node(val);
    if (head == NULL)
    {
        count++;
        head = nameP1;
        return;
    }
    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = nameP1;
    count++;
}

int main()
{
    int val;
    int count = 0;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(val, head, count);
    }
    cout << count;
    return 0;
}
