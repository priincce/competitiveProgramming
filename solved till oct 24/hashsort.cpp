#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int, pair<int,int>>& a,pair<int, pair<int,int>>& b) 
{ 
	return a.first < b.first; 
} 
void sort(map<int, pair<int,int>>& M) 
{ 
	sort(A.begin(), A.end(), cmp); 
} 