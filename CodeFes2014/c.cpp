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

//400で割り切れるのと下3桁が400なのは全く別
LL how_many(LL year){

	cout<<"4で割り切れ:"<<year/4<<endl;
	cout<<"100で割り切れ:"<<year/100<<endl;
	cout<<"400で割り切れ:"<<year/400<<endl;
	return year/4 - year/100 + year/400;
}

int main(){
	LL A,B;
	cin >>A>>B;
	LL count=0;
	// cout<<"A-1:"<<how_many(A-1)<<endl;
	// cout<<"B:"<<how_many(B)<<endl;
	count=how_many(B)-how_many(A-1);
  cout<<count<<endl;
  return 0;
}
