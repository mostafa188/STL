#include<bits/stdc++.h>
using namespace std ;
int main(){
          int num , item ;
          vector<int>v;
          vector<int >::iterator it;

          cin>>num;

          while(num--){
                    cin>>item;
                    v.push_back(item) ;
          }
          
          cout <<"Before using clear function : "<<endl;
          for(auto it : v){
                    cout<<it<<" ";
          }
          cout<<endl;


          v.clear();

          if(v.empty()){
                    cout << "Empty !!"<<endl;
          }else{
                    cout<< "Not empty !!" <<endl;
                    for(auto it : v){
                              cout<<it<<" ";
                    }
          }
          
          return 0;
}