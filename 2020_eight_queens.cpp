#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>

using namespace std;
bool dfs(int i, int j, pair<int, int> dir, vector<vector<int>> m){
    if(i<0||i>=8||j<0||j>=8) return true;
    if(m[i][j]==1) return false;
    return dfs(i+dir.first, j+dir.second, dir, m);
}
int main(){
    int cnt=0;
    int flag=1;
    vector<vector<int>> m(8,vector<int>(8));
	for(int i=0;i<8;i++){
	    for(int j=0; j<8;j++){
	        char c;
	        cin>>c;
	        char c1= '.';
	        char c2='*';
	        if(c==c1) m[i][j]=0;
	        if(c==c2) {
	            m[i][j]=1;
	            cnt++;
	        }
	    }
	}
	if(cnt!=8) flag=0;
	bool validQueen;
	vector<pair<int,int>> dir={{1,1}, {1,0},{0,1},{-1,0},{-1,-1},{0,-1},{-1,1},{1,-1}};
	for(int i=0;i<m.size();i++){
	    for(int j=0; j<m[0].size();j++){
	        if(m[i][j]==1){
	            validQueen=true;
	            for(int k=0; k<dir.size();k++){
	                validQueen=(validQueen&&dfs(i+dir[k].first, j+dir[k].second, dir[k], m));
	            }
	            if(!validQueen){
	                flag=0;
	                break;
	            }
	        }
	    }
	    if(!validQueen) break;
	}
	if(flag){
	    cout<<"valid";
	}else{
	    cout<<"invalid";
	}
	return 0;
}
