#include<bits/stdc++.h>
using namespace std;
int main(){
          int num , item ;
          queue < int > q ;

          cin >> num ;

          while (num--)
          {
                    cin >> item;
                    q.push(item);
          }

          while (!q.empty())
          {
                  cout<<q.front()<<" ";
                  q.pop();  
          }
          cout<<endl;
          if(q.empty())
                    cout<<"Empty !!"<<endl ;
          else
                    cout<<"Not empty !! " <<endl; 
          return 0;
}