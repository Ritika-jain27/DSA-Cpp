#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
   priority_queue<int, vector<int>> pq; // Max-heap
   pq.push(2);
   pq.push(3);
   pq.push(1);

   cout << pq.top() << endl;
   ;

   priority_queue<int, vector<int>, greater<int>> pqm; // Min heap
   pqm.push(2);
   pqm.push(3);
   pqm.push(1);

   cout << pqm.top() << endl;

   return 0;
}