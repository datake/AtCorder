#include<iostream>
#include<math>
using namespace std;
#defibe ll long long
double Log2(double N)
{
  return log(N)/log(2);
}
int main()
{
	ll N=0;
	cin >> N;
  /*
  奇数番目はtakahashiの手
  偶数番目はaokiの手
  */

  int depth =Log2(N) + 1;//深さ
	cout<<"depth:"<<log2N<<endl;
  //深さの偶奇に応じて戦略が変わる
  ll count=1;
  for(int t=1;turn<100;turn++){ //100ターン内に終わる
    count*=2;//countは*2するか*2+1するかの数
    if(turn%2==1 && depth%2==1) count+=1; //takahashiのターン
    if(turn%2==0 && depth%2==0) count+=1; //aoki

    if(count>n){//nを越した、つまり勝敗ついた
      if(turn%2) cout<<"Aoki"<<endl;//turnが奇数番目はtakahashiの手。よってaokiの勝ち
      else cout<<"Takahashi"<<endl;//turnが偶数番目はaokiの手。よってtakahashiの勝ち
      return 0;
    }
  }
}
