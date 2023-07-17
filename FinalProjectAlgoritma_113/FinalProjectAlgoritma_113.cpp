#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* mahasiswa;
	Node* MAX_MAHASISWA;
};
const int MAX_MAHASISWA = ;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

class Mahasiswa
{
public:
	void tambahMahasiswa()
		if (jumlahMahasiswa < MAX_MAHASISWA) {
			cout << "========== TAMBAH MAHASISWA ==========" << endl;
			cout << "NIM : ";
			cin >> NIM[jumlahMahasiswa];
			cin.ignore();
			cout << "Nama : ";
			getline(cin, nama[jumlahMahasiswa]);
			cout << "Jurusan : ";
			getline(cin, jurusan[jumlahMahasiswa]);
			cout << "Tahun Masuk: ";
			cin >> tahunMasuk[jumlahMahasiswa];
			cin.ignore();
			jumlahMahasiswa++;
			cout << "Mahasiswa berhasil ditambahkan!" << endl;
		}
		else {
			cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
		}
	);
	//This function for cout in display of all 
	void tampilkanSemuaMahasiswa();
	cout << "nama mahasiswa" << endl;

	//This function searches the NIM of student
	void algorithmacariMahasiswaByNIM();
	//This function for sort by Tahun Masuk
	void algorithmaSortByTahunMasuk();

	int main() {
		int pilihan;
		do {
			cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
			cout << "1. Tambah Mahasiswa" << endl;
			cout << "2. Tampilkan Semua Mahasiswa" << endl;
			cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
			cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
			cout << "5. Keluar" << endl;
			cout << "Pilihan: ";
			cin >> pilihan;
			cin.ignore();
			switch (pilihan) {
			case 1:
			{
				cout << "Enter a word: ";
				string word;
				cin >> word;
				obj.insert(word);
				break;
			}
			case 2:
			{
				cout << "Enter your choice: ";
				string word;
				cin >> word;
				obj.insert(word);
				break;
			}
			case 3:
			{
				obj.preorder(obj.ROOT);
				break;
			}
			case 4:
			{
				obj.postorder(obj.ROOT);
				return 0;
				break;
			}
			case 5:
				cout << "Terima kasih! Program selesai." << endl;
				break;
			default:
				cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
			}
			cout << endl;
		} while (pilihan != 5);
		return 0;
	}

//2. Algoritma yg digunakan pada studi kasus di atas adalah Binary Search Tree
//3. perbedaan algoritma stack dan queue adalah: algoritma stack kumpulan item yg hanya diakses pada satu ujung, item yg dsisipkan atau yg dihapus dalam stach hanya pada bagian atas. sedangkan algoritma queues menyimpan dan mengambil data sesuai dengan urutan kedatangannya.
//4. algoritma stack digunakan pada saat : Menerapkan panggilan fungsi, Mempertahankan daftar UNDO untuk aplikasi, Memeriksa sarang tanda kurung dalam ekspresi, dan Mengevaluasi Ekspresi
//5. a) 5
//5. b) yang benar adalah preorder