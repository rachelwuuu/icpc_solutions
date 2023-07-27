#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
#include<iomanip>
#include <algorithm>
#include<math.h>
#include <map>
#include <bits/stdc++.h>
using namespace std;
vector<int> mp={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
int main(){
	int n, m;
	cin>>n>>m;
	cin.ignore();
	map<long long, int> arr;
	for(int i=0; i<n;i++){
	    string s;
	    getline(cin,s);
	    long long nums=0;
	    for(int j=0;j<s.size();j++){
	        nums=mp[s[j]-'a']+nums*10;
	    }
	    if(arr.count(nums)){
	        arr[nums]+=1;
	    }else{
	        arr[nums]=1;
	    }
	    
	}
	vector<int> ans;
	for(int i=0; i<m;i++){
	    string s;
	    getline(cin,s);
	    long long nums=0;
	    for(int j=0;j<s.size();j++){
	        nums=s[j]-'0'+nums*10;
	    }
	    ans.push_back(arr[nums]);
	}
	for(int i=0; i<ans.size();i++){
	    cout<<ans[i]<<endl;
	}
	return 0;
}

