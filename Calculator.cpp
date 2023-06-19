NOT YET COMPLETED

// Define libraries
#include <iostream>
#include <math.h>

// Define the C++ syntax
using namespace std;

// Define the functions
void Addition ();
void Subtraction ();
void Multiplication ();
void Division ();

// The main program
int main()
{
    Addition ();
    Subtraction ();
    Multiplication ();
    Division ();
}

// creating a funtion called addition
void Addition ()
{
    // Defining Variables
    int A, B, C;
    
    // Getting the Variables Value from the User
    cout << "Enter the Variable A: ";
    cin >> A;
    cout << "Enter the Variable B: ";
    cin >> B;

    // Making a Formula for Addition
    C = A + B;
    
    // Printing the Output
    cout << A << " + " << B << " = " << C << endl;
}

// creating a function called subtraction
void Subtraction ()
{
    // Defining Variables
    int A, B, C;
    
    // Getting the Variables Value from the User
    cout << "Enter the Variable A: ";
    cin >> A;
    cout << "Enter the Variable B: ";
    cin >> B;

    // Making a Formula for Subtraction
    C = A - B;
    
    // Printing the Output
    cout << A << " - " << B << " = " << C << endl;
}

// Creating a funtion called multiplication
void Multiplication ()
{
    // Defining Variables
    int A, B, C;
    
    // Getting the Variables Value from the User
    cout << "Enter the Variable A: ";
    cin >> A;
    cout << "Enter the Variable B: ";
    cin >> B;

    // Making a Formula for Multiplication
    C = A * B;
    
    // Printing the Output
    cout << A << " * " << B << " = " << C << endl;
}

// Creating a funtion called division
void Division ()
{
    // Defining Variables
    int A, B, C;
    
    // Getting the Variables Value from the User
    cout << "Enter the Variable A: ";
    cin >> A;
    cout << "Enter the Variable B: ";
    cin >> B;

    // Making a Formula for Division
    C = A / B;
    
    // Printing the Output
    cout << A << " / " << B << " = " << C << endl;
}
