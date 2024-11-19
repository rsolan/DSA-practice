#include <iostream>
#include <stack>
using namespace std;

// void print(stack <int> st){
//   while(!st.empty()){
//     cout<< st.top() <<" ";
//     st.pop();
//   }
//   cout <<endl;
// }

class Stack{
  public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
      arr = new int[size];
      this->size = size;
      top1 = -1;
      top2 = size;
    }

    void push1(int data){
      if(top2-top1 == 1){
        cout << "stack overflow - cant push" <<endl;
      }else{
        top1++;
        arr[top1] = data;
      }
    }

    void push2(int data){
      if(top2-top1 == 1){
        cout << "stack overflow - cant push" <<endl;
      }else{
        top2--;
        arr[top2] = data;
      }
    }

    void pop1(){
      if(top1 == -1){
        cout << "stack underflow - cant pop" <<endl;
      }else{
        arr[top1] = 0;
        top1--;
      }
    }

    void pop2(){
      if(top2 == size){
        cout << "stack underflow - cant pop" <<endl;
      }else{
        arr[top2] = 0;
        top2++;
      }
    }

    void print(){
      cout << " -----------------------------" <<endl;
      cout << "TOP 1 : " <<top1 << endl;
      cout << "TOP 2 : " <<top2 << endl;
      for(int i =0;i<size;i++){
        cout << arr[i] << " ";
      }
      cout <<endl;
    }
    
  

};

int main() {
  cout << "1. IMPLEMENT 2 STACKS IN AN ARRAY" << endl;

  Stack st(6);
  st.print();

  st.push1(10);
  st.print();

  st.push1(130);
  st.print();

  st.push1(1330);
  st.print();

  st.push2(90);
  st.print();


  st.push2(19870);
  st.print();


  st.push1(220);
  st.print();

  st.push1(2220);
  st.push2(2220);
  

st.pop2();
st.pop2();
st.pop2();
  st.print();

  st.pop1();
st.pop1();
st.pop1();
st.pop1();
st.pop1();
  st.print();



}
/*
OUTPUT - 
1. IMPLEMENT 2 STACKS IN AN ARRAY
 -----------------------------
TOP 1 : -1
TOP 2 : 6
0 0 0 0 0 0 
 -----------------------------
TOP 1 : 0
TOP 2 : 6
10 0 0 0 0 0 
 -----------------------------
TOP 1 : 1
TOP 2 : 6
10 130 0 0 0 0 
 -----------------------------
TOP 1 : 2
TOP 2 : 6
10 130 1330 0 0 0 
 -----------------------------
TOP 1 : 2
TOP 2 : 5
10 130 1330 0 0 90 
 -----------------------------
TOP 1 : 2
TOP 2 : 4
10 130 1330 0 19870 90 
 -----------------------------
TOP 1 : 3
TOP 2 : 4
10 130 1330 220 19870 90 
stack overflow - cant push
stack overflow - cant push
stack underflow - cant pop
 -----------------------------
TOP 1 : 3
TOP 2 : 6
10 130 1330 220 0 0 
stack underflow - cant pop
 -----------------------------
TOP 1 : -1
TOP 2 : 6
0 0 0 0 0 0 

*/
