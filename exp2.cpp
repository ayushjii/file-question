#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float function(float x);
float regula(float x0, float x1);

float function(float x)
{
  return cos(x) - x * exp(x);
}
float regula(float x0, float x1)
{
  return x0 - ((x1 - x0) / (function(x1) - function(x0))) * function(x0);
}

int main()
{
  int itr = 0, maxitr;
  cout << "Enter the maximun iteration:";
  cin >> maxitr;
  float x0, x1, aerr, x2, x3;
  cout << "Enter the values of a,b and aerr(up-to four decimal places):";
  cin >> x0 >> x1 >> aerr;
  do
  {
    x2 = regula(x0, x1);
    if (function(x0) * function(x2) < 0)
    {
      x1 = x2;
    }
    else
    {
      x0 = x2;
    }
    itr++;
    cout << "Solution of " << itr << " is:" << setprecision(4) << fixed << x2 << endl;
    x3 = regula(x0, x1);
    if (fabs(x3 - x2) < aerr)
    {
      cout << setprecision(4) << fixed << "Solution of the function is: " << x3 << endl;
      break;
    }
  } while (itr <= maxitr);
  if (itr > maxitr)
  {
    cout << "Solution not get!!!!!!" << endl;
  }
  cout << "*****Made by*****" << endl
       << "Name: Ayush Goyal" << endl;
  cout << "Branch and section : ECE-A" << endl;
  cout << "Enrollment no.: 02720802820" << endl
       << "Class roll no.: 27(G1)" << endl;
}