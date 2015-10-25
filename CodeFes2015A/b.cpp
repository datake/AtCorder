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
	VI A(N);
	long long sum;
	REP(i,N){
		cin>>A[i];
	}
	S[0]=A[0];
	sum=A[0];
	FOR(i,1,N){
	sum=sum*2+A[i];
	}

	cout<<sum<<endl;
  return 0;
}
