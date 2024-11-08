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

int print_length(Node* head){
  Node* temp = head;
  int l=0;
  while(temp!=NULL){
    l++;
    temp=temp->next;
  }
  return l;
}

void cal_tail(Node* head, Node* & tail ){
  Node* temp = head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  tail=temp;
  
}


int main() { 
  
  

  Node a; //static object
  //dynamic obj :-
  Node* first = new Node(10);
  Node* sec = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);

  first->next=sec;
  sec->next=third;
  third->next=fourth;

  Node* head = first;
  Node* tail = first;
  
  std::cout <<"\n"<< std::endl;
  std::cout << "1. printing the ll \n" <<std::endl;
  

}