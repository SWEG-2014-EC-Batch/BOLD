//this is playing with number c++ program.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice, num, digit, freq[10] = {0}, original, fact, sum = 0;

    do {
        cout << "\nMenu\n";
        cout << "--------------------\n";
        cout<<"1.Reverse a number.\n";
        cout<<"2.Count the number of digits in a given number.\n";
        cout<<"3.Find the sum of the digits of the given number.\n";
        cout<<"4.Find the product of even digits of the given number.\n";
        cout<<"5.Prints the first and the last digit of a number and find their sum.\n";
        cout << "6. Check whether a number is palindrome or not.\n";
        cout << "7. Find the frequency of each digit in a given integer and print it in table format.\n";
        cout << "8. Check whether a number is Armstrong or not.\n";
        cout << "9. Check whether a number is Strong or not.\n";
        cout << "10. Check whether a number is Perfect number or not.\n";
        cout << "11. Swap the first and the last digit of the number \n";
        cout << "12. Exit.\n";
        cout << "--------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
                case 1:
                    {//reverse
                    int num, reversed=0,remainder;
                    cout<<"Enter a number ";
                    cin>>num;
                    while(num!=0){
                        remainder= num%10;
                        reversed=reversed*10+remainder;
                        num/=10;
                }
            cout<<" The reversed number is"<<" "<<reversed<<endl;
                    }
                    break;
            case 2:
            {//count digit
            int num, count=0;
            cout << "Enter a number: ";
            cin >> num;

            while(num != 0) {
                num /= 10;
                ++count;
            }

            cout << "Number of digits: " << count;}
            break;
            case 3:
            {//sum of digit
              int num, sum=0, rem;
            cout << "Enter a number: ";
            cin >> num;

            while(num != 0) {
                rem = num % 10;
                sum += rem;
                num /= 10;
            }

            cout << "Sum of digits: " << sum;}
            break;
            case 4:
                //product of even digits
            {
            int num, prod=1, rem;
            cout << "Enter a number: ";
            cin >> num;

            while(num != 0) {
                rem = num % 10;
                if(rem % 2 == 0) {
                    prod *= rem;
                }
                num /= 10;
            }

            cout << "Product of even digits: " << prod;}
            break;
            case 5:
                //first and last digit and their sum.
            {
             int num, first, last, sum;
            cout << "Enter a number: ";
            cin >> num;

            last = num % 10;
            while(num >= 10) {
                num /= 10;
            }
            first = num;

            sum = first + last;

            cout << "First digit: " << first << endl;
            cout << "Last digit: " << last << endl;
            cout << "Sum of first and last digit: " << sum;
            }
            break;

            case 6:
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

            case 7:
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

            case 8:
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

            case 9:
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

            case 10:
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
            case 11:
                //swap
              {
                int num, first_digit, last_digit, new_num, divisor = 1;

                cout << "Enter an integer: ";
                cin >> num;

                last_digit = num % 10;

                while (num / divisor >= 10) {
                    divisor *= 10;
                }

                first_digit = num / divisor;

                new_num = last_digit * divisor + (num % divisor) / 10 * 10 + first_digit;

                cout << "The new number is: " << new_num << endl;
              }

                    break;
            case 12:
                // Exit
                return 0;

            default:
                // Invalid Choice
                cout << "\nInvalid choice! Please try again.";
        }

    } while (choice != 11);

    return 0;
}
