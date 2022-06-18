#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, arrayx[100], arrayy[100], i, j;
    float nr, dr, x, y;
    cout << "Enter value of n:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter value of x and y at position " << i + 1 << endl;
        cin >> arrayx[i] >> arrayy[i];
    }
    cout << "Enter value of x at which y is to be evaluated\n";
    cin >> x;
    y = 0;
    for (i = 0; i < n; i++)
    {
        nr = 1;
        dr = nr;
        for (j = 0; j < n; j++)
        {
            if (j != i)
            {
                nr = nr * (x - arrayx[j]);
                dr = dr * (arrayx[i] - arrayx[j]);
            }
        }
        y = y + ((nr / dr) * arrayy[i]);
    }
    cout << "at x=" << x << " y=" << y << endl;
    cout << "*****Made by*****\n Ayush Goyal \nRollNo:27-ECE-A-20\nEnrolllment No:02720802820\n";
}
