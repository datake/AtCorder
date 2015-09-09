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
	//交互にR*R*PIを足し引きしていく
	double sum = 0;
	int sign_flag=1;
	int N;
	int input;

	cin >> N;
	VI R(N);
	REP(i,N){
		cin >> R[i];
	}

	sort(R.begin(),R.end());

	REP(i,N){
		sum += R[i]*R[i]*sign_flag;
		sign_flag *= -1;
	}
	//Nの偶奇で-1をかけるかかけないか
	if(sum<0){
		sum *= -1;
	}

	printf("%.10f\n", sum*PI);
  return 0;
}
