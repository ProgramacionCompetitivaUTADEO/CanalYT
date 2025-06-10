#include "Queue.h"
#define endl "\n"

void reverse_at_k_2(Queue<int> cola, int k){

    if (k < 0 | k > cola.get_size() | cola.is_empty()) { cout << "NULL" << endl; return;}

    Node<int>* iter = cola.front() -> next;
    Node<int>* prev = cola.front();
    for (int i =0; i < k-1; i++){
        Node<int>* post = iter -> next;
        iter -> next = prev;
        prev = iter;
        iter = post;
    }
    cola.head -> next = iter;
    cola.head = prev;
}
