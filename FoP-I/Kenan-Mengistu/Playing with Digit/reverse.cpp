#include <iostream.h>
using namespace std;

int main(){
	int n = 1234;
	cout << "Input:" << n;
	int rev = 0;
	while ( n != 0 ){
		rev = rev * 10;
		rev = rev + (n % 10);
		n = n / 10;
	}
	cout << "\nThe reversed number is " << rev;
	return 0;
}