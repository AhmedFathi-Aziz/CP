#include <iostream>
#include <climits>
#include <cassert>
#include <assert.h>

#include <vector>   // for debug
#include <sstream>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int data): data(data) {}
    ~Node()
    {
        cout << "Destroy value: " << data << " at address " << this << endl;
    }
};

class LinkedList
{
    private:
    Node* head {};
    Node* tail {};
    int length = 0;  // Let's mentain how many nodes

    vector <Node*> debug_data;  // add / remove nodes you use

    void debug_add_node(Node* node)
    {
        debug_data.push_back(node);
    }
    void debug_remove_node(Node* node)
    {
        auto it = std::find(debug_data.begin(), debug_data.end(), node);
        if (it == debug_data.end())
            cout << "Node does not exist" << endl;
        else
            debug_data.erase(it);    
    }

    public:
    LinkedList() {
	}
	LinkedList(const LinkedList&) = delete;
	LinkedList &operator=(const LinkedList &another) = delete;

    void debug_print_address()
    {
        for (Node* current = head; current; current = current -> next)
            cout << current << "," << current -> data << endl;
        cout << endl;    
    }

    void debug_verify_data_integrity()
    {
        if (length == 0)
        {
            assert(head == nullptr);
            assert(tail == nullptr);
        }
        else
        {
            assert(head != nullptr);
            assert(tail != nullptr);
            if (length == 1)
                assert(head == tail);
            else 
                assert(head != tail);
            assert(!tail -> next);       
        }
        int len = 0;
        for (Node* current = head; current; current = current -> next, len++)
            assert(len < 10000);     // Consider infinite cycle ?
        assert(len == length);
        assert(length == (int)debug_data.size());   
    }


    // These 2 simple functions just to not forget changing the vector and length
    void delete_node(Node* node)
    {
        debug_remove_node(node);
        length--;
        delete node;
    }
    void add_node(Node* node)
    {
        debug_add_node(node);
        length++;
    }

    string debug_to_string()
    {
        if (length == 0)
            return "";

        ostringstream check;
        for (Node* current = head; current; current = current -> next)
        {
            check << current -> data;
            if (current -> next)
                check << " ";
        }
        return check.str();
    }

    void debug_print_node(Node* node, bool is_seperate = false)
    {
        if (is_seperate)
            cout << "Seperate: ";
        if (node == nullptr)
        {
            cout << "nullptr" << endl;
            return;
        }

        cout << node -> data << " ";
        if (node -> next == nullptr)
            cout << "X ";
        else 
            cout << node -> next -> data << " ";

        if (node == head)
            cout << "head" << endl;
        else if (node == tail)
            cout << "tail" << endl;
        else cout << endl;                    
    }

    void debug_print_list(string msg = "")
    {
        if (msg != "")
            cout << msg << endl;
        for (int i = 0; i < (int) debug_data.size(); i++)
            debug_print_node(debug_data[i]);
        cout << "***************\n" << flush;     
    }

    void insert_end(int value)
    {
        Node* item = new Node(value);
        add_node(item);
        if (!head)
            head = tail = item;
        else
        {
            tail -> next = item;
            tail = item;
            tail -> next = nullptr;
        }
    }

    void insert_front(int value)
    {
        Node* item = new Node(value);
        add_node(item);
    
        item -> next = head;
        head = item;
        if (length == 1)
            tail = head;

        debug_verify_data_integrity();  
    }

    void delete_front()
    {
        if (head)
        {
            Node* current = head;
            head = head -> next;
            delete_node(current);

            if (!head)  // data integrity
                tail = nullptr;

            debug_verify_data_integrity();
        }
    }

    void delete_last()
    {
        if (length <= 1)
        {
            delete_front();
            return;
        }
        else
        {
            Node* previous = get_nth(length - 1);
            delete_node(tail);
            tail = previous;
            tail -> next = nullptr;

            debug_verify_data_integrity();
        }
    }

    void delete_nth_node(int index)  // O(n) time - O(1) memory
    {
        if (index < 1 || index > length)
            cout << "Error. No such nth node" << endl;
        else if (index == 1)
            delete_front();
        else
        {
            Node* before = get_nth(index - 1);
            Node* current = before -> next;

            bool is_tail = current == tail;
            before -> next = current -> next;
            if (is_tail)
                tail = before;
            delete_node(current);

            debug_verify_data_integrity();    
        }        
    }

    void delete_next(Node* node)
    {
        assert(node);

        Node* to_delete = node -> next;

        bool is_tail = to_delete == tail;
        node -> next = node -> next -> next;
        delete_node(to_delete);

        if (is_tail)
            tail = node;
    }

    void delete_node_with_key(int value) // O(n) time - O(1) memory
    {
        if (!length)
            cout << "Empty List" << endl;
        else if (head -> data == value)
            delete_front();

        else
        {
            for (Node* current = head, *previous = nullptr; current; previous = current, current = current -> next)
            {
                if (current -> data == value)
                {
                    delete_next(previous);
                    return;
                }
            }
            cout << "Value not found" << endl;
        }
        debug_verify_data_integrity();
    }

    void swap_pairs()
    {
        for (Node* current = head; current; current = current -> next)
        {
            if (current -> next)
            {
                swap(current -> data, current -> next -> data);
                current = current -> next;
            }
        }
    }

    void reverse()
    {
        if (length <= 1)
            return;

        tail = head;
        Node* previous = head;
        head = head -> next;
        while (head)
        {
            Node* next = head -> next;
            head -> next = previous;

            previous = head;
            head = next;
        }
        head = previous;
        tail -> next = nullptr;
        debug_verify_data_integrity();
    }

