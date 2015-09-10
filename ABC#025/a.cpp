#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(),(a).end()
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
typedef vector<int> VI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

int main(){
	int  N, count=0;
	string S;
	string tmp;
	cin >> S;
	cin >> N;

	//atは0から24
	//Nは1から25
	cout<<S.at((N-1)/5)<<S.at((N-1)%5)<<endl;;
  return 0;
}
