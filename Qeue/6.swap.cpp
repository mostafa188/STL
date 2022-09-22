#include<bits/stdc++.h>
using namespace std;
int main(){
          int num , item ;
          queue < int > q1,q2 ;

          cout<<"Enter item number of queue-01:"<<endl;
          cin >> num ;

          while (num--)
          {
                    cin >> item;
                    q1.push(item);
          }

          cout<<"Enter item number of queue-02:"<<endl;
          cin>>num;
          while(num--){
                    cin >> item ;
                    q2.push(item);
          }

          swap(q1,q2);

          cout<<"1st queue-01:"<<endl;
          //for(int i = q1.front(); i != q1.empty();i++){
          while(!q1.empty()){
                    cout<<q1.front()<<" " ;
                    q1.pop();
          }
          cout<<endl;
           cout<<"1st queue-0২:"<<endl;
          //for(int i = q2.front(); i != q2.empty();i++){
          while(!q2.empty()){
                    cout<<q2.front()<<" " ;
                    q2.pop();
          }
          return 0;
}