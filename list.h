#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "student.h"
#include <iostream>


class Node
{
    public:
        Node()
        {
            value = NULL;
            next = NULL;
        }

        ~Node()
        {
            value = NULL;
            next = NULL;
        }

        Student *value;
        Node *next;

};
class LinkedList
{
    public:

    LinkedList()
    {
        first = NULL;
        last = NULL;
        length = 0;
    }
    void add(Student *A)
    {
        Node *B = new Node();
        B -> value = A;
        if (first == NULL)
        {
            first = B;
            last = B;
        }
        else
        {
           last -> next = B;
           last = B;
        }
        length++;
    }
    Student* getByIndex(int n)
    {
        if ((length > n) && (n >= 0))
        {
            Node* d = first;
            for (int index = 0; index < n; index++)
            {
                d = d -> next;
            }
            return d -> value;
        }
        return NULL;
    }

    void deleteByIndex(int n)
    {
        if (n == 0)
        {
            first = first -> next;
            length--;
            return;
        }

        if((length > n) && (n >=0 ))
        {
            Node* d = first;
            for (int index = 0; index < (n-1); index++)
            {
              d = d -> next;
            }
            d -> next = (d -> next) -> next;

            if (n == (length - 1))
            {
                last = d;
            }
            length--;
        }
    }

    void printList()
    {
        Node* d = first;
        while (d != NULL)
        {
            std::cout << d -> value -> getStudentInfo();
            d = d-> next;
        }
    }

    void clearList()
    {
        Node* d = first;
        Node* p;
        while (d != NULL)
        {
            p = d;
            d = d -> next;
            p -> ~ Node();
        }
        first = NULL;
        last = NULL;
        length = 0;
    }
        int length;
    private:
        Node *first;
        Node *last;
};
#endif 
