// singly_linked_list.cpp
#include <iostream>

struct Node {
  int value;
  Node * next;
};

/*
1. Initialise two nodes:
Node * A = new Node;
Node * B = new Node;

2. Add values to the nodes
A->value = 0;
B->value = 1;

3. Connect B to A to form a linked list
A->next = B;

4. Confirm that the connection is successful
std::cout << (A->next)->value;
*/
