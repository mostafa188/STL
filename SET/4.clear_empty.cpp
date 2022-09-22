#include<bits/stdc++.h>
using namespace std ;
int main(){
          int num,item;

          //decreaseing order 
          set<int , greater<int> >s;

          /*increasing order 
             set < int > s ;
          */
         
          cin>>num;
          for(int i=0;i<num;i++){
                    cin >>item;
                    s.insert(item);
          }
          cout<<"Items :"<<endl;
          for(auto it : s) cout<<it<<" ";
          cout <<endl;
          s.clear();
          if(s.empty())
                    cout<<"Empty :)"<<endl;
          else
                    cout <<"Not empty :("<<endl;
          return 0;
}