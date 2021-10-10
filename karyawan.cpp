#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int i;
int size=0;

struct datakaryawan
{
    string nama_depan;
    string nama_belakang;
    int umur;
    string departemen;
    string skill;
};

void tambahdata();
void lihatdata();
void updatedata();
void hapusdata();

struct datakaryawan karyawan[100];

int main()
{
    char Y;
    char choice;
    do
    {
        cout << "\t\t***** MANAJEMEN SISTEM KARYAWAN *****";
        cout << "\n \t\t a) Tambahkan Data Karyawan";
        cout << "\n \t\t b) Tampilkan Data Karyawan";
        cout << "\n \t\t c) Update Data Karyawan";
        cout << "\n \t\t d) Hapus Data Karyawan";
        cout << "\n \t\t e) Exit" << endl;
        cout << "\t\t Pilih menu (a sampai dengan e) : ";
        cin >> choice;
        switch (choice)
        {
            case 'a':
                cout << "\n";
                tambahdata();
                break;
            case 'b':
                cout << "\n";
                lihatdata();
                break;
            case 'c':
                cout << "\n";
                updatedata();
                break;
            case 'd':
                cout << "\n";
                hapusdata();
                break;
            case 'e':
                exit(0);
                break;
            default:
                cout << "Invalid!!!" << endl;
        }
        cout << "\n****** Tekan\'y\'untuk kembali ke menu. \'n\' Exit. ******" << endl;
        cin >> Y;
    }while( Y == 'y' );

    getch();
    return 0;
}

void tambahdata()
{
    char Y;
    i = 0;
    size = 0;
    do
    {
        cout << "*****Tambah Data Baru*****" << endl;
        cout << "Masukkan Nama depan: ";
        cin >> karyawan[i].nama_depan;
        cout << "Masukkan Nama belakang: ";
        cin >> karyawan[i].nama_belakang;
        cout << "Masukkan umur: ";
        cin >> karyawan[i].umur;
        cout << "Masukkan Keahlian: ";
        cin >> karyawan[i].skill;
        cout << "Masukkan nama departemen: ";
        cin >> karyawan[i].departemen;

        cout<<"Apa masih mau menambahkan data ? (n/y)";
        cin>>Y;
        i++;
        size++;
    } while( Y == 'y' );
}

void lihatdata()
{
    cout << "**********************List Data Karyawan**********************" << endl;
    cout << "Nama Depan\tNama Belakang\tUmur\tSkill\tDepartemen\t\n";
    for (int i = 0; i < size; i++)
        cout << karyawan[i].nama_depan 
             << "\t\t" << karyawan[i].nama_belakang 
             << " \t" << karyawan[i].umur 
             << " \t" << karyawan[i].skill 
             << "\t\t" << karyawan[i].departemen << "\n";
}

void updatedata()
{
    cout << "Masukkan No Id Karyawan" << endl;
    cin >> i;
    if( i == i )
    {
        cout << "*****Update Data*****" << endl;
        cout << "Masukkan Nama Depan: ";
        cin >> karyawan[i].nama_depan;
        cout << "Masukkan Nama Belakang: ";
        cin >> karyawan[i].nama_belakang;
        cout << "Masukkan umur: ";
        cin >> karyawan[i].umur;
        cout << "Masukkan skill: ";
        cin >> karyawan[i].skill;
        cout << "Masukkan nama departemen: ";
        cin >> karyawan[i].departemen;
        cout << "*****Data Telah DI Update*****";
    }
}

void hapusdata()
{
    cout << "Masukkan Id Karyawan yang ingin dihapus " << endl;
    cin >> i;
    if( i == i)
    {
        karyawan[i].nama_depan = ' ';
        karyawan[i].nama_belakang = ' ';
        karyawan[i].umur = ' ';
        karyawan[i].umur = ' ';
        karyawan[i].skill = ' ';
        karyawan[i].departemen = ' ';
    }
    cout << "*****Data Telah DiHapus*****" << endl;
}
