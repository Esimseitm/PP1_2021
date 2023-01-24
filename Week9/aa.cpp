#include <iostream>
#include <map>
#include <set>

using namespace std;
int main(){
	int n;
	cin>>n;
	map<string, string> mp;
	set<string> st;
	for(int i=0; i<n; i++){
		string a,b;
		cin>>a>>b;
		mp[a]=b;
		st.insert(a);
	}
	
	int m;
	cin>>m;
	for(int i=0; i<m; i++){
		string a,b;
		cin>>a>>b;
		if(st.find(a)==st.end())cout<<"login error"<<endl;
		else if(mp[a]!=b)cout<<"password error"<<endl;
		else cout<<"correct password"<<endl;
	}
}
