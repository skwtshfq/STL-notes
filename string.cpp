
/*
1. s.clear();
2. s.empty();
3. reverse(s.begin(),s.end());
4. sort(s.begin(),s.end();
5. sort(s.rbegin,s.rend());
6. unique(s.begin(),s.end());
7. s.erase(s.begin()+3);
8. string x= to_string(s);
9. int  x= stoi(s);
10. isupper(x) , islower(x);// input just character or s[x]
11.  toupper() , tolower(x); // input ......
12. s.erase(s.begin(),s.begin()+x);
13. s.find("ak"); jodi pawa na jai tahle -1 er sathe tulona kora jai
14. next_permutation(s.begin,s.end);*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
// string skwt;                            // string usually dynamic ,  jodi aivabe newa hoi skwt[x]; aita static
// skwt=skwt+'a';                         // concation     , oita charater array bole. 
// skwt=skwt+'b';
// skwt+='c';
// cout<<skwt;
// string s= "sakhawat";                    // agulake one by one access kora jai. all i know
// string s1= " shafiq";
// s=s+s1;
// cout<<s<<endl;
// s.clear();
// cout<<s<<" xx"<<endl;
// cout<<s.empty()<<endl;
// string name;
// name="Sakhawat Shafiq";
// string :: iterator it;
// for( it= name.begin(); it!=name.end();it++)
// cout<<*it<<' ';

// 
// for( auto x: name)
// cout<<x<<' ';
// reverse(name.begin(),name.end());
// for( auto x: name)
// cout<<x;
// string s;
// s="Eye";
// string tem=s;
// reverse(s.begin(),s.end());
// if(s==tem)
// cout<<"Palindrome";
// else
// cout<<" Not palindrome";
// string name;
// getline(cin,name);
// cout<<name<<endl; 
// sort(name.rbegin(),name.rend());
// sort(name.begin(),name.end());
// cout<<name.size()<<endl;
// int size= unique(name.begin(),name.end())-name.begin();
// cout<<size;
// cout<<*max_element(name.begin(),name.end())<<" "<<*min_element(name.begin(),name.end());
// name.erase(name.begin());               //O(n)
// name.erase(name.end()-1);              // last er ta hobe. O(1) 

// string s;                     // remember substring, subsequence, prefix,subfix
// cin>>s;
// s.pop_back(); 
// cout<<s.back()<<endl;
 // s.erase(remove(s.begin(),s.end(),'a'),s.end());    // remove a specific character
// cout<<s<<endl;

 
// int a=345;
// string s;
// s=to_string(a);
// cout<<s<<endl;
// cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
// s[2]='7';     // s[2]=7; evabe dwa jabe na
// cout<<s;

// string skwt= "345";
// int x= stoi(skwt);
// cout<<x<<endl;
// x++;
// cout<<x<<endl;


// char x= 'a  ';
// int a= isupper(x);            // aita 0 or 1 return kore
// cout<<a<<endl;


// char t= 'a';
// bool b= isspace(t);                  // bool na dile 8 ase keno jani.   
// cout<<b<<endl;
// char x='a';
// cout<<toupper(x)<<endl;              // aivabe korle ascii print kore dibe, r agual permanent change kore na. 
// char r= toupper(x);                  // tai aivabe age kothaw rakte hobe
// cout<<r<<endl;
// char m= tolower(r);
// cout<<m<<endl;
// string name="sakhawat shafiq";
// name.erase(name.begin(),name.end()-9);
// cout<<name<<endl;
// cout<<name.find("fiq");                   // je index teke suru hoise aita print kore. aitar op 12
// cout<<name.find("haa");                     // olta palta vale return kore
// string sub;
// cin>>sub;
// if(name.find(sub)!=-1) {cout<<" YES"<<" its "<<name.find(sub);  }    // eivabe check kora jai
// else cout<<"NO";


// string s="dcba";
// int x=next_permutation(s.begin(),s.end()); // aita immidiate senior ke ber kore..jodi takhe r ki.
// cout<<x<<" "<<s;                           // kaj suru kore protom teke

// string s="abcd";
// do
// {
//     cout<<s<<" ";
// } while (next_permutation(s.begin(),s.end()));        // jotokkon obdi ache totokkon print kore. 
                         //aita sudu string noi. onno sob data type a o kaj korbe. like array,vector. 
                         // mane jeikane jeikane sort ache oikane o .




 return 0;
}