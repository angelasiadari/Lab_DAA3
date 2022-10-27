#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

struct data_mhs {
  int no;
  string nama;
  string nim;
  string tgl_lhr;
  string jlh_matkul;
};

int jlh_mhs = 0;
struct data_mhs mahasiswa[125];

void read();
void create();
void update();
void remove();

int main() {
  while (true) {
  	cout<<"------------------------------\n";
    cout<<"    Program Crud Mahasiswa    \n";
    cout<<"------------------------------\n";
    cout<<"1. Menambahkan data mahasiswa\n";
    cout<<"2. Menampilkan daftar mahasiswa\n";
    cout<<"3. Memperbaharui data mahasiswa\n";
    cout<<"4. Menghapus data mahasiswa\n";
    cout<<"5. Selesai\n";
    cout<<"------------------------------\n";
    
    int pil;
    cout<<"Ketik (1-6): ";
    cin>>pil;
    cout<<"\n";
    switch (pil) {
      case 1: create();
        break;
      case 2: read();
        break;
      case 3: update();
        break;
      case 4: remove();
        break;
      default:
        return 0;
    }
  }
}

void new_data(int no) {
  fflush(stdin);
  cout<<"------------------------------\n";
  cout<<"    Tambah Data Mahasiswa     \n";
  cout<<"------------------------------\n";
  printf("Nama: ");
  getline(cin, mahasiswa[no].nama);

  printf("NIM: ");
  getline(cin, mahasiswa[no].nim);

  printf("Tanggal Lahir: ");
  getline(cin, mahasiswa[no].tgl_lhr);

  printf("Jumlah Mata Kuliah: ");
  getline(cin, mahasiswa[no].jlh_matkul);
  }

void create() {
  new_data(jlh_mhs);
  mahasiswa[jlh_mhs].no = jlh_mhs + 1;
  jlh_mhs++;
}

void read() {
  cout<<"------------------------------\n";
  cout<<"       Data Mahasiswa         \n";
  cout<<"------------------------------\n";
  puts("+-------------------------------------------------------+");
  puts("| No  | Nama\t| NIM\t| Tgl Lahir\t| Jumlah Mata Kuliah\t|");
  puts("+-------------------------------------------------------+");
  for (int i = 0; i < jlh_mhs; i++) {
    if (!mahasiswa[i].no)
      continue;
  printf("| %d   | %s\t| %s\t| %s\t\t| %s\t\t|\n", mahasiswa[i].no, mahasiswa[i].nama.c_str(), mahasiswa[i].nim.c_str(), mahasiswa[i].tgl_lhr.c_str(), mahasiswa[i].jlh_matkul.c_str());
  }
  puts("+-------------------------------------------------------+\n");
}

void update() {
  cout<<"----------------------------------------\n";
  cout<<"    Memperbaharui Data Mahasiswa        \n";
  cout<<"----------------------------------------\n";
  int no;
  cout<<"Nomor mahasiswa: ";
  cin >> no;
  new_data(no - 1);
}

void remove() {
  cout<<"----------------------------------------\n";
  cout<<"    Menghapus Data Mahasiswa        \n";
  cout<<"----------------------------------------\n";
  int no;
  cout<<"No mahasiswa yang ingin dihapus: ";
  cin >> no;
  no--;
  mahasiswa[no].no = 0;
  mahasiswa[no].nama = "";
  mahasiswa[no].nim = "";
  mahasiswa[no].tgl_lhr = "";
  mahasiswa[no].jlh_matkul = "";
  }


