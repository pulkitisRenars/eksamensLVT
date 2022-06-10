#include<iostream>
#include<fstream>
using namespace std;

int pareizi;
int nepareizi;

void infoTest(){
cout<<"INFO";
}

void mainTest(){
pareizi = 0; nepareizi=0;



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
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****Tests par teksta datnēm****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
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