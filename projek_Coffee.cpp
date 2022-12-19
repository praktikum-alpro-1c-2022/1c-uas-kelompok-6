#include <iostream>
using namespace std;
//Pendeklarasian variabel secara global
int jum_pesan,tot_harga,uang_pembayaran,harga_akhir,ppn;
string nama;
//Menggunakan struct untuk mengelompokkan variabel tipe data berbeda yang dapat di nyatakan lebih dari 1 kali
struct dataCoffee{
    int pesanan,harga,jumlah;
    char ukuran;
    string jenis;
};
//fungsi void tampilan menu
void menu(){
    cout<<"                                             CAFE KELOMPOK 6\n";
    cout<<"                                                  MENU\n";
    cout<<"                             =============================================\n";
    cout<<"                             |ESPRESSO BEVERAGES     tall  grande  venti |\n";
    cout<<"                             |1. Caffe Americano      37     40     42   |\n";
    cout<<"                             |2. Asian Dolce Latte    55     59     61   |\n";
    cout<<"                             |3. Cappuccino           46     51     53   |\n";
    cout<<"                             |4. Caffe Latte          46     51     53   |\n";
    cout<<"                             |5. Caffe Mocha          55     59     61   |\n";
    cout<<"                             |-------------------------------------------|\n";
    cout<<"                             |COFFEE                                     |\n";
    cout<<"                             |1. Freshly Brewed       23     25     27   |\n";
    cout<<"                             |2. Cold Brewed          44     48     50   |\n";
    cout<<"                             |-------------------------------------------|\n";
    cout<<"                             |CHOCOLATE                                  |\n";
    cout<<"                             |Signature Chocolate     49     53     57   |\n";
    cout<<"                             =============================================\n";
}
//fungsi untuk data pelanggan
int dataPelanggan(){
    cout<<"\nMasukkan nama pelanggan: ";
    getline(cin,nama);
    cout<<"Masukkan jumlah jenis pesanan: ";
    cin>>jum_pesan;
}
//fungsi untuk logika pemesanan
int pemesanan(dataCoffee* w){
    for(int i=0;i<jum_pesan;++i){
        cout<<"\nJenis Pesanan(Espresso/Coffee/Choco): ";
        cin>>w[i].jenis;
        if(w[i].jenis=="Choco"||w[i].jenis=="choco"){
            cout<<"Ukuran(t/g/v): ";
            cin>>w[i].ukuran;
            cout<<"Jumlah: ";
            cin>>w[i].jumlah;
        }else if(w[i].jenis=="Coffee"||w[i].jenis=="coffee"){
            cout<<"Pesanan(1-2): ";
            cin>>w[i].pesanan;
            cout<<"Ukuran(t/g/v): ";
            cin>>w[i].ukuran;
            cout<<"Jumlah: ";
            cin>>w[i].jumlah;
        }else if(w[i].jenis=="Espresso"||w[i].jenis=="espresso"){
            cout<<"Pesanan(1-5): ";
            cin>>w[i].pesanan;
            cout<<"Ukuran(t/g/v): ";
            cin>>w[i].ukuran;
            cout<<"Jumlah: ";
            cin>>w[i].jumlah;
        }
    }
}
//fungsi untuk menampilkan pesanan dan menentukan harga
int tampilan_pesanan(dataCoffee* w){
    cout<<" Pelanggan: "<<nama;
    cout<<"\n====================";
    for(int i=0;i<jum_pesan;++i){
        if(w[i].jenis=="Espresso"||w[i].jenis=="espresso"){
            if(w[i].pesanan==1){
                switch(w[i].ukuran){
                    case 't':
                        cout<<"\n Caffe Americano\n ukuran :tall";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=37000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'g':
                        cout<<"\n Caffe Americano\n ukuran :grande";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=40000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'v':
                        cout<<"\n Caffe Americano\n ukuran :venti";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=42000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                }
            }else if(w[i].pesanan==2){
                switch(w[i].ukuran){
                    case 't':
                        cout<<"\n Asian Dolce Latte\n ukuran :tall";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=55000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'g':
                        cout<<"\n Asian Dolce Latte\n ukuran :grande";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=59000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'v':
                        cout<<"\n Asian Dolce Latte\n ukuran :venti";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=61000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                }
            }else if(w[i].pesanan==3){
                switch(w[i].ukuran){
                    case 't':
                        cout<<"\n Cappuccino\n ukuran :tall";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=46000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'g':
                        cout<<"\n Cappuccino\n ukuran :grande";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=51000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'v':
                        cout<<"\n Cappuccino\n ukuran :venti";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=53000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                }
            }else if(w[i].pesanan==4){
                switch(w[i].ukuran){
                    case 't':
                        cout<<"\n Caffe Latte\n ukuran :tall";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=46000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'g':
                        cout<<"\n Caffe Latte\n ukuran :grande";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=51000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'v':
                        cout<<"\n Caffe Latte\n ukuran :venti";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=53000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                }
            }else if(w[i].pesanan==5){
                switch(w[i].ukuran){
                    case 't':
                        cout<<"\n Caffe Mocha\n ukuran :tall";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=55000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'g':
                        cout<<"\n Caffe Mocha\n ukuran :grande";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=59000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'v':
                        cout<<"\n Caffe Mocha\n ukuran :venti";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=61000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                }
            }
        }else if(w[i].jenis=="Coffee"||w[i].jenis=="coffee"){
            if(w[i].pesanan==1){
                switch(w[i].ukuran){
                    case 't':
                        cout<<"\n Freshly Brewed\n ukuran :tall";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=23000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'g':
                        cout<<"\n Freshly Brewed\n ukuran :grande";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=25000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'v':
                        cout<<"\n Freshly Brewed\n ukuran :venti";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=27000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                }
            }else if(w[i].pesanan==2){
                switch(w[i].ukuran){
                    case 't':
                        cout<<"\n Cold Brewed\n ukuran :tall";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=44000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'g':
                        cout<<"\n Cold Brewed\n ukuran :grande";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=48000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'v':
                        cout<<"\n Cold Brewed\n ukuran :venti";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=50000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                }
            }
        }else if(w[i].jenis=="Choco"||w[i].jenis=="choco"){
            switch(w[i].ukuran){
                    case 't':
                        cout<<"\n Signature Chocolate\n ukuran :tall";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=59000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'g':
                        cout<<"\n Signature Chocolate\n ukuran :grande";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=53000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
                    case 'v':
                        cout<<"\n Signature Chocolate\n ukuran :venti";
                        cout<<"\n Jumlah :"<<w[i].jumlah;
                        w[i].harga=57000*w[i].jumlah;
                        cout<<"\n harga :"<<w[i].harga<<endl;
                        break;
            }
        }
    }
}
//fungsi untuk menghitung dan menampilkan harga
int total(dataCoffee* w){
    for(int i=0;i<jum_pesan;++i){
        tot_harga+=w[i].harga;
    }
    ppn=tot_harga*10/100;
    harga_akhir=tot_harga+ppn;
    cout<<"\nTotal Pesanan: "<<tot_harga;
    cout<<"\nPPN: "<<ppn;
    cout<<"\nTotal Bayar: "<<harga_akhir;
    cout<<"\nBayar: ";
    cin>>uang_pembayaran;
    cout<<"Kembalian: "<<uang_pembayaran-harga_akhir;
    cout<<"\n====================\n";
}
int main(){
    menu();
    dataCoffee w[5];
    dataPelanggan();
    pemesanan(w);
    system("cls");
    tampilan_pesanan(w);
    total(w);
    return 0;
}
