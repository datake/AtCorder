#include<iostream>
using namespace std;
int main()
{
	int N;
  cin >> N;

	if(N==100){
		cout << "Perfect"<< endl;
	}else	if(N<60){
		cout << "Bad"<< endl;
	}else if(N>59&&N<90){
		cout << "Good"<< endl;
	}else{
		cout << "Great"<< endl;
	}

	return 0;
}
