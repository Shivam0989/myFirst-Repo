#include<bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int,string>> &v){
	cout<<"The size of vector is : "<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" : "<<v[i].second<<endl;
	}
}
int main(){
	vector<pair<int,string>> v;
	int i=0;
	while(i<3){
		int x;
		string s;
		cin>>x>>s;
		v.push_back({x,s});
		i++;
	}
	printVec(v);
	return 0;
}