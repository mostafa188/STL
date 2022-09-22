#include<bits/stdc++.h>
using namespace std ;
int main(){
          int num , item ;
          priority_queue<int ,vector<int> , greater<int> > pq;

          cin >> num ;
          while (num--)
          {
                   cin >> item ;
                   pq.push(item);
          }

          while (!pq.empty())
          {
                    cout << pq.top()<<" ";
                    pq.pop();
          }
          cout << endl ;
          
          return 0 ;
}