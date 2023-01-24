#include <iostream>

using namespace std;

int main(){
	int a[100000];
	int b=0;
	for(int i=0; i<100000; i++){
		cin>>a[i];
		b+=a[i];
		if(a[i]==a[i+1])break;
	}
	cout<<b;
}
