#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(),(a).end()
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
typedef vector<int> VI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

int findstring(string &S,int ret){
	unsigned int loc1 = S.find( "kyoto",0);
	unsigned int loc2 = S.find( "tokyo",0);
	//cout <<loc1<<","<<loc2<<endl;
	if(loc2 != loc1){//どちらかの文字列が見つかった場合
		if(loc1>=loc2){//tokyoが先
			S=S.substr(loc2+5);
			ret++;
		}else if(loc1<loc2){//kyotoが先
			//cout<<S;
			S=S.substr(loc1+5);
			ret++;
		}
		return findstring(S,ret);
	}else{//もう文字がない場合
		return ret;
	}

}

int main(){
	int  N, count=0;
	string S;
	vector<string> res;
	cin >> N;
	unsigned int loc1;
	unsigned int loc2;
	int ret=0;
	REP(i,N){

		ret=0;
		cin>>S;
		ret=findstring(S,ret);
		cout<< ret <<endl;
	}

  return 0;
}
