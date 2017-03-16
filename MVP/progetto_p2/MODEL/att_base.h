#ifndef ATT_BASE_H
#define ATT_BASE_H
#include <iostream>

class att_base
{
private:
    unsigned int cal;
public:

    friend std::ostream& operator<<(std::ostream &output, const att_base &s);

    /** Costruttore di attivita base solo calorie
     * @param int numero di calorie usate per attivita
     */
    att_base(unsigned int =0);
    virtual unsigned int calorie()const{return cal;}


};


#endif // ATT_BASE_H
