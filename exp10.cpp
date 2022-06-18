#include <iostream>
using namespace std;
int main(){
    int n,i,j,k;
    float a[10][10],t;
    cout<<"Enter value of n: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the constants and coefficients of Eqn "<<i+1<<" : ";
        for(j=0;j<=n;j++){
            cin>>a[i][j] ;
        }
    }
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            if(j!=i){
                t=a[i][j]/a[j][j];
                for(k=0;k<=n;k++){
                    a[i][k]-=a[j][k]*t;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<"variable "<<i+1<<" is "<<a[i][n]/a[i][i]<<"\n";
    }
     cout<<"*****Made by*****\n Ayush Goyal \nRollNo:27-ECE-A-20\nEnrolllment No:02720802820\n";
    return 0;
}
