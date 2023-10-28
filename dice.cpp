#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int dice,bonus,repeat, counter = 0;
    srand(time(0));
    cout << "\n \n";
    cout << "KOCAK DOBO PROGRAM" << endl << endl;
    cout << "Adja meg a kivant dobokocka kodjat es a hozzatartoza modositot, valamint hanyszor akarja dobast ismetelni!" << endl;
    cout << "Peldaul 10(kocka), 3(modosito), 4(ismetles) (4 db 10 oldalu kocka + 3 bonusszal mindegyik eredmeny): " << endl;
    while(true){
        cout << endl;
        cout << "(kocka): ";
        cin >> dice;
        cout << "(modosito): ";
        cin >> bonus;
        cout << "(ismetles): ";
        cin >> repeat;
        do
        {
            cout << rand() % dice + bonus + 1 << " ";
            counter++;
        }while(counter < repeat);
    }
    return 0;
}
