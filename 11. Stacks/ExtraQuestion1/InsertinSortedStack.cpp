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
void insertinSortedArray(stack <int> &st, int element){
  if(st.empty() || element > st.top() ){  //edge case whenever accessing top - take care of empty
    st.push(element);
    return;
  }
  
  int temp = st.top();
  st.pop();
 
  insertinSortedArray(st,element);

// backtrack
  st.push(temp); //to retain original stack

}

int main() {
  cout << "5. Insert in a sorted Stack" << endl;

  stack <int> st;
  
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  st.push(60);
  
  print(st);
  insertinSortedArray(st,25);
  print(st);

  print(st);
  insertinSortedArray(st,5);
  print(st);

  print(st);
  insertinSortedArray(st,75);
  print(st);


}
/*
OUTPUT - 
5. Insert in a sorted Stack
60 50 40 30 20 10 
60 50 40 30 25 20 10 
60 50 40 30 25 20 10 
60 50 40 30 25 20 10 5 
60 50 40 30 25 20 10 5 
75 60 50 40 30 25 20 10 5 
*/
