// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// #define
// int check=0;
// int main(){
//     long long int n,p,q,r,i,j;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         cin>>arr[i];
//     }
// }
#include <bits/stdc++.h>
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>




#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define vpll vector < pair<long long,long long> >
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define fill(a)  memset(a, 0, sizeof (a))
#define mp make_pair
#define pb push_back
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

#define rep(i, n)    for(long long int i = 0; i < (n); ++i)
#define repA(i, a, n)  for(int i = a; i <= (n); ++i)
#define repD(i, a, n)  for(int i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)


using namespace std;

// Function to Sort the array of string
// according to lengths. This function
// implements Insertion Sort.
void sort(string s[], int n)
{
    for (int i=1 ;i<n; i++)
    {
        string temp = s[i];

        // Insert s[j] at its correct position
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length())
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}

int main(){
	std::ios::sync_with_stdio(false);
        cin.tie(0);
        cin.exceptions(cin.failbit);
	ll t,n,k,i,j,d,q,x,y,r,m,num,freq,fin;
     cin>>n;
    ll sum = 0;
    ll sumtot = 0;
    string str[2*n-2];
    for(int i=0;i<2*n-2;i++){
        cin>>str[i];
    }
    sort(str,2*n-2);
    int arr[2*n-2];
    for(int i=0;i<2*n-3;i++){
        for(int j=i+1;j<2*n-2;j++){
            size_t found = str[i].find(str[j], 0, str[i].length());
            if(found)
            arr[i]=1;arr[j]=1;
        }
    }
    for(int i=0;i<2*n-2;i++){
        if(arr[i]==1)
        cout<<'P';
        else
        cout<<'S';
    }

    return 0;


}

/*input




Check the end cases
*/
