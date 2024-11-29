
#include <iostream>
#include <deque>
using namespace std;

void printFirstNeg_winK(int *arr, int n, int k){
  deque <int> dq;

  // process first k el of arr
  for(int index =0;index<k;index++){ //0 to k-1
    int el = arr[index];
    if(el < 0){
      dq.push_back(index);  //push index of first neg el of arr 
    }
  }

  // process remaining el of array 
  for(int index = k; index < n; index++){ // k to n

      //print prev window output
      if(dq.empty()){
        cout<< "0"  <<endl;  //- no ndeg no in wind - so dq empty
      }else{
        cout << arr[dq.front()] << " ";  // - otherwise print ELEMENT IN ARR AT dq.front index
      }

      // REMOVAL - remove if dq.front not in current window - 
      // check if dq.front is still in current win or not 
      if(index - dq.front() >= k){
        dq.pop_front();
      }

      // ADDITION
      if(arr[index] < 0){
        dq.push_back(index);
      }
  }
  // print last node left
      if(dq.empty()){
        cout<< "0"  <<endl;  
      }else{
        cout << arr[dq.front()] << " ";  
      }


}

int main() {
  cout << "1.PRINT FIRST NEGATIVE ELEMENT WITHIN K WINDOW SIZE OF ARRAY" << endl;

  // int arr[]= {2,-5,4,-1,-2,0,5};
  // int size =  7;
  // int k = 3;

  int arr[]= {-2,0,4,-1,-5,6};
  int size =  6;
  int k = 3;

  
  printFirstNeg_winK(arr, size,k);

  


  return 0;
}

/*
 int arr[]= {2,-5,4,-1,-2,0,5};
  int size =  7;
  int k = 3;

10->20->30->40->50->60->
Output
1.PRINT FIRST NEGATIVE ELEMENT WITHIN K WINDOW SIZE OF ARRAY
-5 -5 -1 -1 -2 

===========================================================
int arr[]= {-2,0,4,-1,-5,6};
  int size =  6;
  int k = 3;

  1.PRINT FIRST NEGATIVE ELEMENT WITHIN K WINDOW SIZE OF ARRAY
-2 -1 -1 -1 

*/
