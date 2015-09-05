#include<iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
	int N;
	double A, B;
	double P;
	double Q;

	cin >>N >> A >> B;

	double S[N];
	double SMax=0;
	double SMin=10000000000;
	double SSum=0;
  for(int i=0;i<N;i++){
	 cin >> S[i];
	 if(SMax<S[i]){
		 SMax=S[i];
	 }
	 if(SMin>S[i]){
		SMin=S[i];
	 }
	 SSum+=S[i];
	}
	if((SMax-SMin)==0||N==0){
		cout << "-1"<< endl;
	} else {
		P=(double) B/(double) (SMax-SMin);
		long long  temp1= (A*N-P*SSum)*100000000;
		Q=(double)temp1 / N;
		Q=Q/100000000;
		cout<<"min,max,sum"<<endl;
		cout << SMin<<","<<SMax<<","<< SSum<< endl;
		cout<<"P,Q"<<endl;
	  cout << P<<" "<< Q << endl;
		//	cout<<"temp1:"<<temp1<<endl;
		//cout<<"point:"<<(double) A*N-P*SSum<<"/"<<N<<"="<<(A*N-P*SSum)/N<<endl;
		cout<<"point:"<<(double) temp1<<"/"<<N<<"="<<temp1/N<<endl;
	}

	return 0;
}
