#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int data[10]={0};
  cin>>data[0]>>data[1]>>data[2]>>data[3]>>data[4];//昇順

  //int sum[100]={0};//5C3=10
  vector<int> sum;
  int first=0,second=0,third=0;
  int i=0,j=0,k=0;
  int l=0;
  //i<j<k
  for(i=0;i<3;i++){//0,1,2
    for(j=i+1;j<4;j++){//1,2,3
      for(k=j+1;k<5;k++){//2,3,4
        //cout<<"ijk:"<<i<<j<<k<<": "<<data[i]+data[j]+data[k]<<endl;
        sum.push_back(data[i]+data[j]+data[k]);

      }
    }
  }
  //昇順ソート この時点では重複を含む可能性
  sort(sum.begin(),sum.end());
  //重複除く
  sum.erase(unique(sum.begin(),sum.end()),sum.end());
  for(i=0;i<sum.size();i++){
    //cout<<sum[i]<<endl;
  }
  cout<<sum[sum.size()-3]<<endl;
  return 0;
}
