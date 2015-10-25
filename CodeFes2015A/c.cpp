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
	int N,T;
	long int count=0;
	long int my_sum_time=0,his_sum_time=0;
	cin >> N>>T;
	VI A(N);
	VI B(N);
	//自分-彼の差だけかんがえる！
	vector<pair<int,int> > shuku;

	REP(i,N){
		cin>>A[i]>>B[i];
		my_sum_time+=A[i];
		his_sum_time+=B[i];
		shuku.push_back(make_pair(A[i]-B[i], B[i]));//自分-彼の差だけかんがえる！
	}
	sort(shuku.begin(), shuku.end(),greater<pair<int,int> >());
	if(T>my_sum_time){
		cout <<0<<endl;
	}else if(his_sum_time>T){
		cout <<-1<<endl;
	}else{
		REP(i,N+1){
			if(my_sum_time>T){//(i+1)こ宿題写した
				my_sum_time=my_sum_time-shuku[i].first;
				count++;
			}else{//もう移さなくてもok
				break;
			}
		}
		cout<<count<<endl;
	}
  return 0;
}
