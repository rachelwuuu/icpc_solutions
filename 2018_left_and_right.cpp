#include<iostream>
#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
#include<iomanip>
#include <algorithm>

using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	string s;
	getline(cin,s);
	vector<int> arr;
	stack<char> st;
	int pos=0;
	int cnt=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='R'){
	        cnt=0;
	        while(!st.empty()){
	            if(st.top()=='R') break;
	            st.pop();
	            cnt++;
	        }
	        pos+=cnt+1;
	        arr.push_back(pos);
	        st.push('R');
	    }else if(s[i]=='L'){//L填坑
	        st.push('L');
	    }
	}
	cnt=0;
	while(!st.empty()){
	    if(st.top()=='R') break;
	    st.pop();
	    cnt++;
	}
    pos+=cnt+1;
    arr.push_back(pos);
    int j=1;
    vector<int> ans;
    ans.push_back(arr[0]);
    int r=arr[0];
    for(int i=0; i<s.size();i++){
        if(s[i]=='R'){
            r=arr[j];
            ans.push_back(arr[j]);
            j++;
        }else{
            
            r--;
            ans.push_back(r);
        }
    }
	for(int i=0;i<ans.size();i++){
	    cout<<ans[i]<<endl;
	}
	return 0;
}

