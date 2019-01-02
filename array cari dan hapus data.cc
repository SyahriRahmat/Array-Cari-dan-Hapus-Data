#include <iostream>
#include <conio.h>
using namespace std;
int main (){
    int A[10],jumlah,ganti,hapus,cari,ketemu=0;
    cout<<"Masukkan Jumlah Data Yang Diinginkan = "; cin>>jumlah;

    if (jumlah > 10)
    {
        cout<<"\nMaaf, Maximum Data Adalah 10 Data";
        getch();
        return 0;
    }
    else
    {
        for (int i = 0; i<jumlah;i++){
    cout<<"Masukkan Data Ke-"<<i+1<<" = "; cin>>A[i];
        }
    cout<<"Data Yang Telah Dimasukkan = \n";
    for (int j=0;j<jumlah;j++){
    cout<<"A["<<j<<"]"<<A[j]<<'\n';
    }
}
//MEgubah Data
cout<<"\n\nMasukkan Nilai Yang Hendak Diubah = "; cin>>ganti;
for (int g=0;g<jumlah;g++){
        if (A[g]==ganti){
    cout<<"Masukkan Nilai Baru = "; cin>>A[g];
        }
}
cout<<"\n\nData Setelah Dirubah Adalah = ";
for (int h=0;h<jumlah;h++){
cout<<"\nA["<<h<<"] = "<<A[h];
}

//Mencari Nilai
cout<<"\nMasukkan Nilai Data Yang Dicari = "; cin>>cari;
for (int n=0;n<jumlah;n++){
if (cari==A[n]){
cout<<"\nNilai "<<cari<<" Ditemukan Pada Index = "<<n;
ketemu=1;
break;
}
}
if (ketemu==0)
    cout<<"Maaf Data Yang Anda Cari Tidak Dapat Ditemukan";

// Menghapus Data
cout<<"\nMasukkan Data Yang Akan Dihapus = "; cin>>hapus;
for (int j=0;j<jumlah;j++){
if (hapus==A[j]){
        for (int k =j;k<jumlah;k++){
                A[k]=A[k+1];
        }
        jumlah -=1;
        break;
}
}
cout<<"\n\nData Baru Adalah = ";
for (int p=0;p<jumlah;p++){
cout<<"\nA["<<p<<"] = "<<A[p];
}
getch();
return 0;
}
