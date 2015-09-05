#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int A=0,B=0,C=0,D=0,E=0,F=0;
	string str="";
	cin >> str;
	string first;
	for(int i=0;i<str.size();i++){
		first=str.substr(i,1);
		if(first=="A"){
			A++;
		}else	if(first=="B"){
			B++;
		}else	if(first=="C"){
			C++;
		}else	if(first=="D"){
			D++;
		}else	if(first=="E"){
			E++;
		}else	if(first=="F"){
			F++;
		}

	}
	cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<" "<<F<<endl;

	return 0;
}
