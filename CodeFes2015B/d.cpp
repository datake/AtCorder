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
	cin >> N;
	VI A(N);
	VI B(N);

	REP(i,N){
		cin>>A[i];
	}
	REP(i,M){
		cin>>B[i];
	}
	sort(A.begin(),A.end(),greater<int>());//降順
	sort(B.begin(),B.end(),greater<int>());//降順
	if(A.size()<B.size()){
		cout<<"NO"<<endl;
		return 0;
	}
	int j=0;
	for(int i=0;i<N;i++){//A:部屋定員i B:予約人数j
		if(j==(M-1)){//ここが最後の団体。ここで部屋にはいりきればYES
			if(A[i]>=B[j]){
				//その部屋に入りきる
				cout<<"YES"<<endl;
				return 0;
			}
		}else{
			if(A[i]>=B[j]){
				//その部屋に入りきる
				j++;
			}else{
				//昇順にしてるからその部屋にはいりきらなければそれ以上大きい部屋は存在しない
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;

}
