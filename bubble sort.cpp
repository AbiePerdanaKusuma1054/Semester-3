/*#include<iostream>
using namespace std;
int main(){
    int n,temp;
    int A[n];
    cout<<"Berapa data gan =";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Masukkan angka =";cin>>A[i];
    }
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-1;k++){
        	if(A[k]>A[k+1]){
        		int temp=A[k];
        		A[k]=A[k+1];
        		A[k+1]=temp;
			}
		}
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}*/
/*#include<iostream>			//no 1
using namespace std;
int main(){
    int n=5,temp;
    int A[n]={2,5,7,3,8};
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-1;k++){
            if(A[k]>A[k+1]){
                int temp=A[k];
                A[k]=A[k+1];
                A[k+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}*/
/*#include<iostream>		//yg no 3
using namespace std;
int main(){
    int n,temp=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
        temp=temp+A[i];
    }
    cout<<temp;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n=5,temp=0;
    int A[n]={4,12,3,5,7};
    for(int i=0;i<n;i++){
        temp=temp+A[i];
    }
    cout<<temp;
}*/
