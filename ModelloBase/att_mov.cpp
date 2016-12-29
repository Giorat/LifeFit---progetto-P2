#include "att_mov.h"

/**
 * @param int numero di calorie
 * @param int numero di passi
 * @param float distanza percorsa
 * @param float perc_camminata
 */
att_mov::att_mov(int cal,int pass,float distperc,float percamm):att_base(cal),passi(pass),dist(distperc),perc_camminata(percamm){
}

int att_mov::totale_passi() const{return passi;}
float att_mov::camminata() const{ return perc_camminata;}
float att_mov::inattivo() const{ return 100-camminata();}
float att_mov::distanza() const{ return dist;}
