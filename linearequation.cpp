#include <iostream>
#include <cmath>
using namespace std;

const int N = 3;

void ge(double a[N][N + 1])
{
    for (int i = 0; i < N; i++)
    {
        int m = i;
        for (int k = i + 1; k < N; k++)
        {
            if (abs(a[k][i]) > abs(a[m][i]))
            {
                m = k;
            }
        }
        swap(a[i], a[m]);

        double d = a[i][i];
        for (int j = 0; j <= N; j++)
        {
            a[i][j] /= d;
        }

        for (int k = i + 1; k < N; k++)
        {
            double f = a[k][i];
            for (int j = 0; j <= N; j++)
            {
                a[k][j] -= f * a[i][j];
            }
        }
    }

    double x[N];
    for (int i = N - 1; i >= 0; i--)
    {
        x[i] = a[i][N];
        for (int j = i + 1; j < N; j++)
        {
            x[i] -= a[i][j] * x[j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }
}

int main()
{
    double a[N][N + 1];
    cout << "Enter matrix (" << N << "x" << N + 1 << "):\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            cin >> a[i][j];
        }
    }

    ge(a);
    return 0;
}
