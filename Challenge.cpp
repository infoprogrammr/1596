#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int a[10];
  for(int i=0;i<10;i++) cin>>a[i];
  sort(a,a+10);
  int count=0;
  for(int i=0;i<9;i++){
      if(a[i]==a[i+1]) count++;
  }
  cout<<count;
  return 0;
}
