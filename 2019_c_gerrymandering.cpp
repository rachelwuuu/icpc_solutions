#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   vector<pair<int,int>> mp(1001,{0,0});
   long asum=0, bsum=0;
   long sum=0;
   for(int i=0;i<n;i++){
       long c, a, b;
       cin>>c>>a>>b;
       mp[c].first=mp[c].first+a;
       mp[c].second=mp[c].second+b;
       asum+=a;
       bsum+=b;
       sum=sum+a+b;
   }
   double w_a=0;
   double w_b=0;
   for(int i=1;i<=m;i++){
       long dsum=mp[i].first+mp[i].second;
       long w;
       if(mp[i].first>mp[i].second){
           w_b+=mp[i].second;
           w=mp[i].first-floor(dsum/2)-1;
           w_a+=w;
           cout<<"A "<<w<<" "<<mp[i].second<<endl;
       }else{
           w_a+=mp[i].first;
           w=mp[i].second-floor(dsum/2)-1;
           w_b+=w;
           cout<<"B "<<mp[i].first<<" "<<w<<endl;
       }
   }
   float e=abs(w_a-w_b)/sum;
   cout<<setprecision(12);
   cout<<e;
   return 0;
}
