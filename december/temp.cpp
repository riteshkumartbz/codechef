#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long int bal=1000;
void solve(long int a,long int b){
	int in;
	if(b-a<=15){
		for(long int i=a;i<b;i++){
	        cout<<1<<' '<<i<<endl;
    	    fflush(stdout);
    	    cin>>in;
    	    if(in==1){
				bal-=151;
				cout<<2<<endl;
				fflush(stdout);
    	        cout<<3<<' '<<i<<endl;
    	        return ;
    	    }
			else
			bal--;
	    }

		cout<<3<<' '<<b<<endl;
		return ;
	}
	long int size=b-a+1,tmp,check=0,r;
	r=(size)/10;
	for(long int i=1;i<=10;i++){
		cout<<1<<' '<<a+i*r-1<<endl;
		fflush(stdout);
		cin>>in;
		if(in==1){
			bal-=15;
			cout<<2<<endl;
			fflush(stdout);
			tmp=a+(i-1)*r;
			check=1;
			break;
		}
		else bal--;
		}
	if(check==1){
		solve(tmp,tmp+r-1);
	}
	else{
		solve(a+r*10,b);
	}

}
int main() {
	long int n,c;
	cin>>n>>c;
	solve(1,n);
	return 0;
}
