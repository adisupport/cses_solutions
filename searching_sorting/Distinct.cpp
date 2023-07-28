#include <bits/stdc++.h>
using namespace std;
#define var(x) cout<<#x<<":"<<x<<"\n";
#define print_vi(arr) for(auto i:arr) cout<<i<<" ";cout<<"\n";
#define print_vvi(arr) for(auto x:arr) print_vi(x);
#define fill(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
#define output(x) cout<<x<<"\n";
/*
---------------------------Distinct Element-------------------------------------------
You are given a list of n integers, 
and your task is to calculate the number of distinct values in the list.

Input

The first input line has an integer n
: the number of values.

The second line has n
 integers x1,x2,…,xn.

Output

Print one integers: the number of distinct values.

Constraints
1≤n≤2⋅105

1≤xi≤109

Example

Input:
5
2 3 2 2 3

Output:
2
*/

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    fill(arr,n);
    sort(arr.begin(),arr.end());
    int distinct = 1;
    for(int i=1;i<n;i++){
        if(arr[i-1]!=arr[i])distinct++;
    }
    output(distinct)
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}