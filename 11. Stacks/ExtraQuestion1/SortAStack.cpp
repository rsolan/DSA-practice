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
void SortaStack(stack <int> &st){
  if(st.empty()){
    return;
  }
  int temp = st.top();
  st.pop();

  SortaStack(st);

  // backtracking  -- insert the temp back in sorted array
  insertinSortedArray(st,temp);
}

int main() {
  cout << "5. Sort a Stack" << endl;

  stack <int> st;
  
  st.push(10);
  st.push(10);
  st.push(660);
  st.push(0);
  st.push(590);
  st.push(50);
  
  cout << "BEFORE - ";
  print(st);
  SortaStack(st);
  cout << "AFTER  - ";
  print(st);

 


}
/*
OUTPUT - 
5. Sort a Stack
BEFORE - 50 590 0 660 40 10 
AFTER  - 660 590 50 40 10 0 

5. Sort a Stack
BEFORE - 10 
AFTER  - 10 

5. Sort a Stack
BEFORE - 
AFTER  - 

5. Sort a Stack
BEFORE - 50 590 0 660 10 10 
AFTER  - 660 590 50 10 10 0 

*/
