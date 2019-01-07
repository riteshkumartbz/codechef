#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void addedge(vector<int> v,int a,int b){
	v[a].push_back(b);
	v[b].push_back(a);
}
int main() {
	int edges,vertices,t,v2,v1,max=0,in=0;
	cin>>t;
	while(t--){
		cin>>vertices>>edges;
		std::vector<int> v[vertices+1];
		int freq[vertices+1];
		for(int i=0;i<vertices;i++){
			cin>>v2>>v1;
			freq[v1]++;
			freq[v2]++;
			addedge(v,v2,v1);
		}
		if(edges%2==1){
			cout<<"impossible\n";
			return 0;
		}
		for(int i=1;i<=vertices;i++){
			if(freq[i]>max){
				max=freq[i];
				in=i;
			}
		}
		
		v.clear();
	}

    return 0;
}
