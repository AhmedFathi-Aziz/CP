#include <iostream>
#include <assert.h>
using namespace std;

template <typename var>
class Vector 
{
private:
	var *arr { NULL };
	int size { 0 };
    int capacity { };
	
public:
	Vector(int size):size(size)
	{
		if (size < 0)
			size = 1;

        capacity = size + 10;    
		arr = new var[capacity] { }; 
	}
	
	var get(int index)
	{
		assert( 0 <= index && index < size);
        return arr[index];
	}

    void set(int index, var value)
    {
        assert(0 <= index && index < size);
        arr[index] = value;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;    
    }

    int find(var value)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == value)
                return i;
        }
        return -1;
    }

    bool isempty() {return size <= 0;}

    var gitFront() 
    {
        if (!isempty())
            return arr[0];
        return -1;    
    }

    var gitBack()
    {
        if (!isempty())
            return arr[size - 1];
        return -1;    
    }
	
    void expand_capacity()
    {
        capacity *= 2;
        cout << "Expand Capacity To " << capacity << endl;

        var *copy = new var[capacity] {};
        for (int i = 0; i < size; i++)
            copy[i] = arr[i];
        swap(arr, copy);

        delete[] copy;    
    }

    void insert(int index, var value)
    {
        assert(0 <= index && index < size);

        if (size == capacity)
            expand_capacity();

        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = value;
        ++size;
    }

    void right_rotate()
    {
        var temp = arr[size - 1];

        for (int i = size - 2; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = temp;
    }

    void right_rotate(int times)
    {
        times %= size;
        while (times--)
            right_rotate();
    }

    void left_rotate(int times)
    {
        times %= size;
        while (times--)
        {
            var temp = arr[0];

            for (int i = 1; i < size; i++)
            {
                arr[i - 1] = arr[i];
            }
            arr[size - 1] = temp;
        }
    }

    var pop(int index)
    {
        assert(0 <= index && index < size);
        var answer = arr[index];
        for (int i = index + 1; i < size; i++)
        {
            arr[i - 1] = arr[i];
        }
        --size;
        return answer;
    }

    int find_transposition(var value)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == value)
            {
                if (i == 0)
                    return 0;
                swap(arr[i], arr[i - 1]);
                return i - 1;    
            }
        }
        return -1;
    }

    void push_back(var value) // time -> amortized O(1)
    {
       if (size == capacity)
            expand_capacity();
        arr[size++] = value;    
    }
	~Vector()
	{
		delete[] arr;
		arr = NULL;
	}
	
};

int main()
{
    Vector <int> v(5);
    
    for (int i = 0; i < 5; i++)
        v.set(i, i);

        
    v.print();
}
