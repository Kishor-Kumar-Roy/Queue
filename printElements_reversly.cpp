#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Printing elements in reverse
int main() {
    queue<int> q;
    stack<int> st;
    
    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // Transfer elements from queue to stack
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    // Transfer elements back to queue and print in reverse order
    while (!st.empty()) {
        q.push(st.top());
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
