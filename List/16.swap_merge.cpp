#include<bits/stdc++.h>
using namespace std ;

int main(){
          int num,item;
          list < int > li1 ;
          list <int> li2 ;

          //list 1
          cout<<"Enter the number of item__list-1 :  "<<endl;
          cin>>num;

          while(num--){
                    cin >> item ;
                    li1.push_back(item);
          }
          cout<<"Normal :"<<endl;
          for(auto it : li1){
                    cout<<it<<" ";
          }cout<<endl;

          //list 2
          cout<<"Enter the number of item__list-2 :  "<<endl;
          cin>>num;

          while(num--){
                    cin >> item ;
                    li2.push_back(item);
          }
          cout<<"Normal :"<<endl;
          for(auto it : li2){
                    cout<<it<<" ";
          }
          cout<<endl;

          //swap two list 
          li1.swap(li2);

          cout<<"After swap :"<<endl ;
          cout<<"list_01"<<endl;
          for(auto it : li1) cout<< it <<" ";
          cout<<endl<<"list_02:"<<endl;
          for(auto it : li2) cout<<it<<" ";

          li1.merge(li2);
          cout<<endl << "merge list :"<<endl;
          for(auto it : li1){
                    cout<<it<<" ";
          }
          cout<<endl;
          return 0;
}