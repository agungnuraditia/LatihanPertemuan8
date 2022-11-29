#include <iostream>
using namespace std;
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], krg[100][100],
      kali[100][100], i, j;
  cout << "Masukan Jumlah Baris (between 1 and 100): ";
  cin >> r;
  cout << "Masukan (between 1 and 100): ";
  cin >> c;
  cout << endl << "Masukan matriks pertama: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << "Matriks a" << i + 1 << j + 1 << " : ";
      cin >> a[i][j];
    }
  cout << endl << "Masukan matriks kedua: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << "Matriks b" << i + 1 << j + 1 << " : ";
      cin >> b[i][j];
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
      sum[i][j] = a[i][j] + b[i][j];
  cout << endl << "Penjumlahan kedua matriks: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << sum[i][j] << " ";
      if (j == c - 1)
        cout << endl;
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
      krg[i][j] = a[i][j] - b[i][j];
  cout << endl << "Pengurangan kedua matriks: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << krg[i][j] << " ";
      if (j == c - 1)
        cout << endl;
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
      kali[i][j] = a[i][j] * b[i][j];
  cout << endl << "Perkalian kedua matriks: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << kali[i][j] << " ";
      if (j == c - 1)
        cout << endl;
    }
  return 0;
}
