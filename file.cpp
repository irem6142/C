
/*Dosya islemleri*/
#include <iostream>
/*Dosya kutuphanesi*/
#include<fstream>

using namespace std;

int main()
{
	/*ofstream ile dosya aciyoruz*/
	ofstream file;
	file.open("file2.txt");
	file<<"Merhaba bu bir dosya"<<endl;
		file<<"Merhaba"<<endl;
	
	/*Dosya kapatma*/
	file.close();


	/*ifstream ile dosya okuyoruz*/
	ifstream okumaDosyasi;
	okumaDosyasi.open("file2.txt");
	/*Satir satir okuma yapacagiz.*/
	string satir;
	/*Tek bir satırı okumak icin*/
	getline(okumaDosyasi,satir);
	cout<<satir;
	/*Butun hepsini okumak icin*/
	while(getline(okumaDosyasi,satir)){
		cout<<satir<<endl;
	}
	
	
    /*kelime kelime okuma yapacagiz.*/
  
ifstream okumaDosyasi2("file2.txt");
	  string kelime;
    okumaDosyasi2>>kelime;
    cout<<kelime;
    /*Butun hepsini okumak icin*/
    while(okumaDosyasi2>>kelime)
    {
    	cout<<kelime<<endl;
	}
	/* Ya da boyle de yazılabilir ,butun hepsini okumak icin*/

    while(!okumaDosyasi2.eof())
    {
    	okumaDosyasi2>>kelime;
    	cout<<kelime<<endl;
	}
	
    
    
	
	
	
       okumaDosyasi.close();
       okumaDosyasi2.close();
	
	
	
}
