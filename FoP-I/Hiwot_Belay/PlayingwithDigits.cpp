#include <iostream>
#include <cmath>
#include <map>
#include <array>
using namespace std;

int main() {
    int choice, num, rev_num = 0, count = 0, sum = 0, prod = 1, first_digit, last_digit, digit=0, temp, freq[10] = {0}, rem, fact = 1;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Press 1 to print the reverse of the number.\n";
    cout << "Press 2 to count the number of digits in the given number.\n";
    cout << "Press 3 to find the sum of the digits of the given number.\n";
    cout << "Press 4 to find the product of even digits of the given number.\n";
    cout << "Press 5 to print the first and the last digit of the number and find their sum.\n";
    cout << "Press 6 to swap the first and the last digit of the number.\n";
    cout << "Press 7 to check whether a number is palindrome or not.\n";
    cout << "Press 8 to find the frequency of each digit in a given integer and print in table format.\n";
    cout << "Press 9 to check if the number is Armstrong or not.\n";
    cout << "Press 10 to Check if the number is Strong or not.\n";
    cout << "Press 11 to Check if the number is Perfect or not.\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: // print the reverse of a number
            while(num > 0) {
                digit = num % 10;
                rev_num = rev_num * 10 + digit;
                num /= 10;
            }
            cout << "The reverse of the number is " << rev_num << endl;
            break;

        case 2: // count the number of digits in the given number
            while(num > 0) {
                num /= 10;
                count++;
            }
            cout << "The number of digits in the given number is " << count << endl;
            break;

        case 3: // find the sum of the digits of the given number
            while(num > 0) {
                digit = num % 10;
                sum += digit;
                num /= 10;
            }
            cout << "The sum of the digits of the given number is " << sum << endl;
            break;

        case 4: // find the product of even digits of the given number
            while(num > 0) {
                digit = num % 10;
                if(digit % 2 == 0) {
                    prod *= digit;
                }
                num /= 10;
            }
            cout << "The product of the even digits of the given number is " << prod << endl;
            break;

        case 5: // print the first and the last digit of the number and find their sum
             last_digit = num % 10;
             while (num >= 10) {
              num /= 10;
    }
              first_digit = num;
              sum = first_digit + last_digit;
              cout << "First digit: " << first_digit << endl;
              cout << "Last digit: " << last_digit << endl;
              cout << "Sum: " << sum << endl;
              break;
         case 6: // Swaps the first and last characters
                temp = num;
                 while (temp != 0) {
                 digit++;
                 temp /= 10;
                  }
                 last_digit = num % 10;
                 first_digit = num / pow(10, digit-1);
                 num -= last_digit;
                 num -= (first_digit * pow(10, digit-1));
                 num += last_digit * pow(10, digit-1);
                 num += first_digit;
                  cout << "New number after swapping first and last digits: " << num << endl;
                break;
          case 7: // Checks whether a number is palindrome or not
                 temp = num; 
                 while (temp > 0) {
                 digit = temp % 10;
                 rev_num = (rev_num * 10) + digit;
                 temp /= 10;
                 }
                 if (num == rev_num)
                 cout << num << " is a palindrome";
                else
                  cout << num << " is not a palindrome";
                break;
          case 8: // finds the frequency of each digit in a given integer and print in table format
                 while (num > 0) {
                 digit = num % 10;
                 freq[digit]++;
                  num /= 10;
                   }
                  cout << "Digit Frequency Table:\n";
                  for (int i = 0; i < 10; i++) {
                      cout << i << " : " << freq[i] << endl;
                     }
                     break;
         case 9: // Check if a number is Armstrong or not
                 temp = num;
                sum = 0;
                while(temp > 0) {
                rem = temp % 10;
                sum += rem * rem * rem;
                temp /= 10;
                 }
                if(num == sum)
                cout << "The number is an Armstrong number.\n";
                else
                cout << "The number is not an Armstrong number.\n";
              break;
        case 10: // Check if a number is Strong or not
            temp = num;
            sum = 0;
            while(temp > 0) {
                rem = temp % 10;
                fact = 1;
                for(int i = 1; i <= rem; i++)
                    fact *= i;
                sum += fact;
                temp /= 10;
            }
            if(num == sum)
                cout << "The number is a Strong number.\n";
            else
                cout << "The number is not a Strong number.\n";
            break;
        case 11: // Checks if the number is perfect or not
            temp = num;
            sum = 0;
            for (int i = 1; i < num; i++) {
                if (num % i == 0) {
                    sum += i;
                }
            }
            if (sum == num) {
                cout << num << " is a perfect number.\n";
            }
            else {
                cout << num << " is not a perfect number.\n";
            }
              break;
        default: 
            cout << "Invalid choice." << endl;
}   
  return 0;
}
