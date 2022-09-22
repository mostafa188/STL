#include<bits/stdc++.h>
using namespace std;
int main(){
          int num , item;
          set <int> s,s1;

          cin>> num;
          for(int i=0;i<num;i++){
                    cin>>item;
                    s.insert(item);
          }
          cout<<"set_01 :"<<endl;
          for(auto it : s) cout<<it<<" ";
          cout<<endl ;

         cin>> num;
          for(int i=0;i<num;i++){
                    cin>>item;
                    s1.insert(item);
          }

          cout<<"set_02 :"<<endl;
          for(auto it : s1) cout<<it<<" ";
          cout<<endl ;
          cout<<endl<<endl<<"After swap :"<<endl;
          s.swap(s1);
          cout<<"set_01 :"<<endl;
          for(auto it : s) cout<<it<<" ";
          cout<<endl ;
          cout<<"set_02 :"<<endl;
          for(auto it : s1) cout<<it<<" ";
          cout<<endl ;


}