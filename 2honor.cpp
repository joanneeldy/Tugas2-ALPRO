#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

struct
{
    char nama[20];
    int jam, lembur, harian, total;
}honor[1];

int lembur(int jam)
{
    if(jam >= 8){
        return(jam - 8);
    }
    else{
        return(0);
    }
}

main()
{ 
    int i, no;

    cout << "Input Data Honor Pegawai Honorer\n";
    cout << "PT. ALAKADARNYA\n";

    cout << "\nBanyak karyawan : ";
    cin >> no;

    for (i=1; i<=no; i++)
    {
        cout << "\nData Ke-" << i << endl;
        cout << "Nama Pegawai     : ";
        cin >> honor[i].nama;
        cout << "Jumlah Jam Kerja : ";
        cin >> honor[i].jam;
        cout << endl;

        honor[i].harian = 150000;

        if(honor[i].jam > 8){
            honor[i].lembur = honor[i].jam - 8;
            honor[i].total = honor[i].harian + (5000*honor[i].lembur);
        }
        else if(honor[i].jam < 8){
            honor[i].total = honor[i].jam*15000;
        }
        else{
            honor[i].total = honor[i].harian;
        }
    }

    cout << "\t   Daftar Honor Pegawai Honorer\n";
    cout << "\t         PT. ALAKADARNYA\n";
    cout << endl;
    cout << "==========================================================\n";
    cout << "No.     Nama     Jumlah   \tKelebihan       Jumlah" << endl;
    cout << "       Pegawai  Jam Kerja \tJam Kerja       Honor" << endl;
    cout << "==========================================================\n";

    for (i=1; i<=no; i++)
    {
        cout << i;
        cout << "\t " << honor[i].nama;
        cout << "\t " << honor[i].jam << " jam";
        cout << "\t\t" << lembur(honor[i].jam) << " jam";
        cout << "\t\t" << honor[i].total << endl;
    }

    return 0;
}