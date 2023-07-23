
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
	int n;
	cin>>n;
	double ans= ceil(3000.0/n);
	if(ans<15){
	    cout<<ans;
	    
	}else{
	    cout<<"15";
	}
	return 0;
}

