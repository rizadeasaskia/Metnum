/*	NIM		: 3411151045
	Nama	: Riza Dea Saskia
	Kelas	: SIE A
	Desc	: Tugas 1
*/

//preprocessor
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<math.h>

int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
int pangkat(int a, int b);
void Fungsi(int a, int b);
void menu();


//algoritma
//main driver
int main(){
	int a,b,pilih,hasil,z;
	char opsi;

	Home:
	menu();
	printf("\n Masukkan Pilihan : "); scanf("%d", &pilih);
	switch(pilih){
	case 1:
   	system("cls");
		printf(" ======Pertambahan====== ");
		printf("\n");
		printf("\nMasukkan Nilai 1 : "); scanf("%d", &a);
		printf("Masukkan Nilai 2 : "); scanf("%d", &b);
		hasil = tambah(a,b);
		printf("\nHasilnya Adalah : %d",hasil);
		
		getch();
		system("cls");
		goto Home;
		break;

    case 2:
   	system("cls");
		printf(" ======Pengurangan====== ");
		printf("\n");
		printf("\nMasukkan Nilai 1 : "); scanf("%d", &a);
		printf("Masukkan Nilai 2 : "); scanf("%d", &b);
		hasil = kurang(a,b);
		printf("\nHasilnya Adalah : %d",hasil);
		
		getch();
		system("cls");
		goto Home;
		break;

    case 3:
   	system("cls");
		printf(" ======Perkalian====== ");
		printf("\n");
		printf("\nMasukkan Nilai 1 : "); scanf("%d", &a);
		printf("Masukkan Nilai 2 : "); scanf("%d", &b);
		hasil = kali(a,b);
		printf("\nHasilnya Adalah : %d",hasil);

		getch();
		system("cls");
		goto Home;
		break;

    case 4:
   	system("cls");
		printf(" ======Perpangkatan====== ");
		printf("\n");
		printf("\nMasukkan Nilai : "); scanf("%d", &a);
		printf("Masukkan Nilai pangkat : "); scanf("%d", &b);
		hasil = pangkat(a,b);
		printf("Hasilnya Adalah : %d",hasil);

		getch();
		system("cls");
		goto Home;
		break;

    case 5:
   	system("cls");
		printf(" ======Fungsi====== ");
		printf("\n");
		printf("\nMasukkan Nilai 1 : "); scanf("%d", &a);
		printf("Masukkan Nilai 2 : "); scanf("%d", &b);
		Fungsi(a,b);
		printf("Hasilnya Adalah : 2x^2 - 3x+1 : %d", hasil);

		getch();
		system("cls");
		goto Home;
		break;
    }
}

void menu(){
	int pilih;

	printf(" ======Menu Utama====== ");
	printf("\n 1. Tambah");
	printf("\n 2. Kurang");
	printf("\n 3. Kali");
	printf("\n 4. Pangkat");
	printf("\n 5. Fungsi");
}

int tambah(int a, int b){
	int hasil;
	hasil = a + b;
	return(hasil);
}

int kurang(int a, int b){
	int hasil;
	hasil = a - b;
	return(hasil);
}

int kali(int a, int b){
	int hasil;
	hasil = a * b;
	return(hasil);
}

int pangkat(int a, int b){
	int i,hasil;
	hasil=1;
	for(i=1;i<=b;i++){
		hasil=hasil*a;
	}
	return hasil;
}

void Fungsi(int a, int b){
	int q,hasil;
	for(q=a;q<=b;q++){
		hasil = (2*(q*q)) - ((3*q) + 1);
	}
}
