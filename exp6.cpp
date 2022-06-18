#include<iostream>
#include<iomanip>
#include<cmath> 
using namespace std;

float function(float x){
     return 1/(1+x*x);
}

int main() {
  int n;
  float x0, xn,h,s;
  cout<<"Enter the values of x0, xn,n:";
  cin>>x0>>xn>>n;
  h=(xn-x0)/n;
  s=function(x0)+function(xn)+3*(function(x0+h)+function(x0+2*h));
  for (int i=5;i<=n-1;i+=3){
  s+=3*(function(x0+i*h)+function(x0+(i-1)*h))+2*function(x0+(i-2)*h);
  }
  cout<<"Value of given integral is:"<<setprecision(4)<<fixed<<(3*h/8)*s<<endl;
  cout<<"*****Made by*****"<<endl<<"Name: Ayush goyal"<<endl; 
  cout<<"Branch and sec.: ECE-A"<<endl; 
  cout<<"Enrollment no.: 02720802820"<<endl<<"Class roll no.: 27(G1)"<<endl;
}