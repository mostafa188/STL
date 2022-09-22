#include<bits/stdc++.h>
using namespace std ;
int main(){
          int num,item;
          vector<int>v;
          vector<int>::iterator it;

          cin>>num ;
          while(num--){
                    cin>>item;
                    v.push_back(item);
          }


          cout<<"Before erase : "<<endl;
          for(auto it : v){
                    cout<<it<<" ";
          }
          cout<<endl;


          
          v.erase(v.begin()+1);
          v.erase(v.begin()+3);
         

          cout<<"after erase : "<<endl;
          for(int i= 0 ; i< v.size();i++){
                    cout<<v.at(i)<<" ";
          }
          cout<<endl;


          cout<<"Full erase :"<<endl;
          v.erase(v.begin(),v.end());
          for(auto it : v){
                    cout<<it<<" ";
          }

          if(v.empty()){
                    cout<<"Enpty !!"<<endl;
          }
          return 0 ;
}