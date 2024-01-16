#include <iostream>
using namespace std;
//AHMAD ZIYAAD BIN MOHD ABBAS
//A23CS0206
//EXERCISE 2
//SET2

int main() {
    int number, digit, prod=0;
    
    cout << "Enter an integer number: ";
    cin >> number;
    
for(prod=1; number>0; number=number/10)
{
            digit = number%10;
            prod = prod*digit;
            if(number == 0)
            cout << digit << " ";
            else
            cout << digit << " * ";	
}
    cout << " = " << prod << "\n";
    
    if (prod % 4 == 0 && prod % 5 == 0 && prod % 7 == 0){
        cout << prod << " is a multiple of 4, 5 and 7";
    }
    else if (prod % 4 == 0 && prod % 5 == 0){
        cout << prod << " is a multiple of 4 and 5";
    }
    else if(prod % 4 == 0 && prod % 7 == 0){
        cout << prod << " is a multiple of 4 and 7";
    }
    else if(prod % 5 == 0 && prod % 7 == 0){
        cout << prod << " is a multiple of 5 and 7";
    }
    else if(prod % 4 == 0){
        cout << prod << " is a multiple of 4";
    }
    else if(prod % 5 == 0){
        cout << prod << " is a multiple of 5";
    }
    else if(prod % 7 == 0){
        cout << prod << " is a multiple of 7";
    }
    return 0;
}
