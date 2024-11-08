#include <iostream>

class Node{

  public:
    int data;
    Node* next;

    Node(){
      this->next =NULL;
    }
    Node(int data){
      this->data=data;
      this->next=NULL;
    }

};

void print(Node* head){
  Node* temp = head;
  while(temp!=NULL){
    std::cout<<temp->data << " ";
    temp=temp->next;
  }
}


int main() { 
  
  std::cout << "Hello World!\n"; 

  Node a;
  Node* first = new Node(10);
  Node* sec = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);

  first->next=sec;
  sec->next=third;
  third->next=fourth;

  Node* head = first;
  print(head);
  


}