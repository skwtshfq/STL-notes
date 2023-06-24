/*
1. sort hobe but unique hobe na
2. count korle jotobar takbe totbar e pawa jabe as simple as that 
3. erase korle sob gulo ek sathe hye jabe. tobe akta kore o kroa jabe
*/
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
multiset<int> s;
s.insert(45);
s.insert(43);
s.insert(45);
s.insert(23);
s.insert(24);
s.insert(23);
// cout<<s.size()<<endl;
// for ( auto x: s)
// cout<<x<<" ";
/*
aikane count 1 bar asbe na. jotobar takbe totobar e asbe*/
// cout<<s.count(23)<<endl;
// s.erase(23);                     // aikane sob 23 e delete hoye jabe
// auto it= s.find(1);                // aivabe ekta dlt kora jai. aikane first je 1 pabe tar adrs return kore
// s.erase(it); 



return 0;
}