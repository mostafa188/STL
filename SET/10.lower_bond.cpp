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
          it = s.lower_bound(item);

          if(it == s.end()){
                    cout<<"lower bond number is graeter than large number !!"<<endl;
          }
          else
                    cout<<"lower bond number of "<< item <<" is "<<*it<<endl;
          return 0;
}