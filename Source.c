//Vernon Ng Wen Feng
//TP057910


#include<stdio.h>
#include<conio.h>

///declare functions
int menu();
int submenu1();
int submenu2();
int and();
int or();
int not();
int nand();
int nor();
int decoder();
int menuorexit();


//main function
main()
{
	printf("Welcome to this program.\n\nThis program will allow you to display truth table of different logic circuit with given inputs.");
	menu();
	_getch();
}

//main menu function
int menu()
{
	int opt;
	printf("\n\n===Main Menu===\nHere are your options:\n1. Logic Gates\n2. Combinational Circuit\n3. Exit");// display options
	printf("\nKindly enter your choice:");// ask user enter option
	scanf("%d", &opt);

	switch (opt)
	{
		//Logic gate submenu
	case 1:
		submenu1();
		break;

		// combinational circuit submenu

	case 2:
		submenu2();
		break;

		//terminate the program
	case 3:
		printf("\n\nClosing Program....");
		exit();

		//if user entered invalid option, ask user to enter again
	default:
		while (getchar() != '\n');//clear input
		printf("\nYou entered an invalid option.\nPlease Try Again.\n\n");
		menu();
		break;
	}
}

//Logic gate submenu function
int submenu1()
{
	int opt2;
	printf("\n\n===Logic gate sub menu===\nWhich logic gate operation you want to perform?:\n1)\tAND\n2)\tOR\n3)\tNOT\n4)\tNAND\n5)\tNOR\n6)\tGoto Menu"); //Display logic gate options to user.
	printf("\nKindly enter your choice:");
	scanf("%d", &opt2);// read input from user
	switch (opt2)
	{
		//AND Logic gate
	case 1:
		and();//call AND gate function
		menuorexit();
		break;

		// OR Logic gate
	case 2:
		or();//call OR gate function
		menuorexit();
		break;

		//NOT Logic gate
	case 3:
		not();//call NOT gate function
		menuorexit();
		break;

		//NAND Logic gate
	case 4:
		nand();
		menuorexit();
		break;

		//NOR Logic Gate
	case 5:
		nor();
		menuorexit();
		break;

		//goto main menu
	case 6:
		printf("\n\nReturning to Main Menu.\n\n");
		menu();
		break;

	default:
		while (getchar() != '\n');//clear input
		printf("\n\nYou entered an invalid option.\nPlease Try Again.\n\n");
		submenu1();
		break;
	}
}


//AND gate function
int and()
{
	int input, input2, output;
	printf("\n\nPerforming AND Logic Gate operation.\n");
	printf("ENTER INPUT AS 1 OR 0 (1 AS HIGH AND 0 AS LOW)");
	printf("\nEnter your first input:");
	scanf("%d", &input);
	while (input != 0 && input != 1) // loop code inside, until the condition is true
	{
		while (getchar() != '\n');//clear input
		printf("You entered an INVALID input, please enter 1 OR 0 as input:");
		scanf("%d", &input);
	}
	printf("Enter your second input:");
	scanf("%d", &input2);
	while (input2 != 0 && input2 != 1)
	{
		while (getchar() != '\n');//clear input
		printf("You entered an INVALID input, please enter 1 OR 0 as input:");
		scanf("%d", &input2);
	}
	output = input & input2;// produce output for AND gate with provided input

	printf("\n\nThe truth table of AND gate with given input is shown below\n\n");// display truth table to user, with given input
	printf("\t\tTruth Table");
	printf("\n\nINPUT\t\tINPUT2\t\tOUTPUT");
	printf("\n%d\t\t%d\t\t%d", input, input2, output);
}


//OR gate function
int or()
{
	int input, input2, output;
	printf("\n\nPerforming OR Logic Gate operation.\n");
	printf("ENTER INPUT AS 1 OR 0 (1 AS HIGH AND 0 AS LOW):");
	printf("\nEnter your first input:");
	scanf("%d", &input);
	while (input != 0 && input != 1)// loop code inside, until the condition is true
	{
		while (getchar() != '\n');//clear input
		printf("Please enter a valid input:");
		scanf("%d", &input);
	}
	printf("Enter your second input:");
	scanf("%d", &input2);
	while (input2 != 0 && input2 != 1)// loop code inside, until the condition is true
	{
		while (getchar() != '\n');//clear input
		printf("Please enter a valid input:");
		scanf("%d", &input2);
	}

	output = input | input2;

	printf("\n\nThe truth table of OR gate with given input is shown below\n\n");
	printf("\t\tTruth Table");
	printf("\n\nINPUT\t\tINPUT2\t\tOUTPUT");
	printf("\n%d\t\t%d\t\t%d", input, input2, output);
}


