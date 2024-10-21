
#include <iostream>

using namespace std;


// Creating a node
class Node {

public:
    int value;
    Node* next;
};

void InsertAtBeginning(Node*& head, int value) {

    // Allocate memory to a node
    Node* new_node = new Node();

    // insert the data
    new_node->value = value;
    new_node->next = head;

    // Move head to new node
    head = new_node;
}

// Print the linked list
void PrintList(Node* head) {

    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }
}

Node* Find(Node* head, int Value) {

    while (head != NULL) {

        if (head->value == Value)
            return head;

        head = head->next;
    }

    return NULL;
}

// Insert a node after a node
void InsertAfter(Node* prev_node, int Value) {

    if (prev_node == NULL) {
        cout << "the given previous node cannot be NULL";
        return;
    }

    Node* new_node = new Node();
    new_node->value = Value;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Insert at the end
void InsertAtEnd(Node*& head, int Value) {

    Node* new_node = new Node();

    new_node->value = Value;
    new_node->next = NULL;

    if (head == NULL) {

        head = new_node;
        return;
    }

    Node* LastNode = head;
    while (LastNode->next != NULL) {

        LastNode = LastNode->next;
    }

    LastNode->next = new_node;
    return;
}

// Delete a node
void DeleteNode(Node*& head, int Value) {

    Node* Current = head, * Prev = head;

    if (head == NULL)
    {
        return;
    }

    if (Current->value == Value) {
        head = Current->next;
        delete Current;//free from memory
        return;
    }

    // Find the key to be deleted
    while (Current != NULL && Current->value != Value) {
        Prev = Current;
        Current = Current->next;
    }

    // If the value is not present
    if (Current == NULL) return;

    // Remove the node
    Prev->next = Current->next;
    delete Current;//free from memory

}

// Delete First Node node
void DeleteFirstNode(Node*& head) {

    Node* Current = head;

    if (head == NULL) {

        return;
    }

    head = Current->next;
    delete Current;//free from memory
    return;
}

// Delete Last node
void DeleteLastNode(Node*& head) {

    Node* Current = head, * Prev = head;

    if (head == NULL) {

        return;
    }

    if (Current->next == NULL) {
        
        head = NULL;
        delete Current;//free from memory
        return;
    }

    // Find the key to be deleted
    while (Current != NULL && Current->next != NULL) {
       
        Prev = Current;
        Current = Current->next;
    }

    // Remove the node
    Prev->next = NULL;
    delete Current;//free from memory
}


int main() {

    //Node* head;

    //Node* Node1 = NULL;
    //Node* Node2 = NULL;
    //Node* Node3 = NULL;

    //// allocate 3 nodes in the heap
    //Node1 = new Node();
    //Node2 = new Node();
    //Node3 = new Node();

    //// Assign value values
    //Node1->value = 1;
    //Node2->value = 2;
    //Node3->value = 3;

    //// Connect nodes
    //Node1->next = Node2;
    //Node2->next = Node3;
    //Node3->next = NULL;

    //// print the linked list value
    //head = Node1;

    //while (head != NULL) {

    //    cout << head->value << endl;
    //    head = head->next;
    //}



   /* Node* head = NULL;

    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);

    PrintList(head);

    Node* N1 = NULL;

    N1 = Find(head, 2);

    if (N1 != NULL)
        cout << "\nNode Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";


    InsertAfter(N1, 500);

    PrintList(head);
    cout << "\n";

     N1 = Find(head, 500);
     InsertAfter(N1, 600);
     PrintList(head);*/


    /*Node* head = NULL;

    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtBeginning(head, 0);

    PrintList(head);*/




    Node* head = NULL;

    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtEnd(head, 4);
    InsertAtEnd(head, 5);
    InsertAtEnd(head, 6);
    PrintList(head);

    DeleteNode(head, 4);
    cout << "\n";
    PrintList(head);

    DeleteFirstNode(head);
    cout << "\n";
    PrintList(head);


    DeleteLastNode(head);
    cout << "\n";
    PrintList(head);




    system("pause>0");
    return 0;
}