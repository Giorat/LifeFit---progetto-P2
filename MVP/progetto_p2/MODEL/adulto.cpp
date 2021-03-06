#include "adulto.h"

adulto::adulto(const int codU,const std::string &n,const std::string &cn, QDate dN,bool s,QString pass):utente(codU,n,cn,dN,s,pass){}

 adulto* adulto::clone() const{
   return new adulto(*this);
 }
 bool adulto::aggiungiAttivita() const{
   return true;
 }
 int adulto::passiConsigliati() const{
   return 10000;
 }
 bool adulto::settingsEnabled() const{
   return true;
 }
 QString adulto::nomeGruppo() const{
   return "adulto";
 }
 int adulto::codiceGruppo() const{
   return 3;
 }
 QColor adulto::coloreGruppo()const{
    return QColor(204,229,255);
 }
 bool adulto::viewCalendar()const{
     return true;
 }
