/*
aikane sort kore raha hoi. unique hoi na.
f: top, pop 
*/
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
// priority_queue<int> q;
// q.push(3);
// q.push(4);
// q.push(10);
// q.push(2);
// cout<<q.top()<<endl;
// q.pop();
// cout<<q.top()<<endl;
// cout<<"size is "<<q.size()<<endl;
// while (!q.empty())
// {
//     cout<<q.top()<<' '<<endl;
//     q.pop();
// }

// olta vabe sort jodi korte hoi .
// priority_queue<int, vector<int>, greater<int>> s;       
// s.push(3);
// s.push(2);
// s.push(1);
// cout<<s.top()<<endl;

priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> x; // jodi nesting hoi tahle emne
x.push({3,5});
x.push({4,5});
x.push({2,3});
x.push({1,5});
while(!x.empty())
{
    cout<<x.top().first<<" "<<x.top().second<<endl;
    x.pop();
}
return 0;
}