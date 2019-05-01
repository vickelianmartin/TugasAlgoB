#include <iostream>
#include <math.h>
using namespace::std;

int jnsbrg,hrg,jmlbrg,jml,diskon,totalslrh,total=0;
string brg,nm,cari,namaku;
char mbr;

void belanja(){
    cout<<"\nBerapa jenis barang yang dibeli : ";cin>>jnsbrg;
    for(int i=0;i<jnsbrg;i++){
        cout<<"     Barang ke "<<i+1;
        cout<<"\nNama brg   : ";cin>>brg;
        cout<<"Harga brg  : Rp ";cin>>hrg;
        cout<<"Jumlah brg : ";cin>>jmlbrg;
        jml=hrg*jmlbrg;
        total=total+jml;}
}

void diskonmbr(){
    cout<<"\nTotal belanja     : Rp "<<total;
    diskon=total*0.05;
    totalslrh=total-diskon;
    cout<<"\nDiskon 5%         : Rp "<<diskon;
    cout<<"\nTotal keseluruhan : Rp "<<totalslrh<<endl;
}

main(){
string nomor[5]={"A001","A002","A003","A007","A008"};
string nama[5]={"Bayu","Irvan","Susiati","Diana","Roni"};

cout<<"     M I N I M A R K E T   A N U  \n";
cout<<"\nMember atau Tidak ?\n(y/t)>> : ";cin>>mbr;
if(mbr=='t'){
    cout<<"\nNama Pelanggan : ";cin>>nm;
    belanja();
    cout<<"\nTotal keseluruhan : Rp "<<total<<endl;
}
else if(mbr=='y'){
    cout<<"\nMasukkan nomor identitas : ";cin>>cari;
    for(int a=0;a<5;a++){
        if (cari==nomor[a]){
            namaku=nama[a];
        }
    }
    cout<<"     Anda Member\nNo id : "<<cari<<"\nNama  : "<<namaku<<endl;
    belanja();
    diskonmbr();
  }
}
