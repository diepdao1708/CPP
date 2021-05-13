//Quay lui - BackTrack co dieu kien liet giai bai toan n Hau
#include <iostream>
using namespace std;
int	n, X[100], count=1, col[100], xuoi[100], nguoc[100];
void print(){
	cout << "\n" << count++ << ": ";
	for(int j=1; j<=n; j++) cout << X[j] << " ";
}
void BackTrack(int i){	//Sinh cau hinh bat dau tu X[i]
	for(int j=1; j<=n; j++){
		if(col[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){	
			//cot j chua duoc su dung, duong cheo xuoi i-j+n chua dung,
			//duong cheo nguoc i+j-1 chua duoc su dung
			X[i]=j;			//chap nhan kha nang j: Hau hang i dat o cot j
			col[j]=0;		//danh dau cot j da co Hau
			xuoi[i-j+n]=0;	//danh dau duong cheo xuoi i-j+n da co Hau
			nguoc[i+j-1]=0;	//danh dau duong cheo nguoc i+j-1 da co Hau
			if(i==n)		//Du 1 cau hinh: in
				print();
			else			//Chua du cau hinh: liet ke cac cau hinh bat dau tu X[i+1]
				BackTrack(i+1);
			col[j]=1;		//danh dau cot j chua co Hau
			xuoi[i-j+n]=1;	//danh dau duong cheo xuoi i-j+n chua co Hau
			nguoc[i+j-1]=1;	//danh dau duong cheo nguoc i+j-1 chua co Hau
		}
	}
	return;
}
int main() {
	n=4;
	for(int j=1; j<=2*n-1; j++){	//Khoi tao cac kha nang deu chua su dung
		col[j]=1;	xuoi[j]=1;	nguoc[j]=1;
	}
	BackTrack(1);		//Liet ke tat ca cac cau hinh bat dau tu X[1]
}