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
	int LARGE=1000000007;
	cin >> N;
	VI D(N-1);
	double count=0;
	REP(i,N){
		cin>>D[i];
	}
	sort(ALL(D));
	//方針
	//4問目は1問目*8倍以上の難易度
	//1問目と4問目を決めてから2,3問目を決める

	//参考:binary_search関数
	//第１引数と第２引数で探索範囲を指定し、第３引数で探索したい値を指定
	//もし、発見されればtrueを返し、発見されなければfalseを返します。
	//ex.binary_search(D.begin(), D.end(), 10)

	//lower_bound()は、指定した値"以上"の要素が最初に現れる位置を返します
	//DPでとくらしい
	std::vector<int>::iterator ii_p1,ii_p2,ii_p3,ii_p4;
	int p1,p2,p3,p4;
	ii_p1=lower_bound(ALL(D), D[N-1]/8);
	int max_p1=ii_p1-D.begin();//最大値(D[N])の1/8以上の初めての数

	for(p1=0;p1<=max_p1;p1++){

		//ii_p4=lower_bound(ALL(D), D[p1]*8);
		//int min_p4=ii_p4-D.begin();//p1の8倍以上の初めての数
		//cout<<"min_p4:"<<min_p4<<",そのD:"<<D[min_p4]<<endl;
		for(p4=N-1;D[p1]*8<=D[p4];p4--){

				ii_p2=lower_bound(ALL(D), D[p1]*2);
				ii_p3=lower_bound(ALL(D), D[p4]/2);
				int min_p2=ii_p2- D.begin();//p1の二倍以上の初めての数
				int max_p3=ii_p3- D.begin()+1;//p4の1/2以上の初めての数
				//cout<<"max_p3:"<<max_p3<<endl;

				for(int p2=min_p2;D[p2]*2<=D[max_p3];p2++){//p2を動かす
					for(int p3=max_p3;D[p2]*2<=D[p3];p3--){//p3を動かす
						count++;
						cout<<"p1,p2,p3,p4:"<<D[p1]<<","<<D[p2]<<","<<D[p3]<<","<<D[p4]<<endl;

					}
				}
			if(count>LARGE){
				count=count - LARGE;
			}
		}
	}

	//%はintのみ
	cout<<count<<endl;
  return 0;
}
