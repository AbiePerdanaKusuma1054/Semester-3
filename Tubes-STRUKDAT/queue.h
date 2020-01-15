#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;
#define MAX 15
struct Queue {
	private:
		int data = -1;
		int A[MAX];
	
	public:
		bool isEmpty(){
			if(data == -1)
				return true;
			return false;
		}
		bool isFull(){
			if (data >= 14)
				return true;			
			return false;
		}
	
	void enqueue(int inputData) {
		if(isFull() == false){
			data++;
			A[data] = inputData;
			cout << "No-" << inputData << " masuk ke dalam antrian" << endl;
		}else{
			cout << "Antrian sudah penuh" << endl;
		}
	}
	
	void dequeue(){
		if (isEmpty()){
			cout << "Belum ada antrian" << endl;
		}else{
			cout << "Antrian no-" << A[0] << " silakan menuju ke Ruangan Dokter" << endl;
			for (int i = 0; i <= data; i++){
				A[i] = A[i+1];
			}
			data--;
		}
	}
	
	void display(){
		if (isEmpty()){
			cout << "Jumlah Antrian = 0" << endl;
			cout << "Antrian = Kosong" << endl;
		}else{
			cout << "Jumlah Antrian = " << data + 1 << endl;
			cout << "Antrian = ";
			for (int i = 0; i <= data; i++){
				cout << A[i] << " ";
			}
			cout << endl;
		}
	}
};
#endif
