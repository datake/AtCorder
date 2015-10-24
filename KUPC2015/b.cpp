#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(),(a).end()
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
typedef vector<int> VI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
int set_road_from_enemy(int enemy_place[][20],int road_place[][20],int i,int j){

	FOR(p,10,20){
		FOR(q,10,20){
			if(enemy_place[p][q]==1){
				FOR(p,i-2,i+3){
					road_place[p][j]=1;
				}
				FOR(p,j-2,j+3){
					road_place[i][p]=1;
				}
				road_place[i-1][j-1]=1;
				road_place[i+1][j-1]=1;
				road_place[i-1][j+1]=1;
				road_place[i+1][j+1]=1;

				road_place[i-2][j-2]=1;
				road_place[i+2][j-2]=1;
				road_place[i-2][j+2]=1;
				road_place[i+2][j+2]=1;
			}
		}
	}
}
void dump(int enemy_place[][20]){
	FOR(i,10,20){
		FOR(j,10,20){
			if(enemy_place[i][j]==1){
				cout<<"C";
			}else{
				cout<<".";
			}
		}
		cout<<endl;
	}
}

int main(){
	//敵->1
	//何もない->0
	int  enemy_place[20][20]={0};
	//封鎖されている->1
	//通れる->0
	int  road_place[20][20]={0};

	int num_of_enemy;


	/*enemy_place[16][10]=1;
	enemy_place[14][12]=1;
	enemy_place[12][14]=1;*/
	enemy_place[16][10]=1;
	enemy_place[12][14]=1;

	enemy_place[13][19]=1;

	enemy_place[15][17]=1;
	enemy_place[17][15]=1;
	enemy_place[19][13]=1;
	FOR(i,10,20){
		FOR(j,10,20){
			if(enemy_place[i][j]==1){
				set_road_from_enemy(enemy_place,road_place,i,j);
			}
		}
	}


	dump(enemy_place);
	cout<<endl;
	dump(road_place);
  return 0;
}
