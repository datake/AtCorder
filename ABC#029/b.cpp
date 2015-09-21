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
	VS vs;
	int count=0;
	/*
	char c[100];
	REP(i,12){
		cin>>c;
		if(strstr(c,"r")){
		 	count++;
		}
	}
		*/
		string str;
		REP(i,12){
			cin>>str;
			REP(j,str.size()){
				if(str[j]=='r'){
					count++;
					exit;
				}
			}
		}




  cout<<count<<endl;
  return 0;
}