    void delete_even_positions()
    {
        if (length <= 1)
            return;

        for (Node* current = head -> next, *previous = head; current;)
        {
            delete_next(previous);
            if (!previous -> next)
                break;

            current = previous -> next -> next;
            previous = previous -> next;    
        }
        debug_verify_data_integrity();
    }

    void embed_after(Node* node, int value)
    {
        Node* item = new Node(value);

        add_node(item);
        item -> next = node -> next;
        node -> next = item;
    }

    void insert_sorted(int value)  // O(n) time - o(1) memory
    {
        if (!length || value <= head -> data)
            insert_front(value);
        else if (value >= tail -> data)
            insert_end(value);

        else 
        {
            for (Node* current = head, *previous = nullptr; current; previous = current, current = current -> next)
            {
                if (value <= current -> data)
                {
                    embed_after(previous, value);
                    break;
                }
            }
        }
        debug_verify_data_integrity();
    }

    void remove_duolicates_from_not_sorted() // O(n ^ 2) time - O(1) memory
    {
        if (length <= 1)
            return;

        for (Node* current = head; current; current = current -> next)
        {
            for (Node* next = current -> next, *previous = current; next;)
            {
                if (current -> data == next -> data)
                {
                    delete_next(previous);
                    next = previous -> next;
                }
                else
                {
                    previous = next;
                    next = next-> next;
                }
            }
        }
        debug_verify_data_integrity();
    }

    void delete_last_occurrence(int target)
    {
        if (!length)
            return;
        
        Node* delete_my_next_node = nullptr;
        bool exist = false;
        for (Node* current = head, *previous = nullptr; current; previous = current, current = current -> next)
        {
            if (current -> data == target)
                exist = true, delete_my_next_node = previous;
        }

        if (exist)
        {
            if (delete_my_next_node)
                delete_next(delete_my_next_node);
            else delete_front();
        }
        debug_verify_data_integrity();
    }

    Node* move_to_end(Node* current, Node* previous)
    {
        Node* next = current -> next;
        tail -> next = current;

        if (previous)
            previous -> next = next;
        else
            head = next;

        tail = current;
        tail -> next = nullptr;

        return next;
    }

    void arrange_odd_and_even_positions()
    {
        if (length <= 2)
            return;
        
        int len = length / 2;

        for (Node* current = head -> next, *previous = head; len--; previous = current, current = current -> next)
        {
            current = move_to_end(current, previous);
        }
        debug_verify_data_integrity();
    }

    void odd_positions_even_positions()
    {
        if (length <= 2)
            return;

        Node* first_even = head -> next;
        Node* current_odd = head;

        while (current_odd -> next && current_odd -> next -> next)
        {
            Node* next_even = current_odd -> next;

            current_odd -> next = current_odd -> next -> next;
            next_even -> next = next_even -> next -> next;

            current_odd = current_odd -> next;

            if (length % 2 != 0)
                tail = next_even;
        }
        current_odd -> next = first_even;

        debug_verify_data_integrity();
    }

    void move_key_occurrence_to_end(int key)
    {
        if (length <= 1)
            return;

        int len = length;
        for (Node* current = head, *previous = nullptr; len--;)
        {
            if (current -> data == key)
                current = move_to_end(current, previous);
            else
                previous = current, current = current -> next;    
        }
        debug_verify_data_integrity();
    }

    void print()
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << current -> data << " ";
            current = current -> next;
        }
        cout << "\n";
    }

    Node* get_nth(int index) // O(n) time - O(1) memory
    {
        int in = 0;
        for (Node* current = head; current; current = current -> next)
        {
            if (++in == index)
                return current;
        }
        return nullptr; // still more steps needed - NOT found
    }

    Node* get_nth_back(int index)  // O(n) time - O(1) memory
    {
        if (length < index)
            return nullptr;
        return get_nth(length - index + 1);  // give it its 1-based index forward    
    }

    int search(int value) // O(n) time - O(1) memory
    {
        int index = 0;
        for (Node* current = head; current; current = current -> next, index++)
        {
            if (current -> data == value)
                return index;
        }
        return -1;
    }

    int improved_search(int value)
    {
        int index = 0;
        for (Node* current = head, *previous = nullptr; current; previous = current, current = current -> next)
        {
            if (current -> data == value)
            {
                if (!previous)
                    return index;
                swap(previous -> data, current -> data);
                return index - 1;    
            }
            index++;
        }
        return -1;
    }

    int size(){return length;}

    ~LinkedList()  //  O(n) time - O(1) memory
    {
        while (head)
        {
            Node* current = head -> next;
            delete head;
            head = current;
        }
    }
};

// Test Cases
void test()
{
    cout << "\n\nTest\n";
    LinkedList list;

    list.insert_end(1);
    list.insert_end(2);
    list.insert_end(3);
    list.insert_end(4);

    //some actions
    list.print();

    string expected = "1 2 3 4";
    string result = list.debug_to_string();

    if (expected != result)
    {
        cout << "no match:\n Expected: " << expected << "\nResult: " << result << "\n";
        assert(false);
    }
    list.debug_print_list("*********");
    // cout << list.size() << endl;
}

int main()
{
    LinkedList list;

    list.insert_end(10);
    list.insert_end(20);
    list.insert_end(30);
    list.insert_end(40);
    list.insert_end(50);
    list.insert_end(60);

    // list.arrange_odd_and_even_positions();
    list.odd_positions_even_positions();
    list.print();
}