#include <iostream>
#include <stack>
using namespace std;

void print(stack <int> st){
  while(!st.empty()){
    cout<< st.top() <<" ";
    st.pop();
  }
  cout <<endl;
}
void insertAtBottom(stack <int> &st, int data){
  if(st.empty()){
    st.push(data);
    return;
  }
  
  int temp = st.top();
  st.pop();
 
  insertAtBottom(st,data);

// backtrack
  st.push(temp); //to retain original stack

}
void reverseStack(stack <int> &st){
  if(st.empty()){
    return;
  }
  int temp = st.top();
  st.pop();

  reverseStack(st);

  // backtracking  -- insert at bottom while coming back
  insertAtBottom(st,temp);
}

int main() {
  cout << "5. Reverse a Stack" << endl;

  stack <int> st;
  // st.push(10);
  
  

  print(st);
  reverseStack(st);
  print(st);


}
/*
OUTPUT - 

5. Reverse a Stack
60 50 40 30 20 10 
10 20 30 40 50 60 

5. Reverse a Stack
20 10 
10 20 

5. Reverse a Stack
10 
10 

5. Reverse a Stack - in case of empty just return 
*/
