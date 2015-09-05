#include<iostream>
using namespace std;
int main()
{
	int l[2], another;
  cin >> l[0] >> l[1] >>l[2];
	if(l[0]==l[1]){
		another=l[2];
	}
	if(l[0]==l[2]){
		another=l[1];
	}
	if(l[1]==l[2]){
		another=l[0];
	}
	cout << another<< endl;
	return 0;
}
