#include <iostream>
using namespace std;
class Stack{
  public:
    // data member
    int *arr; //dynamic Array
    int top;
    int size;

    // Constructor
    Stack(int size){

      arr = new int[size];
      this->size = size;
      this->top = -1;
    }

    // Methods
    void push(int data){
      if(top == size-1){
        cout << " stack full - overflow, cant push" << endl;
        return;
      }else{
        top++;
        arr[top] = data;
      }
    }

    void pop(){
      if(top == -1){
        cout << " stack empty - underflow, cant pop" << endl;
        return;
      }else{
        arr[top]= 0; //optional
        top--;
      }
    }

    int getTop(){
      if(top == -1){
        cout << " ans = -1 , stack empty - underflow" << endl;
      }else{
        return arr[top];
      }
    }

    int getSize(){
      return top+1;
    }

    bool isempty(){
      if(top == - 1){
        return true;
        //empty 1
      }else{
        return false;
        //non empty 0
      }
    }

    void print(){
      cout << "STACK : ";
      for(int i = 0;i <getSize() ; i++){
        cout << arr[i] << " ";
      }
      cout<<endl;
    }


};
int main() {
  cout << "Stack Implementation using Array" << endl;
  // object created of stack class
  Stack st(8);  //static creation

  st.push(10);
  st.push(20);
  st.push(30);
  st.print();

  st.push(40);
  st.push(50);
  st.print();

  cout << "STACK TOP A - " << st.getTop() << endl;
  st.pop();
  cout << "STACK TOP B - " << st.getTop() << endl;
  st.pop();
  cout << "STACK SIZE - " << st.getSize() << endl;
  st.print();

  cout << "STACK empty or not - " << st.isempty() << endl;
  st.pop();
  st.pop();
  cout << "STACK TOP C - " << st.getTop() << endl;
  st.pop();
  cout << "STACK empty or not - " << st.isempty() << endl;
  st.print();
  st.pop();
  cout << "STACK TOP d- " << st.getTop() << endl;



  // st.push(10);
  // st.push(20);
  // st.push(30);
  // st.push(40);
  // st.push(50);
  // st.push(20);
  // st.push(30);
  // st.push(80);
  
  // st.print();
  // st.push(90);


  return 0;
}

/*
OUTPUT- 

Stack Implementation using Array
STACK : 10 20 30 
STACK : 10 20 30 40 50 
STACK TOP A - 50
STACK TOP B - 40
STACK SIZE - 3
STACK : 10 20 30 
STACK empty or not - 0
STACK TOP C - 10
STACK empty or not - 1
STACK : 
 stack empty - underflow, cant pop
STACK TOP d-  ans = -1 , stack empty - underflow
*/
