#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
	double N=0, K=0;
	double probability;
	double medium;
	double times=0;
	cin >> N >> K;

	//中央値がKになるパターンを考える
	//1.3つとも異なる数:[1,K-1],K,[K+1,N]の並び替え(*3!)
	times+=(K-1)*(N-K)*6;
	cout<<"全て異なる:"<<(K-1)*(N-K)*6<<endl;
	//2.2つの値が同じ:K,K,[K+1,N] or [1,K-1],K,Kの並び替え(*3)
	times+=(N-K)*3+(K-1)*3;
	cout<<"2つ同じ:"<<(N-K)*2*3+(K-1)*3<<endl;
	//3.3つの値が全て同じ(中央値) 1通り
	times+=1;

	cout <<"times,NNN:"<<times<<","<<(N*N*N) <<endl;
	probability=(double)times/(N*N*N);

	cout.precision(15);
	cout <<  fixed  << probability << endl;
	return 0;
}
