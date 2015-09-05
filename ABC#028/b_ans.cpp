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
  string s;
	cin >> s;
  VI vi;
  string ABCDEF = "ABCDEF";

  REP(i,6){
    vi.push_back(count(s.begin(), s.end(), ABCDEF[i]));
    //cout<<ABCDEF[i]<<":"<<count(s.begin(), s.end(), ABCDEF[i])<<endl;
  }

  REP(i,6){
    cout<<vi[i];
    if(i==5)break;
    cout<<" ";
  }
  cout << endl;
  return 0;
}
