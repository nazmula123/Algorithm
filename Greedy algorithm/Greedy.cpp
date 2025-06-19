#include<bits/stdc++.h>
using namespace std;

void noteCount(vector<int>v,int amount){
int count;
vector<int>temp;
for(int i=v.size()-1;i>=0;i--){


 //if(v[i]>=amount){

    cout<< amount%v[i]<<endl;
 //}
}
int sum=0;
for(int i=0;i<temp.size();i++){
  sum+=v[i];
}
}
int main(){

vector<int>v;
cout<<"Enter Input Array: "<<endl;
int t;

for(int i=0;i<4;i++){

cin>>t;
v.push_back(t);
}

sort(v.begin(), v.end());

noteCount(v,78);


return 0;
}
