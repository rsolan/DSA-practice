#include <iostream>
#include <stack>
using namespace std;



bool redundantBrackets(string &str){ //pas string by reference
  stack <char> st;

  for(int i = 0; i < str.length(); i++){
    char ch = str[i];
    if( ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/' ){
      st.push(ch);
    }else if(ch == ')'){

      // check if operator count is not zero
      int opcount =0;
      while(!st.empty() && st.top()!='('){
        char ch = st.top();
        if( ch == '+' || ch == '-' || ch == '*' || ch == '/'){
          opcount++;
        }
        st.pop();
      } 
      st.pop();  //pop the closing bracket also 

      if(opcount == 0){
        return true; //means rb present - no op btw brackets
      }
      
    }
  }
  // string processed and every br pair has op btw it - so no rb
  return false;
}

int main() {
  cout << "3. Check if redundant brackets or not " << endl;

  string str  = "";
  bool RB = redundantBrackets(str);
  if(RB == true){
    cout<< "RB PRESENT" <<endl;
  }else{
    cout<< "RB not present" <<endl;
  }
 


}
/*
OUTPUT - 
3. Check if redundant brackets or not 
RB PRESENT
  string str  = "((a) + b)";
  string str  = "(b)";
  string str  = "()";
  string str  = ")";
  string str  = "(((a+b) - (a-b)))";
  string str  = "";


3. Check if redundant brackets or not 
RB not present
    string str  = "((a - b ) + b)";
    string str  = "(";  - incorrect



extra
handle these - or we are considering there will be pairs
  string str  = "(";


*/
