#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(),(a).end()
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
typedef vector<int> VI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
const double EPS = 1e-10;
const double PI  = acos(-1.0);


int main(){
	int N;
	cin >> N;
	VI D(N);
	REP(i,N){
		cin>>D[i];
	}
	sort(D.begin(),D.end());
	REP(i,N){
		cout<<D[i]<<endl;
	}
  return 0;
}
