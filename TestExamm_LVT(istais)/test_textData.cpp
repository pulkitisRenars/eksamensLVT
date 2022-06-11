#include<iostream>
#include<fstream>
#include <stdlib.h>
#include <time.h>  
using namespace std;

int pareizi;
int nepareizi;

string questions[10];

 int asked[10];
void randoms(int *arr, size_t n)
{
    if (n > 1) 
    {
        size_t i;
        srand(time(NULL));
        for (i = 0; i < n - 1; i++) 
        {
          size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = arr[j];
          arr[j] = arr[i];
          arr[i] = t;
        }
    }
}


void infoTest(){
cout<<"INFO";
}

void mainTest(){

    int s = 1;
  int answers1[10] = {23,13,13,14,24,12,23,13,23,1};
  int answers2[10] = {32,31,31,41,42,21,32,31,32,1};
 int answer;
   questions[0] = "\nPriekš kā izmanto cout funkciju?\n1 - Ievadīt tekstu konsolē |\n2 - Izvadīt tekstu konsolē |\n3 - Izvadīt mainīgo vērtību konsolē |\n4 - Ievadīt mainīgo vērtību konsolē|";
   questions[1] = "\nPriekš kā izmanto cin funkciju?\n1 - Ievadīt tekstu konsolē |\n2 - Izvadīt tekstu konsolē |\n3 - Ievadīt mainīgo vērtību konsolē |\n4 - izvadīt mainīgo vērtību konsolē|";
   questions[2] = "\nAr kurām funkcijām var izvadīt tekstu konsolē?\n1 - cout |\n2 - System.out.print() |\n3 - printf() |\n4 - print()|";
   questions[3] = "\nAr kurām funkcijām var ievadīt tekstu konsolē?\n1 - cin |\n2 - Scanner |\n3 - input()|\n4 - izvadot iepriekš mainīgā saglabāto vērtību|";
   questions[4] = "\nKam ir domāts ofstream?\n1 - Faila lasīšanai |\n2 - Faila atvēršanai programmai |\n3 - Faila izdzēšanai |\n4 - Faila rakstīšanai|";
   questions[5] = "\nKam ir domāts ifstream?\n1 - Faila atvēršanai programmai |\n2 - Faila lasīšanai |\n3 - Faila rakstīšanai |\n4 - Faila izdzēšanai|";
   questions[6] = "\nKo dara ios::app?\n1 - Izdzēš faila saturu |\n2 - Neietekmē faila saturu |\n3 - Atļauj turpināt faila rakstīšanu bez satura dzēšanas |\n4 - Atļauj turpināt faila rakstīšanu ar satura dzēšanu|";
   questions[7] = "\nKas no piemēriem ir patiesība par string?\n1 - string vertība ir char masīvs |\n2 - string vertība ir string masīvs |\n3 - Divas string vērtības nevar sasummēt kopā |\n4 - Divas string vērtības var sasummēt kopā|";
   questions[8] = "\nKas no piemēriem ir patiesība par char?\n1 - char vertība ir vairāku simbolu virkne |\n2 - char vērtību var sasummēt ar string vērtību |\n3 - char vērtība ir jāraksta \" '' \" |\n4 - char vērtība ir jāraksta \" \"\" \"|";
   questions[9] = "\n";
pareizi = 0; nepareizi=0;

 
    int asked[10];
    for (int i=0; i<10; i++){
        asked[i] = i;
    }
    randoms(asked, 10);

for(int i = 0;i<10;i++){
   cout<<"\n----------------------------------------------------------------------------------";
cout<<"\n\n"<<s++<<". jautājums";
cout<<questions[asked[i]];
cout<<"\n\nTava atbilde: ";cin>>answer;
if(answer==answers1[asked[i]]){
  pareizi++;
  cout<<"Pareizi";
}else if (answer == answers2[asked[i]]){
  pareizi++;
  cout<<"Pareizi";
}else if (answer!= answers1[asked[i]] && answer != answers2[asked[i]]){
  nepareizi++;
  cout<<"Nepareizi";
}
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