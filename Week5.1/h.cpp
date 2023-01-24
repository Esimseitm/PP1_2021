#include <iostream>

using namespace std;

int main(){
	string s;
	cin>>s;
	int a[10];
	int m;
	for(int i=0; i<10; i++)a[i]=0;
	for(int i=0; i<s.size();i++){
		a[int(s[i])-48]+=1;
	}
	for(int i=0; i<10; i++){
		if(a[i]!=0){
			m=a[i];
		}
	}
	for(int i=0; i<10; i++){
		if(a[i]!=m && a[i]!=0){
			cout<<"NO";
			m=44;
			break;
		}
	}
	if(m!=44)cout<<"YES";	
}