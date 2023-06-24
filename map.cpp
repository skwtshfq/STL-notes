/*
1. mp.at(2);             // 2 is index
2. mp.clear();
3. mp.empty();
4. mp.size();
5. mp.find(2);
6. mp.count(2);          // 0 or 1 pawa jai.
7. mp.find();           na pele mp.end() return kore
8. mp.insert({"sakhawat",23});
9. mp.upper_bound(3), mp.lower_bound(4);
10. mp.erase(x);         x=index*/
#include<iostream>
#include<map>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    map<int,int> sk; // first ta holo index or base , 2nd ta value//
    sk.insert({1,55});
    sk.insert({2,56});
    sk.insert({3,90});
    sk.insert({5,58});
    // cout<<sk[1]<<endl;
    // sk[5]=455;
    // cout<<sk[5]<<endl;
    // also can print by using at//
    // cout<<sk.at(3)<<endl;
    // lets use iterator//
    // map<int,int> :: iterator it;
    // for(it=sk.begin();it!=sk.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // another syle of using iterator : auto iterator//
    // cout<<"my observe"<<endl;
    // for( auto it: sk)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;// aikane -> er bodole dot use kora lage. auto te.//
    // }

    // size holo koita ache, r max size holo koita rakte pare//
    // cout<<sk.size()<<endl<<sk.max_size()<<endl;

    // sk.clear();
    // cout<<sk.empty()<<endl;


    // count use kore 0 or 1 pawa jai. argument ja dwa hoi oi index a kichu ache naki nai aita buja jai//
    // cout<<sk.count(8); = 0 asbe 

    // find er kaj r count er kaj same. aikane jodi na pawa jai tahle sk.end() return kore..
    // if(sk.find(1)!=sk.end())
    // cout<<"YES"<<endl;
    // if(sk.find(2)==sk.end())
    // cout<<"NO";
    // aita mainly end return kore otoba kore na//
    // map<int,int> :: iterator x;
    // x=sk.lower_bound(4);
    // cout<<(*x).first<<" "<<(*x).second<<endl;

    // map<int,int> :: iterator x;
    // x=sk.upper_bound(1);
    // cout<<(*x).first<<" "<<(*x).second<<endl;


    // map<int,int> :: iterator x;
    // x=sk.lower_bound(4);
    // cout<<(*x).first<<" "<<(*x).second<<endl;
    // aikane ja dwa hobe takhe point korbe..r seta  na takle tar uporer ta korbe. 
    // upper bound er somoi sudu jeta dibe seita er cheye boro takhe point korbe.
    

    // sk.erase(1);
    // cout<<sk[1];

// map<int,int> mp;
// vector<int> v={4,5,6,9,8};
// for( auto x: v)mp[x]=1;
// for( auto t: mp)cout<<t.first<<" "<<t.second<<endl;


// vector<map<int,int>> mp(5);
// mp[0].insert({4,89});
// mp[0][5]=90;                       // aiken push er chinta bad dite hobe.             
// cout<<mp[0][4]<<" "<<mp[0][5]<<endl; 
// map<int,int> q;                      // jodi ditei hoi tahle eivabe.
// q[34]=43;
// mp.push_back(q);
// cout<<mp[5][34];




    return 0;

}