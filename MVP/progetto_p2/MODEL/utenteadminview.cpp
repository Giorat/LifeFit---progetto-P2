#include "utenteadminview.h"

utenteAdminView::utenteAdminView(const int codU,const std::string &n,const std::string &cn, QDate dN,bool s,QString pass):utente(codU,n,cn,dN,s,pass){}

 utenteAdminView* utenteAdminView::clone() const{
   return new utenteAdminView(*this);
 }
 bool utenteAdminView::aggiungiAttivita() const{
   return true;
 }
 int utenteAdminView::passiConsigliati() const{
   return 10000;
 }
 bool utenteAdminView::settingsEnabled() const{
   return true;
 }
 QString utenteAdminView::nomeGruppo() const{
   return "utenteAdminView";
 }
 int utenteAdminView::codiceGruppo() const{
   return 100;
 }
 QColor utenteAdminView::coloreGruppo()const{
    return QColor(0,184,68);
 }
 bool utenteAdminView::viewCalendar()const{
     return true;
 }
