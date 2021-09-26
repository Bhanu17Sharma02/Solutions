#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

void permutation(string str, string prem)
{
	
	if(str.size()==0)
	{
		cout<<prem<<"\n";
		return;
	}
	unordered_set<char> s;
	for(int i=0;i<str.size();i++)
	{
		char ch=str[i];
		if(s.count(ch)==0)
		{
			string ros=str.substr(0,i)+str.substr(i+1);
			s.insert(ch);
	     	permutation(ros,prem+ch);
	     	
		}
	}
}

int main()
{
	
	
	permutation("AAC","");
	return 0;
}
