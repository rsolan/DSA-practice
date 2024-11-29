#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverseQueue_usingStack(queue<int> &q){
  stack <int> st;
  // insert queue elements in stack
  while(!q.empty()){
    int frontelement = q.front();
    q.pop();
    st.push(frontelement);
  }

  while(!st.empty()){
    int topelement = st.top();
    st.pop();
    q.push(topelement);
  
  }
}


void reverseQueue_usingRecursion(queue<int> &q){
  
  if(q.empty()){
    return;
  }
  int temp = q.front();
  q.pop();
  reverseQueue_usingRecursion(q);

  // backtracking
  q.push(temp);

}

int main() {
  cout << "1.REVERSE A QUEUE - USING STACK AND RECURSION" << endl;

  queue <int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);


  // reverseQueue_usingStack(q);
reverseQueue_usingRecursion(q);

  cout<< "PRINT QUEUE : " <<endl;
  while(!q.empty()){
    cout << q.front() << "->" ;
    q.pop();
  }
  cout<<endl;


  return 0;
}

/*
10->20->30->40->50->60->
Output
1.REVERSE A QUEUE - USING STACK AND RECURSION
PRINT QUEUE : 
60->50->40->30->20->10->


*/
