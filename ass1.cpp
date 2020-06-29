#include<stdio.h>
#define s 20
int mang[s];
void nhapMang(){
	for(int i=0;i<s;i++){
	printf("nhap vao so thu %d:",i+1);
	scanf("%d",&mang[i]);
	}
}
int gtTB(){
	int tong=0;
	for(int i=0;i<s;i++){
		tong+=mang[i];
	}
	return tong/s;
}
int nhoTB(){
	int n=0;
	for(int i=0;i<s;i++){
		if(mang[i]<gtTB())
			n++;
	}
	for(int j=0;j<s;j++){
		if(mang[j]<gtTB())
			printf("So nho hon TB:%d\n",mang[j]);
	}
	
	return n;
}

int main(){
	int mang[s];
	nhapMang();
	printf(" gia tri trung binnh %d\n",gtTB());
	printf("So nho hon gia tri trung binh %d",nhoTB());
	return 0;
}
