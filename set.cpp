/*
1. s.begin(), s.end()
2. s.insert(value);
3. s. cout(value) // ache ki na dekar jonno
4. s.erase(value);
5. set<int, greater<int>> s;
6. unordered_set<int> s;
7.cout<*(++s.begin());   only this work none of other

*/
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize(); // access, erase sob kichur complexity log2(n)


// set<int> s;
// s={1,3,2,3,5,4,5,6,4,0};                  // uniqe rakhe. o sorted takhe.
// cout<<s.size()<<endl;
// for ( auto x: s)
// cout<<x<<" ";
// cout<<endl;
// set<int> :: iterator x;
// for( x=s.begin();x!=s.end();x++)
//     cout<<*x<<" ";
    // s.clear();
    // cout<<s.empty();
    // s.insert(2);
    // s.insert(3);
    // s.insert(1);
    // s.insert(2);
    // s.insert(0);
    // s.insert(3);
    // cout<<s.size()<<endl;
    // for( auto x: s )
    // cout<<x<<" ";
    // cout<<s.count(3)<<endl;      // ache ki nai aita buja jai. 0 or 1 return kore.
    // cout<<*s.begin()<<endl;     // ekdom samner element print hobe. tobe aikane s.begin()+x agula kora jabe na
    // cout<<*s.end()<<endl;
    // cout<<*(--s.end())<<endl;  // aita o sesher element e print kore
    // s.erase(3);    // aikane kintu index na. 3 diyechi mane 3 e erase hye jabe.
    // s.erase(s.begin()); 
    // s.erase(s.end());        // ekdom samne or ekdom pichoner ta o delete kora jabe

    // set<string> s;
    // s.insert("sakhawat");
    // s.insert("saikat");
    // s.insert("sufia");
    // s.insert("abul");
    // s.insert("saikat");
    // s.insert("sakhawat");
    // cout<<s.size()<<endl;    // 4 asbe . 
    // for ( auto x: s)
    // cout<<x<<endl;


    // set<pair<int,int>> s;
    // s.insert({3,4});
    // s.insert({5,3});
    // s.insert({3,4});
    // s.insert({5,3});
    // s.insert({5,3});
    // s.insert({4,5});
    // cout<<s.size()<<endl;
    // for( auto x: s)
    // cout<<x.first<<" "<<x.second<<endl;

    // set<int, greater<int>> s;                      // aita to r sort function na . tai () dwa lage na
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // for( auto x: s)
    // cout<<x<<endl;

    // another
    // set<pair<int, int>, greater<pair<int,int>>>s ; // eivabe korte hobe. 
    // set<map< int, string> , greater<map<int, string>>> mp;
    // set<vector<int> , greater<vector<int>>> vc; 
    // map<int,string> c;
    // c[34]="sakhawat";
    // mp.insert(c);
    // unordered_set<int> s;                    // unique hobe but sort korbe na
    // s.insert(4);
    // s.insert(5);
    // s.insert(1);
    // s.insert(2);
    // for( auto x: s)         // agula print korar somoi .entry jmne dwa hoisilo tar olta print hobe.
    // cout<<x<<" ";           // like emon 2 1 5 4
    

return 0;
}