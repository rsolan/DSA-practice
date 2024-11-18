#include <iostream>
#include <stack>
using namespace std;
void solve(stack <int> &st, int &pos){
  
  if(pos == 1){
    cout << "deleting middle element: " << st.top()<<endl;
    st.pop();
    return;
  }
  pos--;
  int temp = st.top();
  st.pop();
 
  solve(st,pos);

// backtrack
  st.push(temp); //to retain original stack
}

void del_middleElement(stack <int> &st){
  int size = st.size();
  int pos=0;
  if(st.empty()){
    cout<< "STack empty, cant delete middle element" <<endl;
    return;
  }
  if(size & 1){
    //odd
    pos = size/2 + 1;
  }else{
    //even
    pos = size/2;
  }
  solve(st,pos);

}

int main() {
  cout << "3. delete Middle element of Stack" << endl;

// take care of even and odd
// original structure of stack should not be changed

  stack <int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  st.push(60);
   cout << "before size is : " << st.size() << endl;

  del_middleElement(st);
  cout << "after size is : " << st.size() << endl;


}
/*
OUTPUT - 
10 20 30 40 50 60
3. delete Middle element of Stack
before size is : 6
deleting middle element: 40
after size is : 5

10 20 30 40 50 
3. delete Middle element of Stack
before size is : 5
deleting middle element: 30
after size is : 4


*/
