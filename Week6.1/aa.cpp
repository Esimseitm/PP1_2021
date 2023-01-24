#include <iostream>

using namespace std;

int mm(int a){
	int d[a];
	for(int i=0; i<a; i++)cin>>d[i];
	int b,s=0;
	cin>>b;
	for(int i=0 ;i<a; i++){
		if(d[i]==b){
			cout<<"Yes";
			s=1;
			break;
		}
	}
	if(s==0)cout<<"No";
}

int main(){
	int a;
	cin>>a;
	mm(a);
}
