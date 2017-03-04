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
void GetRec(double* x, double* y);
void Polar(double* x, double* y, double* r, double* theta);
void Showit(double* r, double* theta);
/* Main Program */
int main(int argc, char *argv[])
{
	double x, y;
	double r, theta;

	GetRec(&x, &y);
	Polar(&x, &y, &r, &theta);
	Showit(&r, &theta);

	return 0;
}


/* Function Defenitions */

void GetRec(double* x, double* y)
{
	
	printf("Please enter cartensian coordinate for polar conversion (x & y) : ");
	scanf("%lf %lf", &*x, &*y);

	return;
}


void Polar(double* x, double* y, double* r, double* theta)
{
	if( x == 0)
	{
		printf("Your X value cannot be zero, try again\n");
	}
	else
	{
		*r = sqrt( (*x) * (*x) + (*y) * (*y) );
		*theta = atan( (*y) / (*x) );
	}
	return;
}

void Showit(double* r, double* theta)
{
	printf("Polar: R: %lf, Theta: %lf\n", *r, *theta);

	return;
}


