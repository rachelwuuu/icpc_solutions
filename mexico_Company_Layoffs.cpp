#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
#include<iomanip>
#include <algorithm>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin>>n>>m;
	vector<long long> arr;
	for(int i=0; i<n;i++){
	    long long c;
	    cin>>c;
	    arr.push_back(c);
	}
	vector<long long> ans;
	sort(arr.begin(),arr.end());
	
	int last=arr.size();
	long long first_sum=0;
	int prev_last=0;
	for(int i=0; i<m;i++){
	    long long c;
	    cin>>c;
	    
	    auto it=upper_bound(arr.begin(), arr.end(), c-1);
	    last = it-arr.begin();
	    if(i==0){
    	    for(int j=0; j<last;j++){
    	        first_sum+=arr[j];
    	    }
	    }else{
	        
	        for(int j=last;j<prev_last;j++){
	            first_sum-=arr[j];
	        }
	    }
	    long long sum=first_sum+c*(arr.size()-last);
	    prev_last=last;
	    ans.push_back(sum);
	    
	}
	for(int i=0; i<ans.size();i++){
	    cout<<ans[i]<<endl;
	}
	return 0;
}

