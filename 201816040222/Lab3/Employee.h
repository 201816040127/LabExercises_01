#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:

    Employee(string, string, int );
    void seta(string );
    string geta();
    void setb(string );
    string getb();
    void setc(int );
    int  getc();
    void displayMessage();
   /* Declare a constructor that has one parameter for each data member */
   /* Declare a set method for the employee's first name */
   /* Declare a get method for the employee's first name */
   /* Declare a set method for the employee's last name */
   /* Declare a get method for the employee's last name */
   /* Declare a set method for the employee's monthly salary */
   /* Declare a get method for the employee's monthly salary */
private:
    string a;
    string b;
    int c;
   /* Declare a string data member for the employee's first name */
   /* Declare a string data member for the employee's last name */
   /* Declare an int data member for the employee's monthly salary */
}; // end class Employee
