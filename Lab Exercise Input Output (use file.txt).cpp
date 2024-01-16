//AHMAD ZIYAAD BIN MOHD ABBAS
//A23CS0206
//6/1/2024
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

const int listoffahren=8;
float fahren[listoffahren];
int numread=0;
float celcius[listoffahren];
float sumofarray=0.0;
float avg;
char desc[listoffahren];
int numofH,numofM,numofL;

void readFile()
{
	ifstream temps;
	temps.open("file.txt");
	
	for(numread=0;numread<listoffahren;numread++)
	{
		temps>>fahren[numread];
	}	
	temps.close();
}

void computeC()
{
	for(numread=0;numread<listoffahren;numread++)
	celcius[numread]=(fahren[numread]-32.0)*(5.0/9.0);
}

float average(float celcius[],int listoffahren)
{
	for(numread=0;numread<listoffahren;numread++)
	{
		sumofarray+=celcius[numread];
	}
	float avg=sumofarray/8.0;
	return avg;
}

void grade()
{
	for(numread=0;numread<listoffahren;numread++)
	{
		if(celcius[numread]>=35.0)
		{
		desc[numread]='H';
		numofH++;
	    }
		else if((celcius[numread]>=20)&&(celcius[numread]<35.0))
		{
		desc[numread]='M';
		numofM++;
	    }
		else
		{
		desc[numread]='L';
		numofL++;
	    }
	}
}

void writeFile()
{
	ofstream content;
	content.open("content.txt");
	
	content<<"   C(Celcius)      F(Farenheit)            Description   \n";
	content<<"   ==========      ============            ===========   \n";
	
	for(numread=0;numread<listoffahren;numread++)
	{
	content<<fixed<<setprecision(2)<<setw(12)<<celcius[numread]<<setw(17)<<fahren[numread]<<setw(20)<<desc[numread]<<"\n";
	}
	content.close();
}

int main()
{
	
	readFile();
	computeC();
	grade();
	avg=average(celcius,listoffahren);
	cout<<fixed<<setprecision(1)<<"Average of the temperature in Celcius: "<<avg<<"\n";
	cout<<"Number of high temperature: "<<numofH<<"\n";
	cout<<"Number of medium temperature: "<<numofM<<"\n";
	cout<<"Number of low temperature: "<<numofL;
	writeFile();
	return 0;
}

