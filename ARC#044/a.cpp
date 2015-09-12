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

bool isPrime(int number){
	for(int i=2;i*i<number;++i ) {
	 if(number%i==0 ) {
		 return false;
	 }
 }
	return true;
}

int main(){
	int N;
	bool ans;
	cin >>N;
	//合成数は素数でない自然数。ただし1だけは合成数でも素数でもない(wikipedia)
	if(N==1){
		ans=false;
	}else if(isPrime(N)){
		ans=true;
	}else if((N%2!=0) && (N%5!=0) && (N%3!=0)){
		ans=true;
	} else{
  	ans=false;
	}
	cout << (ans ? "Prime" : "Not Prime") << endl;
	return 0;
}
