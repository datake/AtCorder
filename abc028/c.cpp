#include<iostream>
#include <stdlib.h>
using namespace std;

int compare_int(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}

int main()
{
  int data[4]={0};
  cin>>data[4]>>data[3]>>data[2]>>data[1]>>data[0];

  //大きい順
  //qsort(data, 5, sizeof(int), compare_int);

  int sum[9]={0};//sum は10こ
  int first=0,second=0, third=0;
  int i=0,j=0,k=0;
  int l=0;
  for(i=0;i<3;i++){//0 1 2
    for(j=i+1;j<4;j++){//
      for(k=j+1;k<5;k++){
        //cout<<"ijk:"<<i<<j<<k<<": "<<data[i]+data[j]+data[k]<<endl;
        sum[l]=data[i]+data[j]+data[k];
        l++;
      }
    }
  }
  qsort(sum, 10, sizeof(int), compare_int);
  first=sum[0];
  int tmp=0;
  for(i=1;i<10;i++){
    if(sum[i]!=first){
      second=sum[i];
      tmp=i;

      break;
    }
  }
  for(i=tmp+1;i<10;i++){
    if(sum[i]!=second){
      third=sum[i];
      break;
    }
  }

  /*cout<<first<<endl;
  cout<<second<<endl;
  cout<<third<<endl;*/
  cout<<data[2]+data[1]+data[3]<<endl;
  return 0;
}
