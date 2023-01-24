#include <iostream>

using namespace std;

string f(string s, int i){
	if(i<s.size()/2){
		if(s[i]!=s[s.size()-1-i])return "No";
		else return f(s, i+1);
	}
	else return "Yes";
}

int main(){
	string s;
	cin>>s;
	cout<<f(s, 0);
}
