#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return x*x*x-x-2;
}
int main(){
  double a=1;double b=2;
  double tolerance=1e-6;
  double c;
  if(f(a)*f(b)>=0){
    return 0;
  }
  double error=fabs(a-b);
  while(error>=tolerance){
    c=(a+b)/2;
    if(c==0.0){
        break;
    }
    else if(f(a)*f(c)<0){
        b=c;
    }
    else{
        a=c;
    }
    error=fabs(a-b);
  }
  cout<<c<<endl;
  return 0;

}
