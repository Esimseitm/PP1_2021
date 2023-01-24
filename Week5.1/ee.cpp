#include <iostream>

using namespace std;

int main(){
	string a;
	cin>>a;
	int b[10];
	int c;
	for(int i=0; i<10; i++)b[i]=0;
	for(int i=0; i<a.size();i++){
		b[int(a[i])-48]+=1;
	}
	for(int i=0; i<10; i++){
		if(b[i]!=0){
			c=b[i];
		}
	}
	for(int i=0; i<10; i++){
		if(b[i]!=c && b[i]!=0){
			cout<<"NO";
			c=44;
			break;
		}
	}
	if(c!=44)cout<<"YES";	
}
