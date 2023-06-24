
/*
1. p.first, p.second
2. sort(p.begin(),p.end());
3. unique ( use by vector);
4. p=make_pair(4,5);   first b
baki gula amar sikhe aschi */
#include<bits/stdc++.h>
using namespace std;

// a function for sorting//

bool cmp(const pair<int,int> &a, const pair<int ,int> &b)
{
    if(a.first>b.first) 
    return 1;
    else if(a.first==b.first)
    return(a.second<b.second);
    return 0;
}
using namespace std;
int main()
 {
    // pair<string, int> sk,sk2;
    // sk.first= "sakhawat";
    // sk.second=34;
    // cout<<sk.first<<" "<<sk.second;

//  pair<int, vector<int>> ab;
//  ab.first=34;
//  ab.second={2,3,4,5};
//  cout<<ab.first<<endl;
//  for( auto it: ab.second)
//  cout<<it<< " ";
// sk2=make_pair("name",21);
// sk2.second++;                   // mane hocche normal variable er moto korei use kora jai
                                   // amra chaile eikane cin use kora imput o nite partam
// cout<<sk2.first<<" "<<sk2.second; 

// pair<int,vector<int>> p1;
// p1={2,{3,4,5}};                 // evabe o declare kora jai
// cout<<p1.first<<" "<<p1.second.size()<<endl;

// pair<int, int> a,b,c;
// a={3,4};
// b={1,5};
// if(a<b)                        // first a protom ta niye deal kore same hole 2nd ta
// cout<<"YES";
// else
// cout<<"NO";

// c=max(a,b); // tar mane aikane copy kora jai . abar max ba min o kaj kore  
// cout<<c.first<<endl;


// vector<pair<int ,int>> vp;
// vp.push_back({4,3});
// vp.push_back({2,3});
// vp.push_back({1,3});
// vp.push_back({5,3});
// vp.push_back({6,3});
// vp.push_back({3,3});
// sort(vp.begin(),vp.end()); 
// // jodi boro to teke chuto kori tahle
// sort(vp.rbegin(),vp.rend());            //vector sort kora  r pair sort kora command kintu alada//
// for( auto it: vp)
// cout<<it.first<<" "<<it.second<<endl;    // one by one:  v[i].first and v[i].second

//pair of array

// pair<int,int> skw[]={{2,3}, {4,5},{1,4}};
// sort(skw,skw+3);                            // aikane array er moto //
// for( auto x: skw)
// cout<<x.first<<" "<<x.second<<endl;

// pair<int,int> p[3];                 // never like this p(n);


// for( int i=0;i<3;i++)
// cin>>p[i].first>>p[i].second;
// for( auto x: p)
// cout<<x.first<<" "<<x.second<<endl;

// vector<pair<string,int>> v;
// v.push_back({"sakhawat",21});
// v.push_back({"saikat",16});
// v.push_back({"abul",40});
// sort(v.begin(),v.end());
// for( auto m: v)
// cout<<m.first<<" "<<m.second<<endl;

// vector teke unique ber korar age agulo ke sort kore nite hobe
//  vector<int> v={2,3,4,3,4,3,5,6,7,8};
//  sort(v.begin(),v.end());
//  int z=unique(v.begin(),v.end())-v.begin();
    

//  for( auto x:v)
//  cout<<x<<" ";              // unique korar por ai way te print korra jabe na, for loop lagiye print korte hobe
// cout<<v.size();             // = 10 asbe // karon hocche unique use korle baki gula sesh hoi na . piche takhe

//    vector<pair<int,int>> player;
//    player.push_back({14,455});
//    player.push_back({12,456});
//    player.push_back({10,456});  
//    player.push_back({9,456});
//    player.push_back({12,45});
//    player.push_back({10,45});

// sort(player.begin() ,player.end(),cmp);
// for( auto it: player)
// cout<<it.first<<" "<<it.second<<endl;
// another way of do this task is : input newar somoi amra prottek bar first element ke -1
// dara gun kore nibo..tahle chuto ta amni amni age takbe...
// int n; cin>>n;
// vector<pair<int ,int>> x(n);
// for( int i=0;i<n;i++)
// {
//     cin>>x[i].first>>x[i].second;
//     x[i].first*=-1;
// }
// sort(x.begin(),x.end());
// for( auto m: x)
// {
//     cout<<m.first*-1<<" "<<m.second<<endl;
// }


    return 0;
}