#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;
#define MAX 15
struct Stack {
	private :
		int data = -1;
		int A[MAX];
		
	public :
		bool isEmpty(){
			if(data==-1)
				return true;
			return false;
		}
		
		bool isFull(){
			if(data>=14)
				return true;
			return false;
		}
	void push(int inputData){
		if (isFull()){
			cout<<"Box sudah penuh"<<endl;
		}else{
			data++;
			for(int i=data;i>=0;i--) {
				A[i]=A[i-1];
			}
			A[0]=inputData;
			cout<<"Obat no-"<<inputData<<" dimasukkan ke dalam Box"<<endl;
		}
	}
		
	void pop(){
		if(isEmpty()){
			cout<<"Box masih kosong"<<endl;
		}else{
			cout<<"Obat no-"<<A[0]<<" berhasil dikeluarkan"<<endl;	
			for(int i=0;i<=data;i++) {
				A[i]=A[i+1];
			}
			data--;
		}
	}
		
	void display() {
		if(isEmpty()) {
			cout<<"Total Obat = 0"<<endl;
			cout<<"Obat  = Kosong"<<endl;
		}else{
			cout<<"Total Obat = "<<data+1<<endl;
			cout<<"Obat = ";
			for (int i = 0; i <= data; i++){
				cout << A[i] << " ";				
			}
			cout << endl << endl;;
		}
	}
};
#endif
