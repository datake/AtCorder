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
	int LARGE=1000000007;
	cin >> N;
	VI D(N);
	double count=0;
	REP(i,N){
		cin>>D[i];
	}
	sort(ALL(D));
	REP(p1,N-3){
		FOR(p2,p1,N-2){
			if(D[p1]*2<=D[p2]){
				FOR(p3,p2,N-1){
					if(D[p2]*2<=D[p3]){
						FOR(p4,p3,N){
							if(D[p3]*2<=D[p4]){
								count++;
							}
							if(count>LARGE){
								count=count - LARGE;
							}
						}
					}
				}
			}
		}
	}

	//%はintのみ
	cout<<count<<endl;
  return 0;
}
