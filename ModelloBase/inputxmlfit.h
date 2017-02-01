#ifndef INPUTXMLFIT_H
#define INPUTXMLFIT_H

#include <string>
#include "utente.h"

class inputxmlfit{

public:

   /** Inserimento in input da xml dei dati di un utente nel suo contenitore usato
    * @param string nome del file compresa la directory tutto unito
    * @param utente nel quale inserire le informazioni prese dal relativo file xml scelto
    */
   void inputXMLdatiMovimSleep(std::string,utente&);

   void outputXMLdatiMovimSleep(std::string,const utente&);
};

#endif // INPUTXMLFIT_H
