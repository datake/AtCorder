#include<iostream>
#include <cstdlib>
using namespace std;

int compare_int(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;//降順
}

int main()
{
  int data[4]={0};
  cin>>data[0]>>data[1]>>data[2]>>data[3]>>data[4];//昇順

  int sum[100]={0};//5C3=10
  int first=0,second=0,third=0;
  int i=0,j=0,k=0;
  int l=0;
  //i<j<k
  for(i=0;i<3;i++){//0,1,2
    for(j=i+1;j<4;j++){//1,2,3
      for(k=j+1;k<5;k++){//2,3,4
        //cout<<"ijk:"<<i<<j<<k<<": "<<data[i]+data[j]+data[k]<<endl;
        sum[l]=data[i]+data[j]+data[k];
        l++;
      }
    }
  }

  qsort(sum, l, sizeof(int), compare_int);
  cout<<sum[2]<<endl;//なんでWAなのかわからない
  return 0;
}
