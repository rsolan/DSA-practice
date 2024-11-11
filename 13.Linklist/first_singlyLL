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

// pass head and tail by reference ------IMP
void insert_head(Node* &head,Node* &tail, int data){
  if(head == NULL){
    Node* newnode = new Node(data);

    // changes to both head and tail
    tail = newnode;
    head = newnode;

  }else{
    Node* newnode = new Node(data);
    newnode->next=head;
    head=newnode;
    // no changes to tail
  }
}

void insert_tail(Node* &head,Node* &tail, int data){
  if(head == NULL){
    Node* newnode = new Node(data);

    // changes to both head and tail
    tail = newnode;
    head = newnode;

  }else{
    Node* newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;
    // no changes to head
  }
}

void insert_pos(Node* &head, Node* &tail, int data, int pos){
  // edge cases- empty ll , also take care of & pass by ref
  int length = print_length(head);
  if(pos <= 1){
    insert_head(head,tail,data);

  }else if(pos > length){
    insert_tail(head,tail,data);

  }else{
    Node* newnode = new Node(data);

    Node* prev_pointer = NULL;
    Node* curr_pointer = head;

    while(pos!=1){
      prev_pointer = curr_pointer;
      curr_pointer = curr_pointer->next;
      pos--;
    }

    prev_pointer->next = newnode;
    newnode->next = curr_pointer;
  }
}

void delete_singlLL(Node* &head,Node* &tail, int pos){
  // edge cases- empty ll , 1 element ll 

  int length = print_length(head);

  // emptyll
  if(head == NULL){
    std::cout<<"Linklist is empty already, cannot delete" << std::endl;
  }

  // 1 element ll 
  if(head == tail){
    Node* temp= head;
    delete temp;

    head = NULL;
    tail = NULL;
  }

  // NORMAL cases
  if(pos == 1){
    Node* temp = head; //--- use temp var
    head = head->next;
    temp->next = NULL; //--- isolate temp -- IMP
    delete temp;  //- free memory - u can check if destructor fun called or not

  }else if(pos == length){
    Node* prev = head;

    while(prev->next != tail){  // -- imp run till tail not null
      prev = prev->next;
    }

    prev->next = NULL;
    delete tail;
    tail = prev;

  }else{
    Node* prev = NULL;
    Node* curr = head;

    while(pos!=1){
      prev = curr;
      curr = curr->next;
      pos--;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }

}

int main() { 

  std::cout << "Hello World!\n"; 

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
  print(head);

  std::cout <<"\n"<< std::endl;
  std::cout << "2. print length \n" <<std::endl;
  int length = print_length(head);
  std::cout << std::endl;
  std::cout << "LENGTH IS :  " <<length <<std::endl;

  std::cout <<"\n"<< std::endl;
  std::cout << "3. calculate tail \n" <<std::endl;
  cal_tail(head,tail);
  std::cout<< "head is : "<< head->data<<std::endl;
  std::cout<< "tail is : "<< tail->data<<std::endl;

  std::cout <<"\n"<< std::endl;
  std::cout << "4. INSERT  - HEAD , TAIL , POS \n" <<std::endl;
  insert_head(head,tail,5);
  print(head);
  std::cout <<"\n"<< std::endl;
  insert_tail(head,tail,50);
  print(head);
  std::cout <<"\n"<< std::endl;
  insert_pos(head,tail,15,3);
  print(head);
  std::cout <<"\n"<< std::endl;
  insert_pos(head,tail,-5,0);
  print(head);
  std::cout <<"\n"<< std::endl;
  insert_pos(head,tail,100,10);
  print(head);



  std::cout <<"\n"<< std::endl;
  std::cout << "5. delete LL -head,tail,pos \n" <<std::endl;
  std::cout <<"\n"<< std::endl;
  print(head);
  std::cout <<"\n"<< std::endl;
  delete_singlLL(head,tail,1);
  print(head);

  std::cout <<"\n"<< std::endl;
  delete_singlLL(head,tail,8);
  print(head);
  std::cout <<"\n"<< std::endl;
  delete_singlLL(head,tail,2);
  print(head);


  std::cout <<"\n"<< std::endl;


}


// OUPUT - 

//   Hello World!


//   1. printing the ll 

//   10 20 30 40 

//   2. print length 


//   LENGTH IS :  4


//   3. calculate tail 

//   head is : 10
//   tail is : 40


//   4. INSERT  - HEAD , TAIL , POS 

//   5 10 20 30 40 

//   5 10 20 30 40 50 

//   5 10 15 20 30 40 50 

//   -5 5 10 15 20 30 40 50 

//   -5 5 10 15 20 30 40 50 100 

//   5. delete LL -head,tail,pos 



//   -5 5 10 15 20 30 40 50 100 

//   5 10 15 20 30 40 50 100 

//   5 10 15 20 30 40 50 

//   5 15 20 30 40 50 