#include <iostream>
#include <stack>
using namespace std;

int main() {
  cout << "BASIC IMPLEMENTATION USING C++ STL" << endl;
  stack <int> st;

  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  cout << "STACK TOP A - " << st.top() << endl;
  st.pop();
  cout << "STACK TOP B - " << st.top() << endl;
  st.pop();
  cout << "STACK SIZE - " << st.size() << endl;

  cout << "STACK empty or not - " << st.empty() << endl;
  st.pop();
  st.pop();
  cout << "STACK TOP C - " << st.top() << endl;
  st.pop();
  cout << "STACK empty or not - " << st.empty() << endl;
  
  return 0;
}
