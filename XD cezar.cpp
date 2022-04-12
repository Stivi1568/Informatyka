#include <iostream>
#include <string>

using namespace std;

int main()
{
    int przesuniecie;                                                            
    string szyfrogram;                                                          
    cout << "Podaj przesuniecie: ";
    cin >> przesuniecie;                                                       
    cout << "Podaj szyfr : ";
    cin >> szyfrogram;                                           

    cout << "Zakodowana wiadomosc to: " << endl;
    for (char litera : szyfrogram)                                             
    {
        char zakodowana_litera = 65 + (litera - 65 + przesuniecie) % 26;
        cout << zakodowana_litera;                                              
    }

    return 0;
}
