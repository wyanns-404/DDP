#include <iostream>
using namespace std;
int main(){
	string Nama,NPM,F,prodi;
	
	cout<<"Nama\t\t: ";
	getline(cin,Nama);
	cout<<"NPM\t\t: ";
	getline(cin,NPM);
	cout<<"Fakultas\t: ";
	getline(cin,F);
	cout<<"Jurusan\t\t: ";
	getline(cin,prodi);
	
	cout<<endl<<endl;
	
	cout<<"-------------------"<<endl;
	cout<<"Konfirmasi Data"<<endl;
	cout<<"-------------------"<<endl;
	
	cout<<"Nama anda\t: "<<Nama<<endl;
	cout<<"NPM anda\t: "<<NPM<<endl;
	cout<<"Fakultas anda\t: "<<F<<endl;
	cout<<"Jurusan anda\t: "<<prodi<<endl;
	
	
	
	
	return 0;
}
