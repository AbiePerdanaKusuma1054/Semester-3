#include <iostream>
#include <conio.h>
#include "stack.h"
#include "queue.h"
using namespace std;
void menuStack(){
	cout<<"\n          Program Pendata Obat yang         "<<endl;
	cout<<"           Masuk ke dalam Box Obat          "<<endl ;
	cout<<" ___________________________________________"<<endl;
	cout<<"|  Menu :                                   |"<<endl;
	cout<<"|  1. Masukkan Obat      2. Keluarkan Obat  |"<<endl;;
	cout<<"|  3. Cek Obat           4. Keluar          |"<<endl;
	cout<<"|___________________________________________|"<<endl;
	cout<<"\nPilihan : ";
}
void menuQueue(){
	cout<<"\n         \nProgram Antrian Rumah Sakit        "<<endl;
	cout<<" ___________________________________________"<<endl;
	cout<<"|  Menu :                                   |"<<endl;
	cout<<"|  1. Ambil Antrian      2. Panggil Antrian |"<<endl;;
	cout<<"|  3. Tampilkan Antrian  4. Keluar          |"<<endl;
	cout<<"|___________________________________________|"<<endl;
	cout<<"\nPilihan : ";
}

int main(){
	Stack s;
	Queue q;
	int x;
	do{
		int menu, choice;
		cout<<"List Menu :\n1. Pendata Obat yang Masuk ke dalam Box Obat\n2. Antrian Rumah Sakit"<<endl;
		cin>>menu;
		system("cls");
		switch(menu){
			case 1 :
				do{
					s.display();
					menuStack();
					cin>>choice;	
					switch(choice) {
						case 1 :
							int data;
							cout<<"Masukkan Nomor Obat = ";
							cin>>data;
							s.push(data);
							break;
						case 2 :
							s.pop();
							break;
						case 3 :
							s.display();
							break;
						case 4:
							break;
						default :
							cout<<"Pilihan Salah"<<endl;
							break;
					}
					getch();
					system("cls");
				}while(choice!=4);
				break;
			case 2 :
				do{
					int data;
					q.display();
					menuQueue();
					cin>>choice;
					switch(choice) {
						case 1 :
							data++;
							q.enqueue(data);
							break;
						case 2 :
							q.dequeue();
							break;
						case 3 :
							q.display();
							break;
						case 4:
							break;
						default :
							cout << "Pilihan Salah" << endl;
					}
					getch();
					system("cls");
				}while(choice!=4);
				break;
			default :
				cout<<"Pilihan Salah"<<endl;
		}
		cout<<"Pilih Program lagi(1.YA/2.NO)? "<<endl;
		cin>>x;
	}while(x==1);
	return 0;
}
