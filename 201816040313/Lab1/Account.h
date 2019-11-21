// Lab 1: Account.h
// Definition of Account class.

class Account
{
public:
   Account( int ); // constructor initializes balance
   void credit( int ); // add an amount to the account balance
   int debit( int );//take an amount to the balance
   int getBalance(); // return the account balance
private:
   int balance; // data member that stores the balance
}; // end class Account



