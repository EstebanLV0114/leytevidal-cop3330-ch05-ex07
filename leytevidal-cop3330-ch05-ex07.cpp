#include "leytevidal-cop3330-ch05-ex07.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double Equation(double a, double b, double disc, double sign) 
{
    if(sign)
        return (-b + disc) / (2 * a);
    else
        return (-b - disc) / (2 * a);
}

void ansr(double a, double b, double c) 
{
    double disc = sqrt(pow(b,2) - 4*a*c);
    if(disc > 0) 
    {
        double root1 = Equation(a, b, disc, 1);
        double root2 = Equation(a, b, disc, 0);
        cout << "The roots for this equation are: " << root1 << " and " << root2 << ".\n";
    }
    else if(disc == 0)
        cout << "The root for this equation is: " << -b / (2 * a) << ".\n";

    else
        cout << "No real roots :(\n";
}

int main() 
{
    double a, b, c;
    cout << "Please input the a, b and c for the equation: ";
    cin >> a >> b >> c;
    ansr(a, b, c);
}