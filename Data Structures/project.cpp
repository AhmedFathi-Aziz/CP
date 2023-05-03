#include <iostream>
using namespace std;

struct ArrayNode
{
    int data { };
    int index { };

    ArrayNode* next { };
    ArrayNode* prev { };

    ArrayNode(int data, int index): data(data), index(index) { }
};

class ArrayLinkedList
{
    private:
    ArrayNode* head { };
    ArrayNode* tail { };

    int length { }; // total number of nodes
    int array_length { }; // total number of array elements

    void link(ArrayNode* first, ArrayNode* second)
    {
        if (first)
            first -> next = second;
        if (second)
            second -> prev = first;    
    }

    ArrayNode* embed_aftre(ArrayNode* before, int data, int index)
    {
        ArrayNode* middle = new ArrayNode(data, index);
        ArrayNode* after = before -> next;
        length++;

        link(before, middle);
        if (!after)
            tail = middle;
        else 
            link(middle, after);

        return middle;    
    }

    
};



int main()
{

}