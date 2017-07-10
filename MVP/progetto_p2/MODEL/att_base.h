#ifndef ATT_BASE_H
#define ATT_BASE_H
#include <iostream>

class att_base
{
private:
    unsigned int cal;
public:

    /** Costruttore di attivita base solo calorie
     * @param int numero di calorie usate per attivita
     */
    att_base(unsigned int =0);
    virtual unsigned int calorie()const;

    virtual ~att_base(){}
};


#endif // ATT_BASE_H
