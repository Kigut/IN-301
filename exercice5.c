#include <stdio.h>

int main() {

int temps,heures,minutes,secondes;
scanf("%d",&temps);

heures = temps/3600;
minutes = temps%3600;
secondes = minutes%60;
minutes = minutes/60;

printf("%d,%d,%d,%d",temps,heures,minutes,secondes);

}
