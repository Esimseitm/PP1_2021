#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,m,d,f=0;
	cin>>n>>m;
	int a[n][m],b[m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<m; i++){
		d=pow(10,9);
		for(int j=0; j<n; j++){
			if(a[j][i]<d)d=a[j][i];
		}
		b[i]=d;
		f+=b[i];
	}
	
	cout<<"coordinates of min elements:"<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(a[j][i]==b[i]){
				cout<<j+1<<";"<<i+1<<endl;
				break;
			}
		}
	}
	cout<<"Their sum:"<<endl;
	cout<<f;
}
