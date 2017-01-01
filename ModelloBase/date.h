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
    static date Oggi();//ritorna la data attuale

protected:
    int giorno,mese,anno;
private:
    int daysinmonth[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int GiorniDelMese() const;
    bool Bisestile() const;
    bool data_valida(){
        int legit=0;
        if(anno % 400 == 0 || (anno % 100 != 0 && anno % 4 == 0))
            daysinmonth[1]=29;

           //controllo mese e giorni nel mese
           if (mese<13)
           {
              if( giorno <= daysinmonth[mese-1] )
                legit=1;
           }

           if (legit!=1)
              throw 1;
    return true;
    }; // controlla se la data è valida;
};

#endif // DATE_H
