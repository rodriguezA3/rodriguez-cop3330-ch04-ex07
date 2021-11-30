/* ch05 ex07
Quadratic equations are of the form
https://www.mathsisfun.com/quadratic-equation-solver.html#:~:text=Only%20if%20it%20can%20be%20put%20in%20the%20form%20ax2%20%2B%20bx%20%2B%20c%20%3D%200%2C%20and%20a%20is%20not%20zero
To solve these, one uses the quadratic formula:
https://www.mathsisfun.com/quadratic-equation-solver.html#:~:text=calculated%20using%20the-,Quadratic%20Formula%3A,-The%20%22%C2%B1%22%20means%20we
There is a problem, though: if b2–4ac is less than zero, then it will fail.
Write a program that can calculate x for a quadratic equation. Create a
function that prints out the roots of a quadratic equation, given a, b, c.
When the program detects an equation with no real roots, have it print
out a message. How do you know that your results are plausible? Can
you check that they are correct?
*/
#include <iostream>
using namespace std;

#include "Quadratic.h"
#include "Quadratic.cpp"

int main()
{
    cout << "Welcome to quadratic equation solver.\nEnter the values for a, b, and c separated by spaces, then press enter." << endl;

    double a;
    double b;
    double c;

    char input[100];
    Quadratic quad(0, 0, 0);

    fgets(input, 100, stdin);
    try
    {
        if (sscanf(input, "%lf %lf %lf", &a, &b, &c) == 3)
            quad.setAll(a, b, c);
        else
            throw "!! Invalid input. Correct example: 3 4 7 !!";
        if (a == 0)
            throw "!! a cannot be zero !!";
        
    } catch (const char *e) {
        cerr << e << endl;
        exit(-1);
    }

    quad.printOutput();
}