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

int is_uru(long long year){
	if((year%400)==0){
		return 1;
	}else if((year%100)==0){
		return 0;
	}else if((year%4)== 0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	LL A,B;
	cin >>A>>B;
	LL count=0;
	bool done[100]={0};
	LL memo[100]={0};
	int two_digit;
	for(long long year=A;year<B+1;year++){
		two_digit=year%100;//下二桁
		if((year%400)==0){
			count++;
		}else if((year%100)==0){
			//count++;
		}else{
			if(done[two_digit]){
				count+=memo[two_digit];
			}else{
				memo[two_digit]=is_uru(year);
				count+=memo[two_digit];
			  done[two_digit]=1;
			}
		}
		//count+=is_uru(i);
	}
  cout<<count<<endl;
  return 0;
}
