#include <iostream>
#include <stack>
using namespace std;


int main() {
  cout << "1. retrieval of stack - prints reverse order" << endl;

  stack <char> st;
  string str = "hello";

  for(int i = 0; i < str.length(); i++){
    char ch = str[i];
    st.push(ch);
  }
 cout << "Printing stack :" ;
 while(!st.empty()){
  cout<< st.top() ;
  st.pop();
 }cout <<endl;


  return 0;
}

/*
OUTPUT - 
retrieval of stack - prints reverse order
Printing stack :olleh

*/
