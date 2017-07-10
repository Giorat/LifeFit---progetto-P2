#include "bambino.h"

bambino::bambino(const int codU,const std::string &n,const std::string &cn, QDate dN,bool s,QString pass):utente(codU,n,cn,dN,s,pass){}

 bambino* bambino::clone() const{
   return new bambino(*this);
 }
 bool bambino::aggiungiAttivita() const{
   return false;
 }
 int bambino::passiConsigliati() const{
   return 5000;
 }
 bool bambino::settingsEnabled() const{
   return false;
 }
 QString bambino::nomeGruppo() const{
   return "bambino";
 }
 int bambino::codiceGruppo() const{
   return 1;
 }
 QColor bambino::coloreGruppo()const{
    return QColor(255,204,255);
 }
 bool bambino::viewCalendar()const{
     return false;
 }
