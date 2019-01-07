#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int status=1;
void finale(long long int arr[],int pos,int n){
    //cout<<"finale\n";
    if((n-pos)%4==0){
        long long int fin[5];
        cout<<1<<' '<<pos+1<<' '<<pos+2<<' '<<pos+3<<endl;
        fflush(stdout);
        cin>>fin[1];
        cout<<1<<' '<<pos+4<<' '<<pos+2<<' '<<pos+3<<endl;
        fflush(stdout);
        cin>>fin[2];
        cout<<1<<' '<<pos+1<<' '<<pos+4<<' '<<pos+3<<endl;
        fflush(stdout);
        cin>>fin[3];
        cout<<1<<' '<<pos+1<<' '<<pos+2<<' '<<pos+4<<endl;
        fflush(stdout);
        cin>>fin[4];
        arr[pos+1]=fin[1]^fin[3]^fin[4];
        arr[pos+2]=fin[1]^fin[2]^fin[4];
        arr[pos+3]=fin[1]^fin[3]^fin[2];
        arr[pos+4]=fin[2]^fin[3]^fin[4];
        pos+=4;
    }
    else if((n-pos)%4==1){
        long long int fin[6];

        cout<<1<<' '<<pos+1<<' '<<pos+2<<' '<<pos+3<<endl;
        fflush(stdout);
        cin>>fin[1];
        cout<<1<<' '<<pos+2<<' '<<pos+3<<' '<<pos+4<<endl;
        fflush(stdout);
        cin>>fin[2];
        cout<<1<<' '<<pos+3<<' '<<pos+4<<' '<<pos+5<<endl;
        fflush(stdout);
        cin>>fin[3];
        cout<<1<<' '<<pos+4<<' '<<pos+5<<' '<<pos+1<<endl;
        fflush(stdout);
        cin>>fin[4];
        cout<<1<<' '<<pos+5<<' '<<pos+1<<' '<<pos+2<<endl;
        fflush(stdout);
        cin>>fin[5];
        arr[pos+1]=fin[2]^fin[3]^fin[5];
        arr[pos+2]=fin[3]^fin[1]^fin[4];
        arr[pos+3]=fin[2]^fin[4]^fin[5];
        arr[pos+4]=fin[1]^fin[3]^fin[5];
        arr[pos+5]=fin[1]^fin[2]^fin[4];
        pos+=5;
    }
    else if((n-pos)%4==3){
        long long int fin[8],temp;
        cout<<1<<' '<<pos+1<<' '<<pos+2<<' '<<pos+3<<endl;
        fflush(stdout);
        cin>>fin[1];
        cout<<1<<' '<<pos+2<<' '<<pos+3<<' '<<pos+4<<endl;
        fflush(stdout);
        cin>>fin[2];
        cout<<1<<' '<<pos+3<<' '<<pos+4<<' '<<pos+5<<endl;
        fflush(stdout);
        cin>>fin[3];
        cout<<1<<' '<<pos+4<<' '<<pos+5<<' '<<pos+6<<endl;
        fflush(stdout);
        cin>>fin[4];
        cout<<1<<' '<<pos+5<<' '<<pos+6<<' '<<pos+7<<endl;
        fflush(stdout);
        cin>>fin[5];
        cout<<1<<' '<<pos+6<<' '<<pos+7<<' '<<pos+1<<endl;
        fflush(stdout);
        cin>>fin[6];
        cout<<1<<' '<<pos+7<<' '<<pos+1<<' '<<pos+2<<endl;
        fflush(stdout);
        cin>>fin[7];
        temp=fin[1]^fin[2]^fin[3]^fin[4]^fin[5]^fin[6]^fin[7];
        arr[pos+1]=temp^fin[2]^fin[5];
        arr[pos+2]=temp^fin[3]^fin[6];
        arr[pos+3]=temp^fin[4]^fin[7];
        arr[pos+4]=temp^fin[1]^fin[5];
        arr[pos+5]=temp^fin[2]^fin[6];
        arr[pos+6]=temp^fin[3]^fin[7];
        arr[pos+7]=temp^fin[1]^fin[4];
        pos+=7;
    }
    cout<<2<<' ';
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
    fflush(stdout);
    int chk;
    cin>>chk;
    if(chk==-1)status=0;

}
void solve(long long int arr[],int pos,int n){
    //cout<<"Solve\n";
    if((n-pos)/4==1){
        finale(arr,pos,n);
        return ;
    }
    if((n-pos)%4!=2){
        long long int fin[5];
        cout<<1<<' '<<pos+1<<' '<<pos+2<<' '<<pos+3<<endl;
        fflush(stdout);
        cin>>fin[1];
        cout<<1<<' '<<pos+4<<' '<<pos+2<<' '<<pos+3<<endl;
        fflush(stdout);
        cin>>fin[2];
        cout<<1<<' '<<pos+1<<' '<<pos+4<<' '<<pos+3<<endl;
        fflush(stdout);
        cin>>fin[3];
        cout<<1<<' '<<pos+1<<' '<<pos+2<<' '<<pos+4<<endl;
        fflush(stdout);
        cin>>fin[4];
        arr[pos+1]=fin[1]^fin[3]^fin[4];
        arr[pos+2]=fin[1]^fin[2]^fin[4];
        arr[pos+3]=fin[1]^fin[3]^fin[2];
        arr[pos+4]=fin[2]^fin[3]^fin[4];
        solve(arr,pos+4,n);
    }
    else{
        long long int fin[6];

        cout<<1<<' '<<pos+1<<' '<<pos+2<<' '<<pos+3<<endl;
        fflush(stdout);
        cin>>fin[1];
        cout<<1<<' '<<pos+2<<' '<<pos+3<<' '<<pos+4<<endl;
        fflush(stdout);
        cin>>fin[2];
        cout<<1<<' '<<pos+3<<' '<<pos+4<<' '<<pos+5<<endl;
        fflush(stdout);
        cin>>fin[3];
        cout<<1<<' '<<pos+4<<' '<<pos+5<<' '<<pos+1<<endl;
        fflush(stdout);
        cin>>fin[4];
        cout<<1<<' '<<pos+5<<' '<<pos+1<<' '<<pos+2<<endl;
        fflush(stdout);
        cin>>fin[5];
        arr[pos+1]=fin[2]^fin[3]^fin[5];
        arr[pos+2]=fin[3]^fin[1]^fin[4];
        arr[pos+3]=fin[2]^fin[4]^fin[5];
        arr[pos+4]=fin[1]^fin[3]^fin[5];
        arr[pos+5]=fin[1]^fin[2]^fin[4];
        solve(arr,pos+5,n);
    }

}
int main() {
	long int n,t;
	cin>>t;
    while(t--){
        cin>>n;
        long long int arr[n+1];
        solve(arr,0,n);
        if(status==0) break;
    }
	return 0;
}
