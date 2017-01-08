#ifndef ATT_BASE_H
#define ATT_BASE_H
#include <iostream>

class att_base
{
private:
    int cal;
public:
    friend std::ostream& operator<<(std::ostream &output, const att_base &s);

    /**
     * @brief int numero di calorie usate per attivita
     */
    att_base(int =0);
    virtual int calorie()const{return cal;}


};


#endif // ATT_BASE_H
