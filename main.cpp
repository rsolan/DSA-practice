#include <iostream>
#include <limits.h>
#include <string.h>
#include <vector>

class Node{

  public:
    int data;
    Node* prev;
    Node* next;
  
    Node(){
      this->prev =NULL;
      this->next =NULL;   
    }

    Node(int data){
      this->data=data;
      this->prev =NULL;
      this->next=NULL;
    }


  // check destructor called for delete
    ~Node(){
      std::cout<<"destructore called for this node: " << this->data <<std::endl;
    }

};


int main() { 
  
  
  
  
  std::cout <<"\n"<< std::endl;
  std::cout << "1. printing the ll \n" <<std::endl;
 


  

  
}


/*
OUTPUT - 


  
  */