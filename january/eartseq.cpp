#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a,ll b){
    ll k;
    if(a<b){
        k=a;
        a=b;
        b=k;
    }
    while(b!=0){
        k=a%b;
        a=b;
        b=k;
    }
    return a;
}
int main() {
    ll n,m,t,fin[50006],in,p,k;
    vector<long long int> v;
    cin>>t;
    int arr[10002]={0};
    for(int i=2;i<=10000;i++){
        if(arr[i]==1)
        continue;
        for(int j=2;j*i<=10000;j++){
            arr[i*j]=1;
        }
    }
    for(int i=2;i<=10000;i++){
        if(arr[i]==0)
        v.push_back(i);
    }
    fin[0]=2*3;
    m=1;
    k=1;
    in=0;
    for(int i=1;i<=50000;i++){
        fin[i]=v[m%1213]*v[(k+m)%1213];
        if((k+m)%1213==0){
            in++;
            k=v[in];
            m=0;
            continue;
        }
        m+=k;
    }
    while(t--){
        cin>>n;
        if(n==3){
            cout<<"6 15 10\n";
            continue;
        }
        if(n==4){
            cout<<"374 595 1365 858";
        }
        for(int i=0;i<n-3;i++)
        cout<<fin[i]<<' ';
        p=gcd(fin[n-4],fin[n-5]);
    cout<<(fin[n-4]/p)*v[1214]<<' '<<v[1214]*v[1215]<<' '<<v[1215]*2<<endl;
    }
}
