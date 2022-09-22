#include<bits/stdc++.h>
using namespace std ;

int main(){
          int num , item ;
          priority_queue <int ,vector<int>,greater<int> > pq1,pq2 ;

          cout <<" number of item of pq-1 :"<<endl;
          cin >> num;
          for(int i = 0;i<num;i++){
                    cin >> item ;
                    pq1.push(item);
          }

          cout<<"Number of item pq-02 :"<<endl;
          cin>> num ;
          for(int i=0;i<num;i++){
                    cin >>item ;
                    pq2.push(item);
          }

          pq1.swap(pq2);

          cout<<"After swaping : "<<endl;
          cout <<"pq_01 :"<<endl;
          while (!pq1.empty()){
                    cout << pq1.top()<<" ";
                    pq1.pop();
          }

          cout<<endl<<"pq_02 :"<<endl;
          while (!pq2.empty()){
                    cout << pq2.top()<<" ";
                    pq2.pop();
          }
          
          return 0; 
}