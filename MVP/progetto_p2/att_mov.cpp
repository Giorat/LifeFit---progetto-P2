#include "att_mov.h"

/**
 * @param int numero di calorie
 * @param int numero di passi
 * @param float distanza percorsa
 * @param float perc_camminata
 */
att_mov::att_mov(unsigned int cal,unsigned int pass,float distperc,float percamm,unsigned int p):att_base(cal),passi(pass),dist(distperc),perc_camminata(percamm),piani(p){
}

unsigned int att_mov::totale_passi() const{return passi;}
float att_mov::camminata() const{ return perc_camminata;}
float att_mov::inattivo() const{ return 100-camminata();}
float att_mov::distanza() const{ return dist;}
unsigned int att_mov::piani_fatti(){return piani;}

int att_mov::operator==(const att_mov &g) const
{
   if(!(this->dist == g.dist)) return 0;
   if(!(this->passi == g.passi)) return 0;
   if(!(this->perc_camminata == g.perc_camminata)) return 0;
   if(!(this->piani == g.piani)) return 0;
   return 1;
}


std::ostream& operator<<(std::ostream &output, const att_mov &s)
{

   output << static_cast<const att_base&>( s ) <<  "hai fatto "<< s.totale_passi()<< " passi per una distanza di "<< s.distanza() << " km facendo ben "<< s.piani  <<" piani."<<std::endl;

    return output;
}
