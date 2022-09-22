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

          cout<<"Parent set :"<<endl;
          for(auto it : s) cout<<it<<" ";
          cout<<endl ;

          s1 = s ;
          cout<<"Using equql operation _set-01 :"<<endl;
          for(auto it : s) cout<<it<<" ";
          cout<<endl ;
          return 0;
}