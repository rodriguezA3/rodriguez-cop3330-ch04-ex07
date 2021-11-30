/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 adan rodriguez
 */
#ifndef QUADRATIC_H
#define QUADRATIC_H

class Quadratic
{
    double a;
    double b;
    double c;
    double root1;
    double root2;
    double discriminant;

public:
    /* constructor */
    Quadratic(double a, double b, double c);
    /* setter */
    int setAll(double a, double b, double c);
    /* helper */
    double findDiscriminant();
    /* calculate solution */
    double findRoot(char op);
    /* output */
    int printOutput();

};
#endif