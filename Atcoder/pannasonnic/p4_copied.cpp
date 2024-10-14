#include<iostream>
#include<cassert>
using namespace std;
string S;
int L[26],R[26];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>S;
	for(char c:S)R[c-'A']++;
	long ans=0;
	for(char c:S)
	{
		R[c-'A']--;
		for(int i=0;i<26;i++)ans+=(long)L[i]*R[i];
		L[c-'A']++;
	}
	cout<<ans<<endl;
}
