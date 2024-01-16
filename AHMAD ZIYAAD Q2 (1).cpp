////////////////////// Test 2, 2023/2024 (Sem 1) //////////////////////
//// QUESTION 2
//// Name:AHMAD ZIYAAD BIN MOHD ABBAS
//// Matric No:A23CS0206
//// Date / Day: 4/1/2024
///////////////////////////////////////////////////////////////////////

// Task 7. Directives, library, header, etc.
#include<iostream>
using namespace std;

int choice,daysoverdue,y;
float latefee,x;


// Task 6. Function prototypes
float calculateLateFees(int daysoverdue);
void displayMenu();
void displayLibraryInfo();
void getUserInput();

// Task 5. Main function
int main()
{
	do
	{
		displayMenu();
		
		if (choice==1)
		{
		getUserInput();
		float latefee=calculateLateFees(daysoverdue);
		cout<<"Late fees: RM"<<latefee<<"\n";
	    }
	    else if(choice==2)
	    displayLibraryInfo();
	    else if(choice==3)
	    cout<<"Exiting the program. Thank you!\n";
	    else
	    cout<<"Invalid choice. Please enter a number between 1 and 3\n";
	}while (choice!=3);
	
	return 0;
}

// Task 1. Function calculateLateFees  
float calculateLateFees(int daysoverdue)
{	
	{
	if ((daysoverdue>0)&&(daysoverdue<=7))
	x=0.50*daysoverdue;
	else if((daysoverdue>7)&&(daysoverdue<=14))
	x=1.00*(daysoverdue-7)+3.50;
	else if(daysoverdue>14)
	x=2.00*(daysoverdue-14)+3.50+7.00;
	else
	x=0.00;
    }
	return x;
}

// Task 2. Function displayMenu 
void displayMenu()
{
	cout<<"************Library Book Checkout System************\n";
	cout<<"1. Calculate Late Fees\n";
	cout<<"2. Display Library Information\n";
	cout<<"3. Quit\n";
	cout<<"Enter your choice (1-3) ";
	cin>>choice;
}

// Task 3. Function displayLibraryInfo 
void displayLibraryInfo()
{
	cout<<"************Library Information************\n";
	cout<<"Library Name: UTM Library\n";
	cout<<"Address: Skudai, Johor\n";
	cout<<"Contact (123) 456 7890\n";
}

// Task 4. Function getUserInput with reference parameter
void getUserInput()
{
	cout<<"Enter the number of days the book is overdue: ";
	cin>>daysoverdue;
}