#include <iostream>

using namespace std;

int main(){
	int n,a,g=1;
	cin>>n;
	a=n;
	//if(n%2!=0)a=n-1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=a*2; j++){
			if(j==a-i+1){
				for(int h=1; h<=g; h++){
					cout<<"*";
					j++;
				}
			}
			else cout<<".";
		}
		g=g+2;
		cout<<endl;
	}
}
