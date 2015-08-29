#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int max_number=0;
	//sort関数使わないversion
	int tmp_value=0;
	int max_value=0;
	for(int i=0;i<N;i++){
		cin >> tmp_value;
		if(max_value < tmp_value){
			max_value = tmp_value;
			max_number = i;
		}
	}
	//max_numberは0が始点だけど、返すべきなのは1が始点
	cout << max_number + 1 << endl;
 	return 0;
}
