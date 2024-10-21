
#include <iostream>
#include <stack>

using namespace std;

int main() {

    // //create a stack of ints
    //stack <int> stkNumbers;

    // //push into stack
    //stkNumbers.push(10);
    //stkNumbers.push(20);
    //stkNumbers.push(30);
    //stkNumbers.push(40);
    //stkNumbers.push(50);

    // //we can access the element by getting the top and popping
    // //until the stack is empty
    //cout << "count = " << stkNumbers.size() << endl;

    //cout << "\nNumbers are:\n\n ";
    //while (!stkNumbers.empty()) {
    //     //print top element
    //    cout << stkNumbers.top() << "\n ";

    //     //pop top element from stack
    //    stkNumbers.pop();
    //}




     // stack container declaration
    stack<int> MyStack1;
    stack<int> MyStack2;

    // pushing elements into first stack
    MyStack1.push(10);
    MyStack1.push(20);
    MyStack1.push(30);
    MyStack1.push(40);

    // pushing elements into 2nd stack
    MyStack2.push(50);
    MyStack2.push(60);
    MyStack2.push(70);
    MyStack2.push(80);

    // using swap() function to swap elements of stacks
    MyStack1.swap(MyStack2);

    // printing the first stack
    cout << "MyStack1 = ";
    while (!MyStack1.empty()) {
        cout << MyStack1.top() << " ";
        MyStack1.pop();
    }

    // printing the second stack
    cout << endl << "MyStack2 = ";
    while (!MyStack2.empty()) {
        cout << MyStack2.top() << " ";
        MyStack2.pop();
    }






    system("pause>0");
    return 0;
}

