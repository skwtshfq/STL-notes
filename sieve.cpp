#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'



// normal way te prime ber kora //  
bool is_prime_n(int n)
{
    for( int i =2;i<n;i++)
    {
        if(n%2==0)
        return false;
    }
    return true;
}

    // efficient way te prime ber kora// 
    bool is_prime_e(int n )
    {
        if(n<2)return false;
        if(n==3) return true;
        if(n%2==0) return false;
        for( int i=3;i<=sqrt(n);i=i+2)
        {
            if(n%i==0)
            return false;
        }
        return true;
    }


    // 1 teke n obdi prime number gulo print koranor funciton///
    void how_much_prime( int n)
    {
        vector<int> vc;
        int c=0;
        for ( int i =2;i<=n;i++)
        {
            if(is_prime_e(i)) 
            {vc.push_back(i);
            c++;
            }
        }
        cout<<"Total Prime is : "<<c<<endl;
        for ( auto x: vc)cout<<x<<' ';

    }
    
    // 1 teke n obdi prime number gulo print koranor efficient funciton///
    void how_much_priem_e( int n)
    {
        int arr[n+1]={0};
        for ( int i =2;i<=sqrt(n);i++)
        {
            if(arr[i]==0)
            {
                for ( int j=i*i;j<=n;j=j+i)
                {
                    arr[j]=1;
                }
            }
        }
        for ( int i=2;i<=n;i++)
        {
            if(arr[i]==0)
            cout<<i<<' ';
        }
    }
    // prime factorization using sieve//
    void prime_fact( int n)
    {
        int arr[n+1];
        for ( int i=1;i<=n;i++)
        {
            arr[i]=i;
        }
        for ( int i =2;i<=sqrt(n);i++)
        {
            if( arr[i]==i)
            {
                for ( int j=i*i;j<=n;j=j+i)
                {
                    if( arr[j]==j)
                    {
                        arr[j]=i;
                    }
                }
            }
        }
        while (n>1)
        {
            cout<<arr[n]<<' ';
            n=n/arr[n];
        }
        
    }


int main()
{
    // optimize();
   prime_fact(56);
   

return 0;
}