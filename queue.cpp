/*
FIFO=first 
push always pichon diye hobe.
ber korar somoi same diye ber korbe
*/
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
queue<int> q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
// cout<<q.front()<<endl;
// q.pop();
// cout<<q.front()<<endl;
cout<<q.size()<<endl;
while(!q.empty())
{
    cout<<q.front()<<endl;
    q.pop();
}

return 0;
}