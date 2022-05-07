#include<bits/stdc++.h>
using namespace std;

long long minCoins(long long arr[],long long n,long long X)
{
    sort(arr,arr + n);
    long long coins = 0;
    long long i = n - 1;

    while(i >= 0)
    {
        coins = coins + X/arr[i];
        X = X % arr[i];
        i--;
    }

    return coins;
}

int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i = 0; i < n ; i++)
        cin>>arr[i];
    long long X;
    cin>>X;
    cout<<minCoins(arr,n,X)<<endl;
    return 0;
}
