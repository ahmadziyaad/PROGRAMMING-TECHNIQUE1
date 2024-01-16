#include <iostream>
using namespace std;
//AHMAD ZIYAAD BIN MOHD ABBAS
//A23CS0206
//EXERCISE 2
//SET1

int main() {
    int number, digit, sum=0;
    
    cout << "Enter an integer number: ";
    cin >> number;
    
do 
{
            int digit = number % 10;
            sum += digit;
            number /= 10;
            if(number == 0)
            cout << digit << " ";
            else
            cout << digit << " + ";	
}while (number != 0);

    cout << " = " << sum << "\n";
    
    if (sum % 3 == 0 && sum % 4 == 0 && sum % 5 == 0){
        cout << sum << " is a multiple of 3, 4 and 5";
    }
    else if (sum % 3 == 0 && sum % 4 == 0){
        cout << sum << " is a multiple of 3 and 4";
    }
    else if(sum % 3 == 0 && sum % 5 == 0){
        cout << sum << " is a multiple of 3 and 5";
    }
    else if(sum % 4 == 0 && sum % 5 == 0){
        cout << sum << " is a multiple of 4 and 5";
    }
    else if(sum % 3 == 0){
        cout << sum << " is a multiple of 3";
    }
    else if(sum % 4 == 0){
        cout << sum << " is a multiple of 4";
    }
    else if(sum % 5 == 0){
        cout << sum << " is a multiple of 5";
    }
    return 0;
}
