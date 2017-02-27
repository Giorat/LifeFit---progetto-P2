#ifndef ADMIN_IOFIT_H
#define ADMIN_IOFIT_H


class admin_iofit : public iofit
{
public:

    /**
     * @brief ritorna un array contenente array di utenti con i loro dati fit dai quali ottenere informazioni sul loro fit
     * @param QDate data dal quale caricare le infomazioni degli utenti per garantire accesso limitato rendendo i calcoli più veloci
    */
    utente* loadUtenti(QDate);



};

#endif // ADMIN_IOFIT_H
