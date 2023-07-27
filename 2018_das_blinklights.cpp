#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
#include<iomanip>
#include <algorithm>

using namespace std;
int main(){
	int f, s, n;
	cin>>f>>s>>n;
	bool flag=0;
	for(int i=1; i<=n; i++){
	    if(i%f==0&&i%s==0){
	        cout<<"yes";
	        flag=1;
	        break;
	    }
	}
	if(!flag)cout<<"no";
	return 0;
}

