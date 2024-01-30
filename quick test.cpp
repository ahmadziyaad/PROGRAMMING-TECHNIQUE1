#include<iostream>
#include<cstring>
using namespace std;

const int q=3;
const int a=3; 
int num;

struct Question
{
	string prompt;
	string ans1;
	string ans2;
	string ans3;
	int corans;
};

Question question[q];

void qloader()
{
for(num=0;num<3;num++)
{
	if (num==0)
	{
	question[num].prompt="What is the smallest country";
	question[num].ans1="USA";
	question[num].ans2="India";
	question[num].ans3="Vatican City";
	question[num].corans=3;
    }
	else if(num==1)
	{
	question[num].prompt="Biggest animal";
	question[num].ans1="Elephant";
	question[num].ans2="BW";
	question[num].ans3="GWS";
	question[num].corans=2;
	}
	else
	{
	question[num].prompt="How many elements";
	question[num].ans1="118 e";
	question[num].ans2="119 e";
	question[num].ans3="120 e";
	question[num].corans=1;
	}
}
}

void qprinter(Question question[],int q)
{
	int ans;
	
	for(num=0;num<3;num++)
	{
		cout<<question[num].prompt<<endl;
		cout<<"1. "<<question[num].ans1<<endl;
		cout<<"2. "<<question[num].ans2<<endl;
		cout<<"3. "<<question[num].ans3<<endl;
		cout<<"Choose 1-3: ";
		cin>>ans;
		if ((ans)==(question[num].corans))
		cout<<"Correct!"<<endl<<endl;
		else
		cout<<"Incorrect"<<endl<<endl;
	}
}

int main()
{
qloader();
qprinter(question,q);
return 0;
}
