#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float function(float x);
float bisection(float a, float b);

float function(float x)
{
  return pow(x, 3) - 4 * x - 9;
}
float bisection(float a, float b)
{
  return (a + b) / 2;
}

int main()
{
  int itr = 0, maxitr;
  cout << "Enter the maximun iteration:";
  cin >> maxitr;
  float a, b, aerr, x, x1;
  cout << "Enter the values of a,b and aerr(up-to four decimal places):";
  cin >> a >> b >> aerr;
  do
  {
    x = bisection(a, b);
    if (function(a) * function(x) < 0)
    {
      b = x;
    }
    else
    {
      a = x;
    }
    itr++;
    cout << "Solution of " << itr << " is:" << setprecision(4) << fixed << x << endl;
    x1 = bisection(a, b);
    if (fabs(x1 - x) < aerr)
    {
      cout << setprecision(4) << fixed << "Solution of the function is: " << x1 << endl;
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