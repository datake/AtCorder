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
int SD(string s,int d){
	if(s=="West"){
		return -d;
	}else if (s=="East"){
		return d;
	}
}

int main(){
	int N, A, B;
	string s;
	int d;
	int here=0;
	cin >>N>>A>>B;
	REP(i,N){
		cin>>s>>d;
		if(A>d){
			here += SD(s,A);
		}else if(B<d){
			here += SD(s,B);
		}else{
			here += SD(s,d);
		}
	}

	if(here>0){
		cout<<"East "<<here<<endl;
	}else if(here<0){
		cout<<"West "<<-here<<endl;
	}else{
		cout<<0<<endl;
	}
  return 0;
}
