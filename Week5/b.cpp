 #include <iostream>

using namespace std;

int main(){
	string s;
	cin>>s;
	
	for(int i=0; i<s.size();i++){
		int a=int(s[i]);
		if (a > 96) {
			s[i] = char(a-32);
		}
		
	} 
	cout << s;
	return 0;
}
