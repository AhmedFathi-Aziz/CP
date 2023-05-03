#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;
    Node* prev;

    Node(int data): data(data) {}
    void set(Node* next, Node* prev)
    {
        this -> next =next;
        this -> prev = prev;
    }
    ~Node()
    {
        cout << "Destroy value: " << data << " at address " << this << endl;
    }
};

class LinkedList
{
    private:
    Node* head { };
    Node* tail { };
    int length = 0;

    public:

    void link(Node* first, Node* second)
    {
        if (first)
            first -> next = second;
        if (second)
            second -> prev = first;    
    }

    void insert_end(int value)
    {
        Node* item = new Node(value);
        if (!head)
        {
            head = tail = item;
            tail -> next = nullptr;
            head -> prev = nullptr;
        }

        else 
        {
           link(tail, item);
           tail = item;
           tail -> next = nullptr;
        }
        length++;
    }

    void insert_front(int value)
    {
        Node* item = new Node(value);
        if (!head)
        {
            head = tail = item;
            tail -> next = nullptr;
            head -> prev = nullptr;
        }
        else
        {
            link(item, head);
            head = item;
        }    
        length++;
    }

    void embed_after(Node* before, int value)
    {
        Node* middle = new Node(value);

        Node* after = before -> next;

        link(before, middle);
        link(middle, after);
    }

    void insert_sorted(int value)
    {
        if (!length  || value <= head -> data)
            insert_front(value);
        else if (value >= tail -> data)
            insert_end(value);

        else 
        {
            for (Node* current = head; current; current = current -> next)
            {
                if (current -> data >= value)
                {
                    embed_after(current -> prev, value);
                    break;
                }
            }
            length++;
        }        
    }

    void delete_front()
    {
        if (!head)
            return;
        Node* current = head -> next;
        delete head;
        head = current;

        if (head)
            head -> prev = nullptr;
        else if (!length)
            tail = nullptr;
        length--;            
    }

    void delete_end()
    {
        if (!head)
            return;

        Node* current = tail -> prev;
        delete tail;
        tail = current;

        if (tail)
            tail -> next = nullptr;
        else if (!length)
            head = nullptr;
        length--;            
    }

    Node* delete_and_link(Node* node)
    {
        Node* answer = node -> prev;
        link(node -> prev, node -> next);
        delete node;
        length--;

        return answer;
    }

    void delete_with_key(int target)
    {
        if (!length)
            return;
        else if (target == head -> data)
            delete_front();

        else
        {
            for (Node* current = head; current; current = current -> next)
            {
                if (current -> data == target)
                {
                    current = delete_and_link(current);
                    if (!current -> next) // we removed last node
                        tail = current;

                    return;    
                }
            }
            cout << "value not exist" << endl;
        }       
    }

    void delete_all_nodes_with_key(int target)
    {
        if (!length)
            return;

        insert_front(-target);

        for (Node* current = head; current;)
        {
            if (current -> data == target)
            {
                current = delete_and_link(current);
                // current = current -> next;
                if (!current -> next)
                    tail = current;
            }
            else current = current -> next;
        }

        delete_front();
    }

    void delete_even_positions()
    {
        if (length <= 1)
            return;

        for (Node* current = head; current && current -> next; current = current -> next)
        {
            delete_and_link(current -> next);
            if (!current -> next)
                tail = current; 
        }
    }

    void delete_odd_positions()
    {
        if (length <= 1)
            return;
        
        // Let's make odd positions even!
        insert_front(-1); // dummy node
        delete_even_positions();
        delete_front();    
    }

    bool is_palindrome()
    {
        if (length <= 1)
            return true; 

        int len = length / 2;
        Node* start {head}, *end{tail};

        while (len--)
        {
            if (start -> data != end -> data)
                return false;
            start = start -> next;
            end = end -> prev;    
        }
        return true;
    }

    int find_middle()
    {
        if (length <= 1)
            return -1;

        Node * slow {head}, *fast {head};
        while (fast && fast -> next)     // tortoise and hare algorithm
        {
            fast = fast -> next -> next; // hare
            slow = slow -> next; // tortoise
        }
        return slow -> data;
    }

    int middle()
    {
        if (length <= 1)
            return -1;

        Node* start{head}, *end(tail);
        while (start != end && start -> next != end)
        {
            start = start -> next;
            end = end -> prev;
        }
        return end -> data;
    }
    
    Node* get_nth(int index) // time O(n) - memory O(1)
    {
        int in = 0;
        for (Node* current = head; current; current = current -> next)
        {
            if (++in = index)
                return current;
        }
        return nullptr; // still more steps needed - NOT found
    }

    void reverse()
    {
        if (length <= 1)
            return;

        Node* first = head, *second = head -> next;
        while (second)
        {
            Node* first_ = second, *second_ = second -> next;
            link(second, first);
            first = first_;
            second = second_;
        }
        swap(head, tail);
        head -> prev = tail -> next = nullptr;
    }

    void print()
    {
        for (Node* current = head; current; current = current -> next)
            cout << current -> data << " ";
        cout << endl;    
    }
};

int main()
{
    LinkedList list;

    list.insert_front(10);
	list.insert_front(20);
	list.insert_front(30);
	list.insert_front(40);
	list.insert_front(50);
    
    list.reverse();
    list.print();
}