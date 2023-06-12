//this is symbol checker c++ program.
#include<iostream>
using namespace std;
int main()

{
	char n;
	cout<<"enter a symbol : ";
	cin>>n;

	 if((n>='0' && n<='9') &&(n%2==0)){

	cout<< "it is even";

	}
	else if((n>='0'&&n<='9') &&(n%2==1))
	{cout<<" it is odd";
	}

else if (n>='a' && n<='z'){
    if ((n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u') || (n == 'A' || n == 'E' || n == 'I' || n == 'O'|| n == 'U'))
    {
        cout << "The character is a vowel and ";
    } else {
        cout << "The character is a consonant and ";
    }
	cout<<"it is lowercase";
}
else if (n>='A' && n<='Z'){
    if ((n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u') || (n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U'))
    {
        cout << "The character is a vowel and ";
    } else {
        cout << "The character is a consonant and ";
    }
	cout<<"it is uppercase";
}
	else {
	    cout<<"it is special character";
	}

return 0;

}
