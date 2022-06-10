#include<iostream>
#include<fstream>
#include <stdlib.h>
#include <time.h>  
using namespace std;

int pareizi;
int nepareizi;

string questions[10];



void infoTest(){
cout<<"INFO";
}

void mainTest(){
    srand (time(NULL));
  int answers1[10] = {23,13,13,14,24,12,23,13,1,1};
  int answers2[10] = {32,31,31,41,42,21,32,31,1,1};
  int asked[10];
   questions[0] = "Priekš kā izmanto cout funkciju?\n1 - Ievadīt tekstu konsolē | 2 - Izvadīt tekstu konsolē | 3 - Izvadīt mainīgo vērtību konsolē | 4 - Ievadīt mainīgo vērtību konsolē";
   questions[1] = "Priekš kā izmanto cin funkciju?\n1 - Ievadīt tekstu konsolē | 2 - Izvadīt tekstu konsolē | 3 - Ievadīt mainīgo vērtību konsolē | 4 - izvadīt mainīgo vērtību konsolē";
   questions[2] = "Ar kurām funkcijām var izvadīt tekstu konsolē?\n1 - cout | 2 - System.out.print() | 3 - printf() | 4 - print()";
   questions[3] = "Ar kurām funkcijām var ievadīt tekstu konsolē?\n1 - cin | 2 - Scanner | 3 - input()| 4 - izvadot iepriekš mainīgā saglabāto vērtību";
   questions[4] = "Kam ir domāts ofstream?\n1 - Faila lasīšanai | 2 - Faila atvēršanai programmai | 3 - Faila izdzēšanai | 4 - Faila rakstīšanai";
   questions[5] = "Kam ir domāts ifstream?\n1 - Faila atvēršanai programmai | 2 - Faila lasīšanai | 3 - Faila rakstīšanai | 4 - Faila izdzēšanai";
   questions[6] = "Ko dara ios::app?\n1 - Izdzēš faila saturu | 2 - Neietekmē faila saturu | 3 - Atļauj turpināt faila rakstīšanu bez satura dzēšanas | 4 - Atļauj turpināt faila rakstīšanu ar satura dzēšanu";
   questions[7] = "Kas no piemēriem ir patiesība par string?\n1 - string vertība ir char masīvs | 2 - string vertība ir string masīvs | 3 - Divas string vērtības nevar sasummēt kopā | 4 - Divas string vērtības var sasummēt kopā";
   questions[8] = "b;ank";
   questions[9] = "blank";
pareizi = 0; nepareizi=0;

for(int i = 0;i<10;i++){
cout<<i++<<". jautājums";
cout<<rand() % 10;

}

ofstream writeFile("rezultati.txt",ios::app);
writeFile<<"Pareizie: "<<pareizi<<", Nepareizie: "<<nepareizi<<"\n";
writeFile.close();
}



void results(){
   ifstream readFile("rezultati.txt");
if ( readFile.is_open() ) {
char simbols;
while ( readFile ) {
simbols = readFile.get();
cout << simbols;
}
}

}

int main(){
    char izvele;
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****Tests par teksta datn�m****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
   do{
   cout<<"\n1- Informācija par testu | 2- Sākt testu | 3 - Parādīt iepriekšējos mēģinājuma rezultātu | x - Beigt programmu";
cout<<"\n\n                                             Izvēle: ";cin>>izvele;
switch (izvele)
{
case '1': infoTest();
   break;

case '2':mainTest();
break;

case '3':results();
break;

case 'x': cout<<"Programma beidzas!";
break;
default: cout<<"Nav tādas opcijas";
   break;
}

   }while(izvele!='x');
}