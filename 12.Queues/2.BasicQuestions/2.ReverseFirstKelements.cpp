
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverseFirstKelements(queue<int> &q, int k){
  stack <int> st;
  int n = q.size();

  // edge case - k - 0, or more than n
  if( k > n || k == 0){
    return;
  }


  
  // insert  first k queue elements in stack
  for(int i=0; i < k;i++){
    int frontelement = q.front();
    q.pop();
    st.push(frontelement);
  }

  // insert back those k elements from st to q  , reverser order
  while(!st.empty()){
    int topelement = st.top();
    st.pop();
    q.push(topelement);
  }

  // arrange rem n-k el of q - by poping from front and pushing to back
  for(int i=0;i< n-k; i++){
    int frontelement = q.front();
    q.pop();

    q.push(frontelement);
  }
}

int main() {
  cout << "1.REVERSE first k elements of queue" << endl;

  queue <int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);

int k = 3;
reverseFirstKelements(q, k);

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
Output - for k - 3, 4, 6
1.REVERSE first k elements of queue
PRINT QUEUE : 
30->20->10->40->50->60->
40->30->20->10->50->60->
60->50->40->30->20->10->

check for k - 0 , 1, k>n ie 10
1.REVERSE first k elements of queue
PRINT QUEUE : 
10->20->30->40->50->60->



*/
