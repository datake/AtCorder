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
	string S;
	cin >>S;
	//後ろ4文字切り取り
	int len=S.size();
	S=S.substr(0,len-4);
  cout<<S<<"2015"<<endl;
  return 0;
}
