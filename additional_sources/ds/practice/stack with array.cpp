#include <iostream> 
using namespace std;

constexpr int STACK_CAPACITY = 100;

class stack {
    int *arr;
    int top;
    
public:
    stack(const stack&)=delete;
    stack& operator=(const stack&)=delete;
    stack() {
        arr = new int[STACK_CAPACITY];
        top = -1;
    }

    ~stack() {
        delete[] arr;
    }
    
    void push(int x) {
        if (top == STACK_CAPACITY - 1) {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    
    void pop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
    }
    
    int Top() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.isEmpty() << endl;
    return 0;
}
