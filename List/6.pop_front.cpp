#include<bits/stdc++.h>
using namespace std;
int main(){
          int num ,item;
          list <int > li;

          cin >> num;

          while(num--){
                    cin>>item;
                    li.push_back(item);
          }

          cout<<"Print this ite, :"<<endl;
          for(auto it : li){
                    cout<<it<<" ";
          }
          cout<<endl;
          cout<<"pop_back 3 items :"<<endl;
          for(int i=0 ; i<3;i++){
                    li.pop_front();
          }

          for(auto it : li){
                    cout<<it<<" ";
          }
          
}