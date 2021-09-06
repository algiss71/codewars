// Using a scan set
#include <stdio.h>

// function main begins program execution
int main( void )
{
   char z[ 9 ]; // define array z

   printf( "%s", "Enter string: " );
   scanf( "%8[^aeiou]", z ); // search for set of characters

   printf( "The input was \"%s\"\n", z );
} // end main
