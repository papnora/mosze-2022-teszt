#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //pontosvessző hiánya a végén, string duplaaposzrófot igényel
    for (int i = 0;) // hiányos, nincs feltételvizsgálat, végrehajtandó lépés minden iterációban (i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // i< N_ELEMENTS , hibás feltételvizsgálat
    {
        std::cout << "Ertek:" // endline hiánya, pontosvessző hiánya, hiányzik a kiírandó érték változó
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //double 
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //pontosvessző hiánya
    }
    atlag /= N_ELEMENTS;    
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
