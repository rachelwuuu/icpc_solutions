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
    vector<int> arr;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int prev=0;
        int flag=0;
        for(int j=0;j<m;j++){
          
            int c;
            cin>>c;
            if(flag) continue;
            if(j!=0){
                if(prev+1!=c){
                    arr.push_back(j+1);
                    flag=1;
                }
            }
            prev=c;
        }
    }
    
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
	return 0;
}




