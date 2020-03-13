//Se crea programa para condicionar fecha
#include <iostream>

int main(void)
{
  int date;
  std:: cout << "inserte el dia del mes:\n";
  
  std:: cin >> date;
 if (date<=0){
   std:: cout <<"no sirve\n";
 }
 
 else if (date==13){
   std:: cout << "bonachon dia\n";
 }
 else if(date>=31) {
   std:: cout << "no sirve tampoco\n";
 }
 else {
   std:: cout << "muerte por snus snus\n";
 }
 return 0;
  
}
  
