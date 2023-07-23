#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int w, n;
	cin>>w;
	cin>>n;
	vector<int>width;
	int previous=0;
	int curWidth;
	for(int i=0;i<n;i++){
	    int p;
	    cin>>p;
	    curWidth=p-previous;
	    width.push_back(curWidth);
	    previous=p;
	}
	curWidth=w-previous;
	width.push_back(curWidth);
	vector<int> ans;
	for(int i=0;i<width.size();i++){
	    int sum=0;
	    ans.push_back(width[i]);
	    for(int j=i+1;j<width.size();j++){
	        sum+=width[j];
	        ans.push_back(width[i]+sum);
	    }
	}
	sort(ans.begin(),ans.end());
	ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
	for(int i=0;i<ans.size();i++){
	    cout<<ans[i]<<" ";
	}
	return 0;
}

