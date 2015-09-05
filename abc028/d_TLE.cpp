#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	double N=0, K=0;
	double probability;
	double medium;
	double times=0;
	cin >> N >> K;

	for(int i=1;i<N+1;i++){
		for(int j=1;j<N+1;j++){
			for(int k=1;k<N+1;k++){
				if(i<j){
					if(j<k){//i<j<k
						medium=j;
					}else if(i<k){//i<k<j
						medium=k;
					}else{//k<i<j
						medium=i;
					}
				}else{//j<i
					if(i<k){//j<i<k
						medium=i;
					}else if(j<k){//j<k<i
						medium=k;
					}else{//k<j<i
						medium=j;
					}
				}
				if(medium==K){
					times++;
				}
			}
		}
	}

	probability=(double)times/(N*N*N);
	//printf("%12.11lf\n",probability);//#include<cstdio>
	cout.precision(15);
	cout <<  fixed  << probability << endl;
	return 0;
}
