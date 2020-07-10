#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void insert_node(struct node **head, struct node **tail, int x)
{
    struct node *new_node = new node(x);
    if (*head == NULL)
        *head = new_node;
    else
        (*tail)->next = new_node;
    *tail = new_node;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

struct node *delete_node(struct node *head, int x)
{
    if (x == 1)
        return head->next;
    head->next = delete_node(head->next, x - 1);
    return head;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        struct node *head = NULL, *tail = NULL;
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            insert_node(&head, &tail, x);
        }
        int k;
        cin >> k;
        head = delete_node(head, k);
        print(head);
    }
}