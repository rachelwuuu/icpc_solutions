#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
#include<iomanip>
#include <algorithm>

using namespace std;
int main(){
	string s;
	getline(cin,s);
	vector<int> mp(99,0);
	string ans;
	if(s[0]=='D'){
    	for(int i=2;i<s.size();i++){
    	    char c=s[i];
    	    int n=s[i+1]-'0';
    	    i++;
    	    
    	    ans.push_back(c);
    	    for(int j=1;j<n;j++){
    	        ans.push_back(c);
    	    }
    	}
	}else if(s[0]=='E'){
	    char c=s[2];
	    int cnt=1;
	    for(int i=3;i<s.size();i++){
    	    if(s[i]==s[i-1]){
    	        cnt++;
    	    }else{
    	        ans.push_back(c);
    	        ans.push_back(cnt+'0');
    	        c=s[i];
    	        cnt=1;
    	    }
    	}
	    ans.push_back(c);
	    ans.push_back(cnt+'0');
	}
	
	
	cout<<ans;
	return 0;
}

