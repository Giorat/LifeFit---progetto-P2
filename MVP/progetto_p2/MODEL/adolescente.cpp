#include "adolescente.h"

adolescente::adolescente(const int codU,const std::string &n,const std::string &cn, QDate dN,bool s,QString pass):utente(codU,n,cn,dN,s,pass){}

 adolescente* adolescente::clone() const{
   return new adolescente(*this);
 }
 bool adolescente::aggiungiAttivita() const{
   return false;
 }
 int adolescente::passiConsigliati() const{
   return 8000;
 }
 bool adolescente::settingsEnabled() const{
   return true;
 }
 QString adolescente::nomeGruppo() const{
   return "adolescente";
 }
 int adolescente::codiceGruppo() const{
   return 2;
 }
 QColor adolescente::coloreGruppo()const{
    return QColor(0,184,68);
 }
 bool adolescente::viewCalendar()const{
     return true;
 }
