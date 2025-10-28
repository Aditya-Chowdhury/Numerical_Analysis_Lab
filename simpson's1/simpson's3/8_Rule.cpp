#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return x*x;
}
int main(){
    double a;//lower limit
    cin>>a;
    double b;//upper limit
    cin>>b;
    int n;//no.of sub interval
    cin>>n;
    if(n%3!=0){
        return 0;
    }
    double h=(b-a)/n;
    double sum=f(a)+f(b);
    for(int i=1;i<n;i++){
        double x=a+i*h;
      if(i%3==0){
        sum+=2*f(x);
      }
      else{
        sum+=3*f(x);
      }
    }
    double result=(3*h*sum)/8;
    cout<<setprecision(6)<<result<<endl;
    return 0;
}