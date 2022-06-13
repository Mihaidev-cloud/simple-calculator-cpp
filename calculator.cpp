
#include <iostream>

using namespace std;

int main () {

int x;
int y;
cout << "Scrie primul numar: "; /**< Aici se ia x ca primul nr si dupa y ca al doilea nr */
cin >> x;
cout << "Scrie al doilea numar: ";
cin >> y;

int sum = x + y; /**< aici se calculeaza pt adunare , scadere , impartire si inmultire */
int scaderea = x - y;
int impartire = x / y;
int inmultire = x * y;
cout << "Adunarea rezultatului " << sum ; /**< afisare a toate rezultatelor */
cout << " Scaderea rezultatului " << scaderea ;
cout << " Impartirea rezultatului " << impartire ;
cout << " Inmultirea rezultatului " << inmultire ;


}
