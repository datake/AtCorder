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
	int A, max=0;
	cin >> A;

	REP(i,A){
		if(i*(A-i) > max){
			max = i*(A-i);
		}
	}

  cout<< max <<endl;
  return 0;
}
