/*
 * =====================================================================================
 *
 *       Filename:  ACmilan_hw6_task1.c
 *       	Usage:  ./ACmilan_hw6_task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2017 05:11:42 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Chris Werner (), christopherwerner@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* For Standard Library*/
#include <math.h>

/* Function Prototypes */
void Usage(void);
void Polar(double x, double y, double* pr, double* ptheta);
void Showit(double* pr, double* ptheta);
int AskQuestion(void);
void GetRec(double* px, double* py);

/* Main Program */
int main(int argc, char *argv[])
{
	double x, y, r, theta;
	double* pr;
	double* ptheta;
	double* px; //ONLY USE these in GetRec to modify value of x and y
	double* py;

	px = &x;
	py = &y;
	pr = &r;
	ptheta = &theta;



	/*  Verify User Input */
	if (argc != 3)
	{
		Usage();
	}
	else
	{
		/*  Initialize variables */
		/*  Convert two user inputs to float  */
		x = atof(argv[1]);
		y = atof(argv[2]);
		/*  Validate arguments are not characters or zeros */
		if (x == 0)
		{
			Usage();
		}
		else
		{
			/*  Calculate polar coordinates, Call Polar()*/
			Polar(x, y, pr, ptheta);
			/*  and Call Showit() */
			Showit(pr, ptheta);
			/* Call AskQuestion() */
			//AskQuestion(); // if Y: run GetRec if N: end program
		}
	}
	
	AskQuestion();

	while( AskQuestion() == 1)
	{
		GetRec(px, py);
		Polar(x, y, pr, ptheta);
		Showit(pr, ptheta);
		AskQuestion();
	}
//	AskQuestion();

	return 0;
}


/* Function Defenitions */
void Usage(void)
{
	printf("Usage: Please enter two parameters.\n");
	printf("Usage: First parameter (X) must be non-zero floating point.\n");
	return;
}

void Polar(double x, double y, double* pr, double* ptheta)
{
	*pr = sqrt( (x) * (x) + (y) * (y) );
	*ptheta = atan( (y) / (x) );

	return;
}

void Showit(double* pr, double* ptheta)
{
	printf("Polar: Radius = %lf with Angle %lf\n", *pr, *ptheta);
	
	return;
}

 int AskQuestion(void) // NEEDS REVISION still not correct. I think main looks better now
{
/* Begin Loop for performing more calculations */
	{
		/*  Declare variable for user input */
	int cont;
	int catch;
		/*  Prompt user if they would like to continue */
		printf("Would you like to perform another calculation (Y/N)?\n");
		printf("Y = 1, N = 0: ");
		/*  Scan users input. Second scan catches enter key*/
		scanf("%d",&cont);
		scanf("%d",&catch);
		/*  If no more calcs, exit loop */
		do
		{

		
		if (cont == '0')
		{
			exit(1);
		}
		/*  If more calcs, call GetRec(), Polar(), and Showit() */
		/*  If input is not one or zero, inform user */
		else if(cont == '1')
		{
			continue;
		}
		else
		{
			printf("Bad input, try again. \nY=1, N = 0;\n");
		}
		}
	while(cont != 0 || cont != 1);
	
	return cont;
	}
}

void GetRec(double* px, double* py)
{
	printf("Please enter the X value of your caresian coordinate: ");
	scanf("%lf", &(*px));
	printf("Please enter the Y value of your caresian coordinate: ");
	scanf("%lf", &(*py));

	return;
}
