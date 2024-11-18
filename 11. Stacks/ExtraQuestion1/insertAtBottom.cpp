#include <iostream>
#include <stack>
using namespace std;

void print(stack <int> st){ //dont pass stack as reference here
  while(!st.empty()){
    cout<< st.top() <<" ";
    st.pop();
  }
  cout <<endl;
}

void insertAtBottom(stack <int> &st, int data){  // stack as reference here , and why not data ??
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

int main() {
  cout << "4. Insert at bottom of Stack" << endl;

  stack <int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  st.push(60);

  cout << "before size is : " << st.size() << endl;
  print(st);
  insertAtBottom(st,5);
  cout << "after size is : " << st.size() << endl;
  print(st);


}
/*
OUTPUT - 

4. Insert at bottom of Stack
before size is : 6
60 50 40 30 20 10 
after size is : 7
60 50 40 30 20 10 5 


4. Insert at bottom of Stack
before size is : 1
10 
after size is : 2
10 5 

4. Insert at bottom of Stack
before size is : 0

after size is : 1
5 

*/
