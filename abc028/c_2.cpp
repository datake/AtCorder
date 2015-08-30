#include<iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int data[4]={0};
  //dataは0,1,2,3,4と小さい順
  cin>>data[0]>>data[1]>>data[2]>>data[3]>>data[4];

  /*
  0,1,2,3,4という数字から作れる和の中で3番目に大きいものを考える
  2+3+4=9(1位)
  1+3+4=8(2位)
  1+2+4=7(3位?)
  0+3+4=7(3位?)
  1+2+3=6(4位)
  ..

  A<B<C<D<E
  B+D+E[二位] < C+D+E[一位](for B<C)
  B+C+E[三位?] < B+D+E[二位](for C<D)
  A+D+E[三位?] < B+D+E[二位](for A<B)
  */
  int a=data[1]+data[2]+data[4];
  int b=data[0]+data[3]+data[4];
  if(a>b){
    cout<<a<<endl;
  }else{
    cout<<b<<endl;
  }
  return 0;
}
