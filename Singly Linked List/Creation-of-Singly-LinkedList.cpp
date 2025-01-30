//Creation of Singly Linked List in C++
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
    Node(int data,Node* next){
        this->data = data;
        this->next = next;
    }
};

int main(){
  //Creating the Linked List in Easiest Way
    Node* one = new Node(4);
    Node* two = new Node(3);
    Node* three = new Node(2);

  one->next = two;
  two->next = three;
 
  //printing the linked list
  Node* temp = one;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}
