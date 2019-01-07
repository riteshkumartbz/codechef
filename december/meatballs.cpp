#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int finale(int arr[]){
    int tmp[7][2],in[6],check=0;
    for(int i=1;i<=6;i++){
        cout<<'?'<<' ';
        for(int j=1;j<=6;j++){
            if(i!=j){
                cout<<arr[j]<<' ';
            }
        }
            cout<<'\n';
            fflush(stdout);
            cin>>tmp[i][0]>>tmp[i][1];
    }
    for(int i=1;i<=4;i++){
        for(int j=i+1;j<=5;j++){
            for(int u=j+1;u<=6;u++){
                if(((tmp[i][0]==tmp[j][0])&&(tmp[i][1]==tmp[j][1]))&&((tmp[i][0]==tmp[u][0])&&(tmp[i][1]==tmp[u][1]))){
                in[1]=arr[i];in[2]=arr[j];in[3]=arr[u];in[4]=tmp[i][0];in[5]=tmp[i][1]; check=1; break;}
            }
            if(check==1) break;
        }
        if(check==1) break;
    }
    sort(arr+1,arr+7);
    sort(in+1,in+6);
    for(int i=1;i<=5;i++){
        if(in[i]!=arr[i]){
            return arr[i];
        }
    }
    return arr[6];
}
void solve(int arr[],int pr,int n){
    int n1,n2;
    if((n-pr)==2){
        arr[6]=pr+1;
        pr++;
        int ans=finale(arr);
        int in,j=0;
        int ar[6];
        for(int i=1;i<=6&&j<=3;i++)
        if(arr[i]!=ans){
            j++;
            ar[j]=arr[i];
        }
        ar[4]=ans;
        ar[5]=pr+1;
        cout<<'?'<<' ';
        for(int i=1;i<=5;i++)
        cout<<ar[i]<<' ';
        cout<<'\n';
        fflush(stdout);
        cin>>n1>>n2;
        if((ans==n1)||(ans==n2)){
            cout<<'!'<<' '<<pr+1<<endl;
            fflush(stdout);
        }
        else{
            cout<<'!'<<' '<<ans<<endl;
            fflush(stdout);
        }

        return ;
    }
    if((n-pr)==1){
        arr[6]=pr+1;
        pr++;
        cout<<'!'<<' '<<finale(arr)<<endl;
        return;
    }
    cout<<'?'<<' ';
    for(int i=1;i<=5;i++)
    cout<<arr[i]<<' ';
    cout<<'\n';
    fflush(stdout);
    cin>>n1>>n2;
    for(int i=1;i<=5;i++){
        if(arr[i]==n1){
            arr[i]=pr+1;
            pr++;
        }
        if(arr[i]==n2){
            arr[i]=pr+1;
            pr++;
        }
    }
    solve(arr,pr,n);


}
int main() {
	int t,n,c;
    cin>>t;
    while(t--){
        int arr[7];
        for(int i=1;i<=5;i++)
        arr[i]=i;
        cin>>n;
        solve(arr,5,n);
    }
	return 0;
}
