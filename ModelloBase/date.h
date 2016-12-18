#ifndef DATE_H
#define DATE_H
#include <iostream>

class date
{
public:
    date(int =1,int = 1,int =0);
    int Giorno() const {return giorno;}
    int Mese() const {return mese;}
    int Anno() const {return anno;}
    void Stampa() const{
        std::cout << Giorno()<<"/"<<Mese()<<"/"<<Anno();
    }
    static date Oggi();

protected:
    int giorno,mese,anno;
private:
    int GiorniDelMese() const;
    bool Bisestile() const;
};

#endif // DATE_H
