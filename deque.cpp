/*
samne piche duidik diye e push hobe. abar ber o kora jabe duidik diye e. 
*/
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
deque<int> q;
q.push_back(1);
q.push_front(2);
cout<<q.back()<<endl;
cout<<q.front()<<endl;
cout<<q.size()<<endl;

while(!q.empty())
{
    cout<<q.front()<<endl;
    q.pop_front();
    cout<<q.back()<<endl;
    q.pop_back(); 
}
return 0;
}