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
	long int  N,M;
	int finish=0;
	int zero=1;
	cin >> N>>M;
	VI X(N);
	VI train(N);
	REP(i,N){
		train[i]=0;
	}
	//図の車両番号は1から始まってるけど、
	//車両番号は0からはじまると考える！
	//0りょうからM-1りょうまで
	REP(i,M){
		cin>>X[i];
		train[X[i]]=i+1;
	}
	REP(j,N){//j分移動すると+-j整備完了

		if(count(train.begin(), train.end(), 0)==0){

			break;
		}else{
			REP(i,M){//各整備士について

					train[X[i]+j]=i+1;
					train[X[i]-j]=i+1;
			}
			finish++;
		}
	}

	cout<<finish<<endl;

  return 0;
}
