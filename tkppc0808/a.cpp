#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;

	int a[N],b[N],c[N];
  for(int i=0;i<N;i++){
	 cin >> a[i] >> b[i];
	}
  for(int i=0;i<N;i++){
   cout << a[i] + b[i]<< endl;
  }

	return 0;
}
