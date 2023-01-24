#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    string s,t;
    map<string,int> m;
    multimap<int,string> n;
    getline(cin,s);
    stringstream st(s);
    while (st>>t)
    {
        if(m.find(t)==m.end()){
            m[t]=1;
        }
        else{
            m[t]++;
        }
    }
    map<string,int>::iterator it;
    for ( it = m.begin(); it != m.end(); it++)
    {
        n.insert(make_pair((*it).second,(*it).first));
    }
    map<int,string>::reverse_iterator it1;
    
    for ( it1 = n.rbegin(); it1 != n.rend(); it1++)
    {
        cout<<(*it1).second<<" : "<<(*it1).first<<endl;
    }
    
}
