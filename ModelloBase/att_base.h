#ifndef ATT_BASE_H
#define ATT_BASE_H


class att_base
{
private:
    int cal;
public:
    /**
     * @brief int numero di calorie usate per attivita
     */
    att_base(int =0);
    virtual int calorie()const{return cal;}
};

#endif // ATT_BASE_H
