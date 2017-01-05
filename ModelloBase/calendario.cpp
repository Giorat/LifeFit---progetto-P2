#include "calendario.h"

using namespace std;

// calculate the first day of week for current month
int calendario::getFirstDay(int year,int month){
int fday=getDayCode(year);
int num_days=0; // number of days of the year before the current month
int dCode=getDayCode(year);
switch(month){
case 12: num_days+=30;
case 11: num_days+=31;
case 10: num_days+=30;
case 9: num_days+=31;
case 8: num_days+=31;
case 7: num_days+=30;
case 6: num_days+=31;
case 5: num_days+=30;
case 4: num_days+=31;
case 3: num_days+=28;
case 2: num_days+=31;

}

if(month==1) return(fday);else if((year%4==0) || (year%400==0) && month>2) return (num_days+1+dCode)%7 ;
// leap year

else return (num_days+dCode)%7;}


// calculate the first day of the year
int calendario::getDayCode(int year){
int fday;
fday=(((year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400)+1)%7;
return fday;
}


void calendario::printCar(int year, int month){
int fday_month=getFirstDay(year,month);
int code[7]={0,1,2,3,4,5,6};
char *Day[7]={"Mon","Tues","Wed","Thu","Fri","Sat","Sun"};
char *Month[12]={"January","February","March","April","May","June","Junly","August","September","October","November","December"};

int num_days,i;

if(month==1||month==3||month==5||month==7|| month==8|| month==10|| month==12)
num_days=31;
else if(month==2)
{

; if((year%4==0) || (year%400==0)) num_days=29;else num_days=28;

}

else num_days=30;
cout<<"\n..............";
cout<<"First day of the month:";
cout<<"Mon\t"<<"Tues\t"<<"Wed\t"<<"Thu\t"<<"Fri\t"<<"Sat"<<"Sun\t";
for(i=1;i<=fday_month;i++) cout<<"\t";
int d=1;
int con=0;
while(d<=num_days)
{
cout<<d<<"\t";
if(fday_month>0) {
if(d==7-fday_month) {cout<<"\n";con=d;}
else if(d%(con+7)==0) {cout<<"\n";con=d;}

}

else if(d%7==0) cout<<"\n";

d++;

}

cout<<"\n";
}
