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
	int N,M;
	cin >> N>>M;
	VI A(N);
	map<int,int> memo;
	map<int,int> ::iterator mapitr;
	int tmp;
	int ansflag=0;
		cout<<"N/2:"<<N/2<<endl;
	REP(i,N){
		cin>>tmp;
		A[i]=tmp;
		mapitr = memo.find(tmp);

		if (mapitr == memo.end() ) {
			//未登録
			memo[tmp] = 1;
			//cout<<"未登録:"<<tmp<<endl;
		}else{
			//追加
			mapitr->second=mapitr->second+1;
			cout<<"登録:"<<tmp<<","<<mapitr->second<<endl;
			if(N%2==0){//偶数
				if(mapitr->second >(N/2)){
					cout<<tmp<<endl;
					return 0;
				}
			}else{//奇数
				if(mapitr->second >(N/2)){
					cout<<tmp<<endl;
					return 0;
				}
			}

		}
	}

	if(ansflag==0){
		cout<<"?"<<endl;
	}


  return 0;
}
