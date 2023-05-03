#include <iostream>
#include <assert.h>
#include <string>
using namespace std;

class Stack
{
private:
    int size { };
    int top { };
    int* array { };

public:
    Stack(int size): size(size), top(-1) {
        array = new int[size];
    }

    ~Stack() {
        delete [] array;
    }

    bool isFull(){return top == size - 1;}
    bool isEmpty(){return top == -1;}

    void push(int value)
    {
        assert(!isFull());
        array[++top] = value;
    }

    int pop()
    {
        assert(!isEmpty());
        return array[top--];
    }

    int peek()
    {
        assert(!isEmpty());
        return array[top];
    }

    void print() {
        for (int i = top; i >= 0; i--)
            cout << array[i] << " ";
        cout << "\n";    
    }
};

string reverse_subwords(string line) {
    string answer;
    line += " ";
    
    Stack stk(line.length());
    for (int i = 0; i < (int)line.length(); i++) {
        if (line[i] == ' ') {
            while (!stk.isEmpty()) 
                answer += stk.pop();
            answer += ' ';    
        }
        else
            stk.push(line[i]);
    }
    return answer;
}

int reverse_number(int number)
{
    if (number == 0)
        return 0;
    
    Stack stk(25);
    while (number)
        stk.push(number % 10), number /= 10;

    int tens = 1;
    while (!stk.isEmpty())
        number = stk.pop() * tens + number, tens *= 10;
    return number;    
}

char get_open_match(char ch) {
    if (ch == ')')
        return '(';
    if (ch == ']')
        return '[';
    return '{';       
}

bool valid(string expression) {

    Stack parentheses(expression.length());
    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        if (ch == '(' || ch == '[' || ch == '{')
            parentheses.push(ch);
        else if (parentheses.isEmpty() || parentheses.pop() != get_open_match(ch))
            return false;    
    }
    return parentheses.isEmpty();
}

string removeDuplicates(string line) {
    Stack s(line.length());
    for (int i = 0; i < line.length(); i++) {
        char ch = line[i];

        if (!s.isEmpty() && s.peek() == ch)
            s.pop();
        else
            s.push(ch);    
    }
    line = "";
    while (!s.isEmpty())
        line += s.pop();
    return reverse_subwords(line);    
}

int main()
{
}