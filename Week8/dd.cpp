#include <iostream>

using namespace std;

int main(){
  string n;
  cin>>n;
  for(int i=0; i<n.size(); i++){
    if(n[i]=='1' and n[i+1]=='1')i++;
    else cout<<n[i];
  }
}