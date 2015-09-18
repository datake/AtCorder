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
	double A, B;
	double P;
	double Q;

	cin >>N >> A >> B;

	double S[N];
	double SMax=0;
	double SMin=1e10;
	double SSum=0;
  for(int i=0;i<N;i++){
	 cin >> S[i];

		SMax=max(SMax,S[i]);
		SMin=min(SMin,S[i]);
		SSum+=S[i];
	}
	if((SMax-SMin)==0||N==0){
		cout << "-1"<< endl;
	} else {
		P=(double) B/(double) (SMax-SMin);
		Q=(A*N-P*SSum)/N;

		printf("%.10f %.10f\n",P, Q);
	}

	return 0;
}
