//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <iostream.h>
#include <cmath>
#include <conio.h>

//---------------------------------------------------------------------------

#pragma argsused
int main()
{    int mass[5];
     int temp;

   for (int i=0;i<5;i++){
   cout << " " <<i+1 << " ";
   cin >> mass[i];
   }
   cout << endl;
   for (int i = 0; i < 5 - 1; i++) {
   for (int j = 0; j < 5 - i - 1; j++) {
   if (mass[j] > mass[j + 1]) {
   temp = mass[j];
   mass[j] = mass[j + 1];
   mass[j + 1] = temp;
   }
   }
   }
   for (int i=0;i<5;++i){
   cout << mass[i];
   }
   cout << endl;
   cout << endl;
   system( "pause" );
   return 0;
}
//---------------------------------------------------------------------------
