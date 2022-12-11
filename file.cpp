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
	cout<<"Basarili";
	
}
