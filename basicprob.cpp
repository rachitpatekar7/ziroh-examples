#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of values: ";
    cin >> n;

    double data[n];
    double sum = 0;

    cout << "Enter the values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
        sum += data[i];
    }

    double mean = sum / n;

    double varSum = 0;
    for (int i = 0; i < n; i++)
    {
        varSum += pow(data[i] - mean, 2);
    }

    double variance = varSum / n;
    double stdDev = sqrt(variance);

    cout << "Mean = " << mean << endl;
    cout << "Variance = " << variance << endl;
    cout << "Standard Deviation = " << stdDev << endl;

    return 0;
}
