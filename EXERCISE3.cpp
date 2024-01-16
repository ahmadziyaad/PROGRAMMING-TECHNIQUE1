#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
//AHMAD ZIYAAD BIN MOHD ABBAS
//A23CS0206
//EXERCISE 3

 int activecase,totCase,newCase,totDeath,totRecovered,totActive=0,loop,test=-1;
 int numOfStates=0;
 double avg;
 string stateName;
 string highestCase;

void dispStatus()
{
    if (activecase>40)
    cout<<"Status: Red Zone"<<endl<<endl;
    else if((activecase>>21)&&(activecase<<40))
    cout<<"Status: Orange Zone"<<endl<<endl;
    else if((activecase>>1)&&(activecase<<20))
    cout<<"Status: Yellow Zone"<<endl<<endl;
    else
    cout<<"Status: Green Zone"<<endl<<endl;
}
void getInput()
{
    cout<<"Total cases: ";
    cin>>totCase;
    cout<<"New cases: ";
    cin>>newCase;
    cout<<"Total deaths: ";
    cin>>totDeath;
    cout<<"Total recovered: ";
    cin>>totRecovered;
    cout<<endl;
}
void dispOutput()
{
    cout<<"Active Case: "<<activecase<<endl;
}
int calcAverage(int totActive,int numOfStates)
{
        double avg = static_cast<double>(totActive) / numOfStates;
        return avg;
}

int main()
{
   do
   {
   cout<<"<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>"<<endl;
   cout<<"State name: ";
   getline(cin, stateName);
   getInput();
   cout<<"<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>"<<endl;
   activecase= totCase + newCase - totDeath - totRecovered;
   totActive=totActive+activecase;
   dispOutput();
   dispStatus();

   if(test<activecase)
   {
    test=activecase;
    highestCase= stateName;
   }
   
   numOfStates++;

   cout<<"Press <ENTER> to continue..."<<endl<<endl;
   loop=getch();
   cout<<"\n";
   cin.ignore();

   }
   
   while(loop==13);

   cout<<"<<<<<<<<< ACTIVE CASES >>>>>>>>>>"<<endl<<endl;
   cout<<"Total: "<<totActive<<endl;
   cout<<"Highest: "<<test<<" ("<<highestCase<<")"<<endl;
avg = calcAverage(totActive, numOfStates);
   cout<<"Average for 5 states: "<<avg<<endl;

}
