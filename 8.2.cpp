#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int i, j, input;
  char jp[6] = {'d', 'D', 'p', 'P', 's', 'S'};
  int hargasatuan[6], jumbyr, pjk, totbay;
  int nilai1[5];
  int hasil[5];

  // clrscr();
  cout << "GEROBAK FRIED CHIKEN" << endl;
  cout << "--------------------" << endl;
  cout << "KODE   JENIS   HARGA" << endl;
  cout << "--------------------" << endl;
  cout << "  D     DADA   Rp 2500" << endl;
  cout << "  P     PAHA   Rp 2000" << endl;
  cout << "  S     SAYAP  Rp 1500" << endl;
  cout << "--------------------" << endl;
  cout << "Banyak Jenis : ";
  cin >> input;
awal:
  cout << endl;
  for (i = 1; i <= input; i++) {
    cout << "Jenis Ke - " << i << endl;
    cout << "Jenis Potong [D/P/S] : ";
    cin >> jp[i];
    if (jp[i] == 'd' || jp[i] == 'D') {
      cout << "Jenis yang dipesan Dada" << endl;
      hargasatuan[i] = 2500;
    } else if (jp[i] == 'p' || jp[i] == 'P') {
      cout << "Jenis yang di pesan Paha" << endl;
      hargasatuan[i] = 2000;
    } else if (jp[i] == 's' || jp[i] == 'S') {
      cout << "Jenis yang di pesan Sayap" << endl;
      hargasatuan[i] = 1500;
    } else {
      cout << "Kode yang anda masukkan salah, masukan huruf sesuai kode";
      goto awal;
    }
    for (j = 1; j <= 1; j++) {
      cout << "Banyak Potong : ";
      cin >> nilai1[i];
    }
    hasil[i] = (hargasatuan[i] * nilai1[i]);
    jumbyr += hasil[i];
    pjk = 0.10 * jumbyr;
    totbay = pjk + jumbyr;
  }
  cout << endl;
  cout << "------------------------------------------";
  cout << "-------" << endl;
  cout << "No. Jenis         Harga   Banyak   Jumlah " << endl;
  cout << "    Potong        Satuan  Beli     Harga " << endl;
  cout << "------------------------------------------";
  cout << "-------" << endl;

  for (i = 1; i <= input; i++) {
    cout << setiosflags(ios::left) << setw(4) << i;
    cout << setiosflags(ios::left) << setw(14) << jp[i];
    cout << setprecision(2) << setw(8) << hargasatuan[i];
    cout << setprecision(2) << setw(10) << nilai1[i];
    cout << setprecision(2) << setw(8) << hasil[i] << endl;
  }
  cout << "------------------------------------------";
  cout << "-------" << endl;
  cout << "\t\t\t\t\t Jumlah bayar : " << jumbyr << endl;
  cout << "\t\t\t\t\t Pajak 10%    : " << pjk << endl;
  cout << "\t\t\t\t\t Total Bayar  : " << totbay << endl;
  return 0;
}
