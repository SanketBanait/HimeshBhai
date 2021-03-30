#include <iostream>
using namespace std;
int main()
{
 int num_copy, num, digit, rev_num = 0;

 cout << "Enter a positive number: ";
 cin >> num;

 num_copy = num;

 do
 {
 digit = num % 10;
 rev_num = (rev_num * 10) + digit;
 num = num / 10;
 }while(num != 0);

 cout <<"The reverse of the number is: "<<rev_num<<endl;

 if (num_copy == rev_num) cout << " The number is a palindrome";
 else cout << " The number is not a palindrome";

 return 0;
}