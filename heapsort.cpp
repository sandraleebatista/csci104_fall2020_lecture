#include <iostream> 
#include <queue> 
#include <stdlib.h>
using namespace std; 

int main () 
{
  priority_queue<int, vector<int>, greater<int>> pq;

  for (int i = 0; i < 10 ; i++)
  {
      int k = rand()%1000;
      pq.push(k);
  }
  
  cout<< "Sorting elements..." << endl;
  while (!pq.empty()) { 
    cout<< " " << pq.top();
    pq.pop(); 
  } 
    
    
}
