#include<bits/stdc++.h>
using namespace std;
int main(){
          int num,item,key;
          pair <int ,int >p[10],p1[10];

          //first pair 
          cin >> num;
          for(int i=0 ;i<num;i++){
                    cin>>key>>item;
                    p[i].first = key;
                    p[i].second = item;
          }

          cout <<"Normal pair-01: "<<endl;
          for(int i=0;i<num;i++){
                    cout<<p[i].first<<" "<<p[i].second<<endl;
          }
          cout <<endl;

          //second pair
          cin >> num;
          for(int i=0 ;i<num;i++){
                    cin>>key>>item;
                    p1[i].first = key;
                    p1[i].second = item;
          }

          cout <<"Normal pair-02: "<<endl;
          for(int i=0;i<num;i++){
                    cout<<p1[i].first<<" "<<p1[i].second<<endl;
          }

          if(p <= p1){
                    cout<<"yes"<<endl;
          }else{
                    cout<<"No"<<endl;
          }
          return 0;
}