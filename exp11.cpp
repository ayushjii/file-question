#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << fixed;
    int n, maxitr, i, j, itr;
    float a[10][10], x[10], aerr, s, maxerr, t, err;
    cout << "Enter no. of equations: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        x[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        cout << "Enter elements of equation " << i + 1 << " : ";
        for (j = 0; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter allowed error and matrix ";
    cin >> aerr >> maxitr;
    for (itr = 1; itr <= maxitr; itr++)
    {
        maxerr = 0;
        for (i = 0; i < n; i++)
        {
            s = 0;
            for (j = 0; j < n; j++)
            {
                if (j != i)
                {
                    s = s + a[i][j] * x[j];
                }
            }
            t = (a[i][n] - s) / a[i][i];
            err = fabs(x[i] - t);
            if (err > maxerr)
            {
                maxerr = err;
            }
            x[i] = t;
        }
        cout << "at iteration " << itr << " the solution is: \n";
        for (i = 0; i < n; i++)
        {
            cout << "x" << i + 1 << "=" << x[i] << endl;
        }
        if (maxerr < aerr)
        {
            cout << "After iteration " << itr << " the final solution is: \n";
            for (i = 0; i < n; i++)
            {
                cout << "x" << i + 1 << "=" << x[i] << endl;
            }
            cout << "*****Made by*****\n Ayush Goyal \nRollNo:27-ECE-A-20\nEnrolllment No:02720802820\n";
            return 0;
        }
    }
    cout << "Solution did not converge";
    cout << "*****Made by*****\n Ayush Goyal \nRollNo:27-ECE-A-20\nEnrolllment No:02720802820\n";
    return 0;
}
