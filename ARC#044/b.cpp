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
	cin >>N;
	VI A(N);
	PII v_ii;
	REP(i,N){
		cin>>A[i];
	}

	if(A[0]!=0){
		cout <<0<<endl;
		return 0;
	}

	FOR(i,1,N){
		//距離0が２つもあるようなグラフは存在しない
		if(A[i]==0){
			cout <<0<<endl;
			return 0;
		}
	}

	sort(A.begin(),A.end());

	//距離がおなじもの
	v_ii.push_back(0,1);//距離、数
	FOR(i,1,N){
		cout<<A[i]<<endl;
		//距離がとぶようなグラフは存在しない
		if(A[i]-A[i-1]>1){
			cout <<0<<endl;
			return 0;
		}else if(A[i]==A[i-1]){
				v_ii.end().second++;
		}else{
				v_ii.push_back(A[i],1);
		}


	}

  cout<<""<<endl;

}
