#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa" << std::endl;//pontosvessző hiánya a végén, string duplaaposzrófot igényel
    for (int i = 0; i < N_ELEMENTS; i++) // hiányos, nincs feltételvizsgálat, végrehajtandó lépés minden iterációban (i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // i< N_ELEMENTS , hibás feltételvizsgálat
    {
        std::cout << "Ertek:"<< b[i]<< std::endl; // endline hiánya, pontosvessző hiánya, hiányzik a kiírandó érték változó
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag; //double 
    for (int i = 0; i < N_ELEMENTS; i++)        //; , helyett
    {
        atlag += b[i]; //pontosvessző hiánya
    }
    atlag /= N_ELEMENTS;    
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
