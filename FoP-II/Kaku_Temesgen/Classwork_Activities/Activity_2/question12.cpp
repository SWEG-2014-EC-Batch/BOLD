//A c++ program to demonstrate parameter pass by value, address, and pointer.
#include <iostream>

using namespace std;

// function prototype
void calcQuotient (double num1, double num2, double &answer); // parameter pass by value and address
void calcQuotient (double num1, double num2, double *answer); // parameter pass by value and pointer

int main()
{
    double num1, num2, answer;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // call calcQuotient function
    cout<<"parameters num1,and num2 passed by value and parameter answer passed by address"<<endl;
    calcQuotient(num1, num2, answer);   // calling function with parameter by value and by address

    cout<<"==================================================="<<endl;
    cout<<"parameters num1, and num2 passed by value and parameter answer passed by pointer"<<endl;
    calcQuotient(num1, num2, &answer);// calling function with parameter by value and by pointer

    return 0;
}

// function definition
void calcQuotient(double n1, double n2, double &answer)
{
    if(n2==0){
        cout<<"Dividing a number by zero is undefined"<<endl;
    }
    else{
    answer = n1 / n2;
    cout << "The quotient of " << n1 << " divided by " << n2 << " is: " << answer << endl;
    }
}

void calcQuotient(double n1, double n2, double *answer){
   if(n2==0){
    cout<<"Dividing a number by zero is undefined"<<endl;
  }
 else
    {
        *answer = n1/n2;
    cout << "The quotient of " << n1 << " divided by " << n2 << " is: " << *answer << endl;
}
}

