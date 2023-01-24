#include <iostream>

using namespace std;

int main() {
    //cout << "size of short: " << sizeof(short) << endl;
	//cout << "size of int: " << sizeof(int) << endl;
	//cout << "size of float: " << sizeof(float) << endl; // 4
	//cout << "size of double: " << sizeof(double) << "\n"; // 8
	//cout << "size of char: " << sizeof(char) << "\n";
	//cout << "size of bool: " << sizeof(bool) << endl;
    //double a, b;
    //cin >> a >> b;
    //cout << a + b << endl;
    //char ch = 'a'; // 98 // b = 99 // c = 100
    //char ch = 'A'; // 65
    //char ch = '0'; // 48
   //char ch = '$'; //
    //char ch = ' '; // 32
    char ch;
    cin >> ch;
    cout << ch << " " << int(ch) << endl;
    cout << char(99) << endl;
    string s1, s2;
    s1 = "hello";
    s2 = "World!";
    string s3;
    s3 = s1 + s2 ;
    cout << s3 << endl;

    return 0;
}