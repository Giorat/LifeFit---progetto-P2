#ifndef ADMIN_IOFIT_H
#define ADMIN_IOFIT_H

#include "iofit.h"

#include <vector>

class admin_iofit : public iofit
{
public:

    admin_iofit(std::string);

    /**
     * @brief ritorna un array contenente array di utenti con i loro dati fit dai quali ottenere informazioni sul loro fit senza considerare utente root
    */
    std::vector<const utente*> loadUtenti();



};

#endif // ADMIN_IOFIT_H
