#include "att_base.h"

att_base::att_base(unsigned int calo):cal(calo){}

std::ostream& operator<<(std::ostream &output, const att_base &s)
{
   output <<"Calorie consumate: " << s.calorie() << " --- ";
    return output;
}
