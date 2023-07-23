//My own solution
#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>

using namespace std;
int main(){
    int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
	    int c;
	    cin>>c;
	    arr.push_back(c);
	}
	int l=arr.size()-1;
	int j=0;
	int flag=0;
	for(int i=1;i<arr[l];i++){
	    
	    if(i==arr[j]) {
	        j++;
	        continue;
	        
	    }
	    flag=1;
	    cout<<i<<endl;
	}
	if(!flag) cout<<"good job";
	return 0;
}

