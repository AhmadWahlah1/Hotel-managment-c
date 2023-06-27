#include <iostream>
using namespace std;

int main(){
  int num,r,sum=0;
  cin >> num;
  for (int i=num;num!=0;num=num/10){
    r=num%10;
    sum=sum*10+r;
  }
  cout << "The number in inreverse order is: " << sum << endl;
}