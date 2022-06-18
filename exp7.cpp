#include<iostream>
#include<cmath>
using namespace std;
float f(float x,float y){
    return x+y;
}
int main(){
    float x0,y0,h,xn,k1,k2,k3,k4,k;
    cout<<"Enter values of x0,y0,h,xn\n";
    cin>>x0>>y0>>h>>xn;
    while(x0<xn){
    k1=h*f(x0,y0);
    k2=h*f(x0+h/2,y0+k1/2);
    k3=h*f(x0+h/2,y0+k2/2);
    k4=h*f(x0+h,y0+k3);
    k=(k1+2*k2+2*k3+k4)/6;
    x0=x0+h;
    y0=y0+k;
    cout<<"at x="<<x0<<" y="<<y0<<endl;
    }
    cout<<"*****Made by*****\nAyush Goyal\nRollNo:27-ECE-A-20\nEnrolllment No:02720802820\n";
    return 0;
}
