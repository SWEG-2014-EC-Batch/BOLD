//this is a c++ program that compile the codes  and prepare a menu.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice, num, digit, freq[10] = {0}, original, fact, sum = 0;

    do {
        cout << "\nMenu\n";
        cout << "--------------------\n";
        cout << "1. Check whether a number is palindrome or not.\n";
        cout << "2. Find the frequency of each digit in a given integer and print it in table format.\n";
        cout << "3. Check whether a number is Armstrong or not.\n";
        cout << "4. Check whether a number is Strong or not.\n";
        cout << "5. Check whether a number is Perfect number or not.\n";
        cout << "6. Exit.\n";
        cout << "--------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                {// Palindrome
                cout << "\nEnter a number: ";
                cin >> num;

                original = num;
                int rev = 0;
                while(num != 0) {
                    rev = rev * 10 + num % 10;
                    num /= 10;
                }

                if(original == rev) {
                    cout << original << " is a palindrome number.";
                }
                else {
                    cout << original << " is not a palindrome number.";
                }
                }
                break;

            case 2:
                // Frequency Table
                {cout << "\nEnter a number: ";
                cin >> num;

                while(num != 0) {
                    digit = num % 10;
                    freq[digit]++;
                    num /= 10;
                }

                cout << "\nDigit Frequency\n";
                for(int i = 0; i < 10; i++) {
                    if(freq[i] != 0) {
                        cout << "  " << i << "     " << freq[i] << endl;
                    }
                }
                }
                break;

            case 3:
                // Armstrong
               {
                cout << "\nEnter a number: ";
                cin >> num;

                original = num;
                sum = 0;
                while(num != 0) {
                    digit = num % 10;
                    sum += pow(digit, 3);
                    num /= 10;
                }

                if(original == sum) {
                    cout << original << " is an Armstrong number.";
                }
                else {
                    cout << original << " is not an Armstrong number.";
                }
                }
                break;

            case 4:
                // Strong
                {cout << "\nEnter a number: ";
                cin >> num;

                original = num;
                sum = 0;
                while(num != 0) {
                    fact = 1;
                    digit = num % 10;
                    for(int i = 1; i <= digit; i++) {
                        fact *= i;
                    }
                    sum += fact;
                    num /= 10;
                }

                if(original == sum) {
                    cout << original << " is a Strong number.";
                }
                else {
                    cout << original << " is not a Strong number.";
                }
                }
                break;

            case 5:
                 // Perfect
                 {cout<<"\nEnter a number : ";
                 cin>>num;
                 sum=0;
                 for(int i=1;i<num;i++)
                 {
                     if(num%i==0)
                     {
                        sum=sum+i;
                     }
                 }
                 if(sum==num)
                 {
                     cout<<"\nThis is a Perfect Number!";
                 }else{
                      cout<<"\nThis is not a Perfect Number!";
                 }
                 }
		break;

            case 6:
                // Exit
                return 0;

            default:
                // Invalid Choice
                cout << "\nInvalid choice! Please try again.";
        }

    } while (choice != 6);

    return 0;
}
