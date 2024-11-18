#include <iostream>
#include <stack>
using namespace std;
void solve(stack <int> &st, int &pos, int &ans){
  if(pos == 1){
    ans = st.top();
    return;
  }
  pos--;
  int temp = st.top();
  st.pop();
 
  solve(st,pos,ans);

  st.push(temp); //to retain original stack
}

int middleElement(stack <int> &st){
  int size = st.size();
  int pos=0;
  if(st.empty()){
    cout<< "STack empty, no middle element" <<endl;
    return -1;
  }
  if(size & 1){
    //odd
    pos = size/2 + 1;
  }else{
    //even
    pos = size/2;
  }

  int ans = -1;
  solve(st,pos,ans);
  return ans;

}

int main() {
  cout << "2. Middle element of Stack" << endl;

// take care of even and odd
// original structure of stack should not be changed

  stack <int> st;
  st.push(10);
  st.push(20);
  // st.push(30);
  // st.push(40);
  // st.push(50);
  // st.push(60);
 
  int mid = middleElement(st);
  cout << "middle element is : " << mid << endl;


}
/*
OUTPUT - 
10 20 30 40 50 60
2. Middle element of Stack
middle element is : 40

10 20 30 40 50 
2. Middle element of Stack
middle element is : 30

10
2. Middle element of Stack
middle element is : 10

2. Middle element of Stack
STack empty, no middle element
middle element is : -1

10,20
2. Middle element of Stack
middle element is : 20

*/
