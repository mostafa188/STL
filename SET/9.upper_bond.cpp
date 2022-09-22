#include<bits/stdc++.h>
using namespace std;
int main(){
          int num , item;
          set <int> s;

          cin>> num;
          for(int i=0;i<num;i++){
                    cin>>item;
                    s.insert(item);
          }

          for(auto it : s) cout<<it<<" ";
          cout<<endl ;

          cin>>item;
          set<int>::iterator it;
          it = s.upper_bound(item);

          if(it == s.end()){
                    cout<<"Upper bond number is graeter than or equal large number !!"<<endl;
          }
          else
                    cout<<"Upper bond number of "<< item <<" is "<<*it<<endl;
          return 0;
}