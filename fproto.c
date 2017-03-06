/*
 * =====================================================================================
 *
 *       Filename:  fproto.c
 *       	Usage:  ./fproto.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/04/2017 12:39:24 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Orlando Salas (), orlandosalas@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <math.h>
       
/* Function Prototypes */
void GetRec(double* x, double* y); /* For future use, use px, py, pr, ptheta, etc for
 for better understanding*/
void Polar(double* x, double* y, double* r, double* theta);
void Showit(double* r, double* theta);
/* Main Program */
int main(int argc, char *argv[])
{
	double x, y;
	double r, theta;
	double* px; // stores address of a double (X)
	double* py; // stores address of a double (Y)
	double* pr;
	double* ptheta;

	px = &x; // takes address of doubles (NOT VALUE)
	py = &y;
	pr = &r;
	ptheta = &theta;

	/* The functions below are all expecting the addresses of doubles */
	GetRec(px, py);
	Polar(px, py, pr, ptheta);
	Showit(pr, ptheta);

	return 0;
}


/* Function Defenitions */

void GetRec(double* x, double* y) 
{
	
	printf("Please enter cartensian coordinate for polar conversion (x & y) : ");
	scanf("%lf %lf", &(*x), &(*y)); /* I don't know what happens here..
									I assume that it is expecting pointers..*/

	return;
}


void Polar(double* x, double* y, double* r, double* theta)
{

	*r = sqrt( (*x) * (*x) + (*y) * (*y) );
	*theta = atan( (*y) / (*x) );

	return;
}

void Showit(double* r, double* theta) /* Note: the functions above have px, py etc
Look at main() for clarification*/
{
	printf("Polar: R = %lf, Theta: %lf\nn", *r, *theta);
}
