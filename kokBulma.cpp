#include <iostream>
#include <cmath>   
#include <clocale> 
using namespace std;

  int main(){
    double a, b, c,disk,x1,x2;
    setlocale(LC_ALL,"Turkish");
    
     cout << "ax^2 + bx + c denklemi için a deðerini giriniz: ";
     cin >> a;
     cout << "ax^2 + bx + c denklemi için b deðerini giriniz: ";
     cin >> b;
     cout << "ax^2 + bx + c denklemi için c deðerini giriniz: ";
     cin >> c;

    disk = (b * b) - (4 * a * c);
    cout << "Diskriminant deðeri: " << disk << endl;
     if (disk < 0){
        cout << "reel kök yoktur." << endl;
     }
     else if (disk == 0){
        cout << "Çift kat kök vardýr." << endl;
        x1 = -b / (2 * a);
        cout << " kök: " << x1 << endl;
    }
     else {
         cout << "Ýki farklý reel kök vardýr." << endl;
         x1 = (-b + sqrt(disk)) / (2 * a);
         x2 = (-b - sqrt(disk)) / (2 * a);
         cout << "1. Kök: " << x1 << endl;
         cout << "2. Kök: " << x2 << endl;
    }
}
