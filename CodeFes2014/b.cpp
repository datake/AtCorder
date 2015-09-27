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
	string A;
	long long B;//整数 B(1≦B≦1,000,000,000)
	cin >>A;
	cin >>B;

	int len= A.size();
	int tmp =(int) (B-1)%len;
	cout<<A[tmp]<<endl;
  return 0;
}
