#include "Quadratic.h"
#include <math.h>
#include <iostream>

using namespace std;

/* dummy constructor */
Quadratic::Quadratic(double a, double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;

}

/* setter */
int Quadratic::setAll(double a, double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;

    discriminant = findDiscriminant();

    if (discriminant > 0)
    {
        root1 = findRoot('+');
        root2 = findRoot('-');
    }
    else if (discriminant == 0)
    {
        root1 = findRoot('+');
    }
    else if (discriminant < 0)
    {
        throw "!! discriminant is less than zero, there are no real roots !!";
    }
}

/* helper */
double Quadratic::findDiscriminant()
{
    return b*b - 4*a*c;
}

/* calculate solution */
double Quadratic::findRoot(char op)
{
    if (op == '+')
    {
        return (-b + sqrt(discriminant)) / (2*a);
    }

    else if (op == '-')
    {
        return (-b - sqrt(discriminant)) / (2*a);
    }

    else
        throw "!! I passed the wrong operation Quadratic::findRoot() !!";
}

/* output */
int Quadratic::printOutput()
{
    if (discriminant > 0)
    {
        cout << "There are two roots: " << root1 << " and " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        cout << "There is one root: " << root1 << endl;
    }
    else if (discriminant < 0)
    {
        throw "!! discriminant < 0 , this error should have triggered before !!";
    }
}
