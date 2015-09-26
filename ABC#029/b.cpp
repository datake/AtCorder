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
	int count=0;
	char c[100];
	/* strstr */
	REP(i,12){
		cin>>c;
		if(strstr(c,"r")){
		 	count++;
		}
	}

	/* string */
	string str;
	count=0;
	REP(i,12){
		cin>>str;
		REP(j,str.size()){
			if(str[j]=='r'){
				count++;
				break;
			}
		}
	}
  cout<<count<<endl;
  return 0;
}
