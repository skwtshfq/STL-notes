/* 1. v.push_back();
2.v.size();
3.v.resize();
4.v.clear();
5.v.empty();
6.v.begin();
7.v.end();
8.sort(v.begin(),v.end(),greater<int>());
  sort(v.rbegin,v.rend());
9.reverse(v.begin(),v.end());
10.v.pop_back();
11.v.back();
12.unique(v.begin(),v.end());
13. min_element(v.begin(),v.end()); 
14. max_element(v.begin(),v.end()); ata muloto adress return kre. tai iterator a rakte hobe.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // v.push_back(2);
    // v.push_back(4); 
    // v.push_back(6);
    // v.push_back(45);
    // v[4]=5;  // aivabe o element push kora jai
    // cout<<v.size()<<endl;
    // for( int i=0;i<v.size();i++)
    // cout<<v[i]<<" ";


    // int n;
    // cin>>n;
    // vector<int> v;
    // for( int i=0;i<n;i++)
    // {
    //     int a;
    //     cin>>a;
    //     v.push_back(a);
    // }
    // for( int i=0;i<v.size();i++)
    // cout<<v[i]<<" ";


//     int n;
//    cin>>n;
//    vector<int> v;
//    v.resize(n);                  // vector ke resize na korle seta size a asbe na. either pushback diye nite hobe
//    for( int i=0;i<n;i++)          // size print korar somoi . joto diye resize kora hobe+push kore ja raka hobe toto e asbe
//    cin>>v[i];                     // resize kore size allocate korar pore. v[i] aivabe element newa jabe
//                                   resize korar por jodi push diye element newa hoi tahle oita seshe giye add hobe
//     for( int i=0;i<n;i++)         // vector resize kora ba vector<int> v(n); kora same kotha
//    cout<<v[i]<<" ";
//    cout<<v.size();

    // vector<int> v;
    // v={3,4,6,7};
    // cout<<v.size()<<endl;
    // for( int i=0;i<v.size();i++)
    // cout<<v[i]<<" ";
    // v.clear();                                   // aita full vector ke clear kore dibe
    // v.empty();                                   // aita return korbe 0 or 1
    // v.resize(10);                                // aitar mane holo vector er size hoye gelo 10. tobe amra to 4 ta diyechila
                                                    // tai aikane baki gula  0 hoye jabe 

//   vector<int> v(10,4);                   // aitar mane holo 10 ta element a e 4 asbe
// vector<int> temp;
// temp=v;                                   // copy hoye geche.
// for( auto x: temp)
// cout<<x<<" ";
// vector<int> v={3,4,5,6,7,8,9};
//vector<int> :: iterator balu;
// balu=v.begin();
// for(;balu!=v.end();balu++)
// cout<<*balu<<" ";
//another way
// for(int x: v)                       // auto er bodole aita dile o hoi. auto dile int char string aigula
// cout<<x<<" ";                        // niye chinta  kora lage na. tai auto use kora e valo


// vector<int> v= {4,3,5,3,6,4,8,9,7};
// sort(v.begin()+2,v.end()-1);                // auto gula, for each loop gulate agula pointer na tai * use kora jabe na
// sort(v.begin(),v.end(),greater<int>());
// sort(v.rbegin(),v.rend());                   // 2 tai kaj kore . same kaj e kore
// for ( auto x: v)                          // sort(arr,arr+n) aikane arr+x= x er ag obdi. tai n likle n-1 obdi kaj kore
// cout<<x<<" ";                            // vector er ketre +x surute takle or x teke. r jodi pore -x takhe tahle .....
// reverse(v.begin(),v.end());               // aikane o sort moto baki gula kaj korbe
// for( auto x: v)
// cout<<x<<" ";

// vector<int> vec={ 3,4,5,6,7,8,9};
// cout<<vec.back()<<endl;                // 9 asbe
// vec.pop_back();                        // ekdom last element mane 9 delete hye jabe
// cout<<*vec.begin()<<endl;                     // v.begin() and v.end() agula hocche pointer. * na dile value asbe na
// vec.erase(vec.begin());                     // erase er argument hisebe pointer dewa hoyeche
// vec.erase(vec.begin()+2);                    // erase korle o(n) hobe karon hocche..sob gular index change hoi
// for( auto x: vec)                            // er cheye valo pop kora. r jodi samne teke kichu erase kora lage tahle reverse kore newa valo
// cout<<x<<" ";



vector<int> sk;
sk={3,4,4,2,0,1,8,7,6,3,4,2,5,6,1,3,6,4,7,8};
// sort(sk.begin(),sk.end());                   // unique korar age sort korte hobe. unique korar pore age unique gula 
// unique(sk.begin(),sk.end());                  // ase. er pore baki gula ase. overall size ager ta e takhe. 
// int size=unique(sk.begin(),sk.end())-sk.begin(); // ai size mane hocche koita unique. aita use kore print korle just unique gula e ber hobe
// for( auto x: sk)
// cout<<x<<" ";                  // age unique pore baki gulo print hobe

// for( int i=0;i<size;i++)            // be ware size korar somoi unique ekbar use korle age kichu korar drkr nai. line 89
// cout<<sk[i]<<' ';
// vector<int> :: iterator it=  max_element(sk.begin(),sk.end());
// cout<<*it<<endl;
  // aikane chaile surute +x or sesh -x kore area select kra jabe
  // amra jodi chai eivabe o area select korte pari. max_element(sk.begin()+4,sk.begin()+8); 
  // karon aigula sudu adress return kore. mane iterator r ki..  
  // amra jodi chai max element er index ber korte tahle line 90 er moto korte hobe
  // int b= max_element(sk.begin(),sk.end())-sk.begin();     //inddex ber kora holo
// cout<<b;
// vector<int> :: iterator mn;
// mn= min_element(sk.begin(),sk.end());
// cout<<*mn;                                //   sob kichu ekdom max er moto e



vector<vector<int>> v;          // 2D vector
vector<int> a,b;
a={1,3,4,5,6};
b={4,6,7,2,4,6};
v.push_back(a);
v.push_back(b);
for( auto m: v)
{
    for( auto x: m)
    {
        cout<<x<<' ';
    
    }
    cout<<endl;
}
















 return 0;   
}