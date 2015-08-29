#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int N, sum=0,people_island=0;
	cin >> N;
	int a[N],differ[N], output=-1;
	vector<int> group;
	for(int i=0;i<N;i++){
		cin >> a[i];
		sum +=a[i];
	}
	if(sum%N==0){
		//わりきれる場合橋をかける
		people_island=sum/N;
		//Nこの島をグループにわける
		//group[i-1]からgroup[i]番目の島がひとつのグループとなる
		for(int i=0;i<N;i++){
			differ[i]=a[i]-people_island;
			cout << differ[i]<<endl;
		}
		int temp;
		for(int i=0;i<N;i++){
			temp+=differ[i];
			if(temp==0){
				group.push_back(i);
			}
		}
		output=N-group.size();
	}

	 cout << sum<< endl;
	 cout << output<< endl;
	return 0;
}
