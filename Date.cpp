// Lab 5: Date.cpp
// Member-function definitions for class Date.
#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date

Date::Date( int m, int d, int y )
{
   setDate( m, d, y ); // sets date
} // end Date constructor

void Date::setDate( int mo, int dy, int yr )
{
   setMonth( mo ); // invokes function setMonth
   setDay( dy ); // invokes function setDay
   setYear( yr ); // invokes function setYear
} // end function setDate

void Date::setDay( int d )
{
   if ( month == 2 && leapYear() )
      day = ( d <= 29 && d >= 1 ) ? d : 1;
   else
      day = ( d <= monthDays() && d >= 1 ) ? d : 1;
} // end function setDay

void Date::setMonth( int m )
{
   month = m <= 12 && m >= 1 ? m : 1; // sets month
} // end function setMonth

void Date::setYear( int y )
{
   year = y >= 1900 ? y : 1900; // sets year
} // end function setYear

int Date::getDay()
{
   return day;
} // end function getDay

int Date::getMonth()
{
   return month;
} // end function getMonth

int Date::getYear()
{
   return year;
} // end function getYear

void Date::print()
{
   cout << month << '-' << day << '-' << year << '\n'; // outputs date
} // end function print
 void Date::Nextday()// to define member function nextDay;
 {

     if(month==1&&day==31||month==3&&day==31||month==5&&day==31||month==7&&day==31||month==8&&day==31||month==10&&day==31)
     {
         day=0;
         month=month+1;

     }
     else if(month==4&&day==30||month==6&&day==30||month==9&&day==30||month==11&&day==30)
     {
         day=0;
         month=month+1;

     }
     else if(month==2)
     {
         day=0;
         month=month+1;

     }
     else if(month==12&&day==31)
     {
         day=0;
         month=1;
         year=year+1;

     }
         setDay(day+1);
   }//   method to make sure  if the new day is the start of a new month or a new year



bool Date::leapYear()
{
   if ( getYear() % 400 == 0 || ( getYear() % 4 == 0 && getYear() % 100 != 0 ) )
         return true; // is a leap year
      else
         return false; // is not a leap year
} // end function leapYear

int Date::monthDays()
{
   const int days[ 12 ] =
     { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   return getMonth() == 2 && leapYear() ? 29 : days[ getMonth() - 1 ];
} // end function monthDays