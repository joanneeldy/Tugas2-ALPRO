#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int tarif(int a, int b){
    int price = a*b;
    return price;
}

int main()
{
    char kode, C, c, K, k, N, n, ulang;
    int banyak, tarifc=500, tarifk=700, tarifn=1000, total;
    string nama;

    cout << "Perpustakaan Kecil-Kecilan\n";

    cout<<"=========================================\n";
    cout<<"|| KODE BUKU | JENIS BUKU | TARIF BUKU ||\n";
    cout<<"-----------------------------------------\n";
    cout<<"||     C     |   Cerpen   |   Rp 500   ||\n";
    cout<<"||     K     |   Komik    |   Rp 700   ||\n";
    cout<<"||     N     |   Novel    |   Rp 1000  ||\n";
    cout<<"=========================================\n";

    cout << "\nNama Penyewa Buku : ";
    cin >> nama;

    a:
    cout << "\nKode Buku [C/K/N] : ";
    cin >> kode;

    cout << "\nBanyak Pinjam : ";
    cin >> banyak;

    if(kode=='C' || kode=='c'){
        cout << "\nTarif Sewa Rp 500,-";
        cout << "\nJenis Buku : CerPen (Kumpulan Cerita Pendek)";
        cout << "\nPenyewa dengan Nama " << nama;
        total=tarif(banyak, tarifc);
        cout << "\nJumlah Bayar Penyewaan Sebesar Rp " << total << endl;
        {
            cout << "\nApakah Anda ingin menggunakan program ini lagi? Y/N";
            cin >> ulang;
            if(ulang == 'Y' || ulang == 'y'){
            goto a;}
            else{
                goto end;
            }
        }
    }
    else if(kode=='K' || kode=='k'){
        cout << "\nTarif Sewa Rp 700,-";
        cout << "\nJenis Buku : Komik";
        cout << "\nPenyewa dengan Nama " << nama;
        total=tarif(banyak, tarifk);
        cout << "\nJumlah Bayar Penyewaan Sebesar Rp " << total << endl;
        {
            cout << "\nApakah Anda ingin menggunakan program ini lagi? Y/N";
            cin >> ulang;
            if(ulang == 'Y' || ulang == 'y'){
            goto a;}
            else{
                goto end;
            }
        }
    }
    else if(kode=='N' || kode=='n'){
        cout << "\nTarif Sewa Rp 1000,-";
        cout << "\nJenis Buku : Novel";
        cout << "\nPenyewa dengan Nama " << nama;
        total=tarif(banyak, tarifn);
        cout << "\nJumlah Bayar Penyewaan Sebesar Rp " << total << endl;
        {
            cout << "\nApakah Anda ingin menggunakan program ini lagi? Y/N";
            cin >> ulang;
            if(ulang == 'Y' || ulang == 'y'){
            goto a;}
            else{
                goto end;
            }
        }
    }
    else{
        cout << "\nKode buku yang Anda masukkan salah!";
        cout << "\nSilahkan input kembali";
        goto a;
    }

    end:
    cout << "\n===========================================================================";
    cout << "\nTerima kasih telah menggunakan program Perpustakaan Kecil-Kecilan";

    return 0;
}