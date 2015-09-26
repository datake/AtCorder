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

//print(n,front) = front + print(n-1,front+OR{a,b,c})
int print(int n, string front){
  if(n==1){
    cout <<front+'a'<<endl;
    cout <<front+'b'<<endl;
    cout <<front+'c'<<endl;
  } else{
    print(n-1,front+'a');
    print(n-1,front+'b');
    print(n-1,front+'c');
  }
}

int main(){
  int N;
	cin >>N;
  print(N,"");
  return 0;
}
