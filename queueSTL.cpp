#include <iostream>
#include <queue>
using namespace std;

int main() {
    // STL queue
    queue<int> q;

    // you can't use push function in cout cause it does not return any value 
    //void push() by default in STL
    q.push(10);
    q.push(30);
    q.push(52);

    cout << "size of queue = " << q.size() << endl;
    cout << "front element of queue = " << q.front() << endl;
    cout << "back element of queue = " << q.back() << endl;
    cout << "empty = " << q.empty() <<" -> not empty queue"<< endl; // if 0 means not empty, if 1 means empty

    return 0;
}
