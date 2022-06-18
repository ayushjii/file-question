#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

float function(float x);
float differentiate_function(float x);

float function(float x)
{
  return x*log10(x)-1.2;
}
float differentiate_function(float x){
  return (1/log(10)+log10(x));
}

int main(){
     float x0,aerr;
     int maxitr;     
     cout<<"Enter the maximun iteration:"; 
     cin>>maxitr;
     cout<<"Enter the values of first approximation and aerr(upto five decimal places):"; 
     cin>>x0>>aerr;
 for(int itr=1;itr<=maxitr;itr++)
    { float h,x1;
    h=function(x0)/differentiate_function(x0);
    x1=x0-h;
     cout<<"Solution of function at "<<itr<<"iteration is:"<<setprecision(6)<<fixed<<x1<<endl;
     if(fabs(h)<aerr) 
         { cout<<"Approx root of given function at"<<itr<<"iteration is:"<<setprecision(6)<<fixed<<x1<<endl;
           break;
         }
    else{
       x0-x1;
    }
}
cout<<"*****Made by*****"<<endl<<"Name: Ayush Goyal"<<endl;
cout<<"Branch and section : ECE-A"<<endl;
cout<<"Enrollment no.: 02720802820"<<endl<<"Class roll no.: 27(G1)"<<endl;
}