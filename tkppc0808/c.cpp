#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Event
{
	int start;
	int length;
	int value;
};
bool compare_by_value(const Event& left, const Event& right) {
  return left.start > right.start;
}
Event make_event(int start,int value){
	Event event;
	event.start = start;
  event.value = value;
	event.length = 0;
	return event;
}

int main()
{
	int N, Min, Finish;
	cin >> N >> Min;
  cin >> Finish;

	int Time[N],Kigen[N],c[N];
	int start, length;
  int sum_of_time;
	vector<Event> event_vector;
  for(int i=0;i<N;i++){
	 cin >> start >> length;
	 event_vector.push_back(make_event(start, length));
	}
	sort(event_vector.begin(), event_vector.end(), compare_by_value);
	//cout <<event_vector.front().start << endl;
	cout<<"output"<<endl;
	for(int i=0;i<event_vector.size();i++) {
		if(i==0) event_vector.at(i).length = event_vector.at(i).start;
		event_vector.at(i).length = event_vector.at(i).start - event_vector.at(i-1).start;
		cout <<event_vector.back().start <<" "<<event_vector.back().value<<" "<<event_vector.back().length<<endl;
		event_vector.pop_back();
	}
	return 0;
}
