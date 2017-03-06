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

/* Function Prototypes */
void Usage(void);
int AskQuestion(void);

/* Main Program */
int main(int argc, char *argv[])
{
	/*  Verify User Input */
	if (argc != 3)
	{
		Usage();
	}
	else
	{
		/*  Declare and initialize variables */
		/*  Convert two user inputs to float  */
		float x = atof(argv[1]);
		float y = atof(argv[2]);
		/*  Validate arguments are not characters or zeros */
		if (x == 0)
		{
			Usage();
		}
		else
		{
			/*  Calculate polar coordinates, Call Polar() 
			 *  and Call Showit() */
			/* Call AskQuestion() */
			AskQuestion();
		}
	}
	return 0;
}


/* Function Defenitions */
void Usage(void)
{
	printf("Usage: Please enter two parameters.\n");
	printf("Usage: Parameters must be non-zero floating points.\n");
	return;
}
int AskQuestion(void)
{
	/* Begin Loop for performing more calculations */
	while (1)	
	{
		/*  Declare variable for user input */
		char cont;
		char catch;
		/*  Prompt user if they would like to continue */
		printf("Would you like to perform another calculation (Y/N)?\n");
		printf("Y = 1, N = 0: ");
		/*  Scan users input. Second scan catches enter key*/
		scanf("%c",&cont);
		scanf("%c",&catch);
		/*  If no more calcs, exit loop */
		if (cont == '0')
		{
			break;
		}
		/*  If more calcs, call GetRec(), Polar(), and Showit() */
		else if (cont == '1')
		{
			/*  if (x == 0 || y == 0)
			{
				Usage();
			}  */
			/*  Calculate polar coordinates, Call Polar() 
			 *  and Call Showit() */
		}
		/*  If input is not one or zero, inform user */
		else
		{
			printf("Bad input, try again. \n");
		}
	}
	return 0;
}

