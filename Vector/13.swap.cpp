#include<bits/stdc++.h>
using namespace std;
int main(){
          int num,item;
          vector<int>v1;
          vector<int>v2;

          vector<int>::iterator iv1;
          vector<int>::iterator iv2;

          cout <<"Enter item number :"<<endl;
          cin >> num;

          cout<<"enter Vector_01 items : "<<endl;
          while (num--){
                    cin>>item;
                    v1.push_back(item);
          }
          
          cout <<"Enter item number :"<<endl;
          cin>>num ;
          cout<<"enter Vector_02 items : "<<endl;
          while (num--){
                    cin>>item;
                    v2.push_back(item);
          }


          cout<<"Vector__01 :"<<endl;
          for(auto iv1 : v1){
                    cout<<iv1<< " ";
          }
          cout<<endl;

          cout<<"Vector__02 :"<<endl;
          for(auto iv2 : v2){
                    cout<<iv2<<" ";
          }
          swap(v1,v2);
          
          cout<<"After swapping :\n"<<endl;
          cout<<"Vector__01 :"<<endl;
          for(auto iv1 : v1){
                    cout<<iv1<< " ";
          }
          cout<<endl;

          cout<<"Vector__02 :"<<endl;
          for(auto iv2 : v2){
                    cout<<iv2<<" ";
          }
          cout<<endl;
          return 0 ;
}