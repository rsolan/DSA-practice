#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>

class Node{

  public:
    int data;
    Node* next;
    
  
    Node(){
      this->next =NULL;
        
    }

    Node(int data){
      this->data=data;
      this->next =NULL;
      
    }
};
Node* reverseList(Node* head) {
  Node* prev = NULL;
  Node* curr = head;

    while(curr != NULL){
        Node* newnode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = newnode;
    }
    head = prev;
    return head;

}
void print(Node* head){
  Node* temp = head;
  while(temp!=NULL){
    std::cout<<temp->data << " ";
    temp=temp->next;
  }
}
void addone(Node* &head){
  // 1. reverse 
   head = reverseList(head);

  // 2. add
  int carry = 1;
  
  Node* temp = head;
  while(temp->next != NULL){
    int ts = temp->data + carry;
    int digit = ts%10;
    carry = ts/10;

    temp->data = digit;
    temp=temp->next; //--imp

    if(carry == 0){
      break;
    }
  }

  // handle last node
  if(carry != 0){
    int ts = temp->data + carry;
    int digit = ts%10;
    carry = ts/10;

    temp->data = digit;
    

    if(carry != 0){
      Node* newnode = new Node(carry);
      temp->next = newnode;
    }
  }

  // 3.reverse back
  head = reverseList(head);
  
}

int main() { 
  
  
  Node* first = new Node(1);
  Node* sec = new Node(9);
  Node* third = new Node(9);
  Node* head = first;
  first->next = sec;
  sec->next = third;
  std::cout <<"\n"<< std::endl;
  std::cout << "1. add 1 to  the ll \n" <<std::endl;
  print(head);
  std::cout <<"\n"<< std::endl;
  addone(head);
  print(head);
  std::cout <<"\n"<< std::endl;
 


  
}


/*
OUTPUT - 

1. add 1 to  the ll 

9 9 9 

1 0 0 0   


1. add 1 to  the ll 

1 9 9 

2 0 0 

  */