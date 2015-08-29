#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Person
{
	int id;
	double value;
};
bool compare_by_value(const Person& left, const Person& right) {
	//valueが等しい少女が複数いるときはその少女たちの番号の中で最も小さいものを出力すること。
	if(left.value == right.value){
		return left.id < right.id;
	}
  return left.value > right.value;
}
Person make_person(int id,double value){
	Person person;
	person.id = id;
  person.value = value;
	return person;
}
int main()
{
	int N;
	cin >> N;

	int a[N-1];
  vector<Person> person_vector;
  for(int i=0;i<N;i++){
	 cin >> a[i];
   person_vector.push_back(make_person(i+1,a[i]));
	}

  sort(person_vector.begin(), person_vector.end(), compare_by_value);
	//最後のケースだけ通らなかった理由はL12-L14の処理をしてなかった
  cout <<person_vector.front().id << endl;
	return 0;
}