//NOT gate Function
int not()
{
	int input, output;
	printf("\n\nPerforming NOT Logic Gate operation.\n");
	printf("ENTER INPUT AS 1 OR 0 (1 AS HIGH AND 0 AS LOW):");
	printf("\nEnter your first input:");
	scanf("%d", &input);
	while (input != 0 && input != 1)
	{
		while (getchar() != '\n');//clear input
		printf("Please enter a valid input:");
		scanf("%d", &input);
	}

	if (input == 0)
	{
		output = 1;
	}
	else
	{
		output = 0;
	}

	printf("\n\nThe truth table of NOT gate with given input is shown below\n\n");
	printf("\tTruth Table");
	printf("\n\nINPUT\t\tOUTPUT");
	printf("\n%d\t\t%d", input, output);
}


//NAND gate Function
int nand()
{
	int input, input2, output;
	printf("\n\nPerforming NAND Logic Gate operation.\n");
	printf("ENTER INPUT AS 1 OR 0 (1 AS HIGH AND 0 AS LOW):");
	printf("\nEnter your first input:");
	scanf("%d", &input);
	while (input != 0 && input != 1)
	{
		while (getchar() != '\n');//clear input
		printf("Please enter a valid input:");
		scanf("%d", &input);
	}
	printf("Enter your second input:");
	scanf("%d", &input2);
	while (input2 != 0 && input2 != 1)
	{
		while (getchar() != '\n');//clear input
		printf("Please enter a valid input:");
		scanf("%d", &input2);
	}

	output = !(input & input2);

	printf("\n\nThe truth table of NAND gate with given input is shown below\n\n");
	printf("\t\tTruth Table");
	printf("\n\nINPUT\t\tINPUT2\t\tOUTPUT");
	printf("\n%d\t\t%d\t\t%d", input, input2, output);
}


//NOR gate Function
int nor()
{
	int input, input2, output;
	printf("\n\nPerforming NOR Logic Gate operation.\n");
	printf("ENTER INPUT AS 1 OR 0 (1 AS HIGH AND 0 AS LOW):");
	printf("\nEnter your first input:");
	scanf("%d", &input);
	while (input != 0 && input != 1)
	{
		while (getchar() != '\n');//clear input
		printf("Please enter a valid input:");
		scanf("%d", &input);
	}
	printf("Enter your second input:");
	scanf("%d", &input2);
	while (input2 != 0 && input2 != 1)
	{
		while (getchar() != '\n');//clear input
		printf("Please enter a valid input:");
		scanf("%d", &input2);
	}

	output = !(input | input2);

	printf("\n\nThe truth table of NOR gate with given input is shown below\n\n");
	printf("\t\tTruth Table");
	printf("\n\nINPUT\t\tINPUT2\t\tOUTPUT");
	printf("\n%d\t\t%d\t\t%d", input, input2, output);
}


//Combinational circuit submenu
int submenu2()
{
	int opt3;
	printf("\n\n===Combinational circuit sub menu===\nWhich logic gate operation you want to perform?:\n1)\tDecoder\n2)\tGoto Menu");
	printf("\nKindly enter your choice:");
	scanf("%d", &opt3);
	switch (opt3)
	{
		//Decoder
	case 1:
		decoder();
		menuorexit();
		break;

		//goto main menu
	case 2:
		printf("\n\nReturning to Main Menu.\n\n");
		menu();
		break;

	default:
		while (getchar() != '\n');//clear input
		printf("\n\nYou entered an invalid option.\nPlease Try Again.\n\n");
		submenu2();
		break;
	}
}


//Decoder function
int decoder()
{
	int input, input2, output, output2, output3, output4;
	printf("\n\nPerforming Decoder operation.\n");
	printf("ENTER INPUT AS 1 OR 0 (1 AS HIGH AND 0 AS LOW):");
	printf("\nEnter your first input:");
	scanf("%d", &input);
	while (input != 0 && input != 1)
	{
		while (getchar() != '\n');//clear input
		printf("Please enter a valid input:");
		scanf("%d", &input);
	}
	printf("Enter your second input:");
	scanf("%d", &input2);
	while (input2 != 0 && input2 != 1)
	{
		while (getchar() != '\n');//clear input
		printf("Please enter a valid input:");
		scanf("%d", &input2);
	}


	output = !input * !input2;
	output2 = !input * input2;
	output3 = input * !input2;
	output4 = input * input2;

	printf("\n\nThe truth table of 2:4 Decoder with given inputs is shown below\n\n");
	printf("\t\t\t\t\t\tTruth Table");
	printf("\n\nINPUT\t\tinput2\t\tOUTPUT\t\tOUTPUT2\t\tOUTPUT3\t\tOUTPUT4");
	printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d", input, input2, output, output2, output3, output4);
}

int menuorexit()
{
	int opt4;
	printf("\n\n=============================\nWould you like to\n1)Return to Main Menu\n2)Exit the Program"); //Display options to user.
	printf("\nKindly enter your choice:");
	scanf("%d", &opt4);// read input from user
	switch (opt4)
	{
		//back to menu
	case 1:
		menu();
		break;

		//Exit program
	case 2:
		exit();
		break;

	default:
		while (getchar() != '\n');
		printf("\n\nYou entered an invalid option.\nPlease Try Again.\n\n");
		menuorexit();
		break;
	}
}