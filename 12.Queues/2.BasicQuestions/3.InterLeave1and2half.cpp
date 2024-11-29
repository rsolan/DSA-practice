
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void Interleave1and2half(queue <int> &firstq){
  if(firstq.empty()){
    cout<< "empty queue - cant interleaved" <<endl;
    return;
  }

  queue <int> secondq;
  int n = firstq.size();
  // pop first n/2 el of firstq and push into secondq
  for(int i = 0; i < n/2; i++){
    int fronte = firstq.front();
    firstq.pop();
    secondq.push(fronte);
  }

  // now we have 2 queue - firstq and secondq
  // push 1 element from secondq into firstq & push 1 element from firstq into firstq
  // REPEAT

  for(int i = 0;i<n/2;i++){
    int temp2 = secondq.front();
    secondq.pop();
    firstq.push(temp2);

    int temp1 = firstq.front();
    firstq.pop();
    firstq.push(temp1);
  }
}

int main() {
  cout << "1.INTERLEAVE FIRST AND SECOND HALF OF QUEUE ( N = EVEN )" << endl;

  queue <int> q;
  
  

Interleave1and2half(q);

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
1.INTERLEAVE FIRST AND SECOND HALF OF QUEUE ( N = EVEN ) 6
PRINT QUEUE : 
10->40->20->50->30->60->


1.INTERLEAVE FIRST AND SECOND HALF OF QUEUE ( N = EVEN ) 8
PRINT QUEUE : 
10->50->20->60->30->70->40->80->


1.INTERLEAVE FIRST AND SECOND HALF OF QUEUE ( N = EVEN )2
PRINT QUEUE : 
10->20->

1.INTERLEAVE FIRST AND SECOND HALF OF QUEUE ( N = EVEN )4
PRINT QUEUE : 
10->30->20->40->


1.INTERLEAVE FIRST AND SECOND HALF OF QUEUE ( N = EVEN )0
empty queue - cant interleaved
PRINT QUEUE : 


*/
