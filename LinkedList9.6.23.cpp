// LinkedList9.6.23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Node { 
public: 
    int Value; 
    Node* Next;

};
void printlist(Node*n) {
    while (n != NULL) {
        std::cout << n->Value << "\n";
        n = n->Next;
    }
}

int main()
{
    std:: string userName = " ";
    std:: cout << "\nWelcome to Linked List Practice 9.6\n\n";

    std:: cout << "Please enter your name: ";
    std:: cin >> userName;
    std:: cout << "\n\n";

    std:: cout << "Hi, " << userName << " lets get started! \n";

    // Video follow along
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();


    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;

    printlist(head);

    


    


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


