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
	vector<string> mp;
	for(int i=0;i<n;i++){
	    vector<int> arr;
	    
	    string s="";
	    getline(cin, s);
	    vector<int> arr2;
	    vector<int> arr3;
	    string ans="";
	    if(s[0]=='e'){
	        for(int j=2; j<s.size();j++){
	            if(isspace(s[j])){
	                arr.push_back(0);
	            }else{
	                arr.push_back(s[j]-'a'+1);
	            }
	        }
	        int sum=0;
	        int mod=0;
	        for(int j=0; j<arr.size();j++){
	            sum+=arr[j];
	            mod=sum%27;
	            arr2.push_back(mod);
	        }
	        
	        for(int k=0; k<arr2.size();k++){
	            if(arr2[k]==0){
	                ans.push_back(' ');
	            }else{
	                ans.push_back('a'+arr2[k]-1);
	            }
	        }
	    }else if(s[0]=='d'){
	        for(int j=2; j<s.size();j++){
	            if(isspace(s[j])){
	                arr.push_back(0);
	            }else{
	                arr.push_back(s[j]-'a'+1);
	            }
	        }
	        int mod=0;
	        arr3.push_back(arr[0]);
	        int prev=arr[0];
	        int cnt=0;
	        int curr=0;
	        
	        for(int j=1; j<arr.size();j++){
	            if(prev>arr[j]){
	                 cnt++;
	            }
	            curr = arr[j]+cnt*27;
	            prev=arr[j];
	            arr3.push_back(curr);
	        }
	        int num=0;
	        prev=arr3[0];
	        arr2.push_back(prev);
	        for(int j=1;j<arr3.size();j++){
	            
	            num=arr3[j]-prev;
	            arr2.push_back(num);
	            prev=arr3[j];
	        }
	        for(int k=0; k<arr2.size();k++){
	            
	            if(arr2[k]==0){
	                ans.push_back(' ');
	            }else{
	                ans.push_back('a'+arr2[k]-1);
	            }
	        }
	        
	    }
	    mp.push_back(ans);
	}
	
	for(int i=0; i<mp.size();i++){
	    cout<<mp[i]<<endl;
	}
	return 0;
}



