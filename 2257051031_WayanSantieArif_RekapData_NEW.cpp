/* Prak Test DDP
Nama	: Wayan Santie Arif
NPM		: 2257051031
Kelas	: D */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int fisika[10], kimia[10], matematika[10], biologi[10];
    char nama[10][10];
    int banyak_data;
    float jumlah[10], jumlah_fisika = 0,jumlah_matematika = 0,jumlah_kimia = 0,jumlah_biologi = 0;
    float rata_siswa[10], rata_fisika, rata_matematika, rata_kimia, rata_biologi;

    cout << "Masukkan banyaknya data : ";
    cin >> banyak_data;

    for (int i = 0; i < banyak_data; i++){
        cout << "----------------------------\n";
        cout << "Data ke - "<< i + 1 << endl;
        cout << "----------------------------\n";
        cout << "Nama Panggilan\t : ";
        cin >> nama[i];
        cout << "Nilai Fisika\t : ";
        cin >> fisika[i];
        cout << "Nilai Matematika : ";
        cin >> matematika[i];
        cout << "Nilai Kimia\t : ";
        cin >> kimia[i];
        cout << "Nilai Biologi\t : ";
        cin >> biologi[i];

        jumlah[i] = fisika[i] + matematika[i] + biologi[i] + kimia[i];
        rata_siswa[i] = jumlah[i] / 4;
        jumlah_fisika = jumlah_fisika + fisika[i];
        jumlah_matematika = jumlah_matematika + matematika[i];
        jumlah_kimia = jumlah_kimia + kimia[i];
        jumlah_biologi = jumlah_biologi + biologi[i];
        rata_fisika = jumlah_fisika / banyak_data;
        rata_matematika = jumlah_matematika / banyak_data;
        rata_kimia = jumlah_kimia / banyak_data;
        rata_biologi = jumlah_biologi / banyak_data;
    }
    
	cout << "\n-----------------------------------------------------------------------------------\n";
	cout << setw(5) << "No" << setw(10) << "Nama"
		 << setw(15) << "Fisika" << setw(20) << "Matematika"
		 << setw(15) << "Kimia" << setw(15) << "Biologi";
	cout << "\n-----------------------------------------------------------------------------------\n";
	
	for (int i = 0; i < banyak_data; i++){
		int no = i+1;
		cout<< setw(5) << no << setw(10) << nama[i]
		<< setw(13) << fisika[i] << setw(18) << matematika[i]
		<< setw(16) << kimia[i] << setw(15) << biologi[i];
	cout<< "\n-----------------------------------------------------------------------------------\n";	
	}


    cout << "\nRata - Rata Tiap Mahasiswa :\n";
    for(int i = 0; i < banyak_data; i++){
        cout << nama[i] << "\t : "<< rata_siswa[i] << endl;
    }

    cout << "\nRata -Rata Mata Kuliah\n";
    cout << "Fisika\t   : " << rata_fisika << endl;
    cout << "Matematika : " << rata_matematika << endl;
    cout << "Kimia\t   : " << rata_kimia << endl;
    cout << "Biologi\t   : " << rata_biologi << endl;



    


    return 0;
}
