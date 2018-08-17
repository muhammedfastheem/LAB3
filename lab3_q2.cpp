//First include in the library

#include<iostream>
using namespace std;
//Write the main function
int main()
{
//Declaring the variables
int x,y,sum,sub,pro,div,remain;
x = 6;
y = 2;
sum =  x + y ; // adding the two numbers
sub =  x - y ; // difference of the two numbers
pro =  x * y ; // product of the two numbers
div =  x / y ; // division of the two numbers
remain = x % y ; // finding the remainder of two numbers
cout << " The numbers are "<< x <<" and "<< y << endl;
cout << " The required arithmetic operations include " << x << y << endl;
cout << " Their sum is " << sum << endl;
cout << " Their difference is " << sub << endl;
cout << " Their product is " << pro << endl;
cout << " Their division is " << div << endl;
cout << " Their remainder on division gives " << remain << endl;

return 0;
}

