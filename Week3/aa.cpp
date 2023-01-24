#include <iostream>

using namespace std;

int cap(string a){
	for(int i=0; i<a.size(); i++){
		if((i+1)%2)cout<<char(a[i]-int('a')+int('A'));
		else cout<<a[i];
	}
}

int main(){
	string s;
	cin>>s;
	cap(s);
}
