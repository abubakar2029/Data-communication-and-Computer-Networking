#include<iostream>
using namespace std;
void shiftIndexFunc(int originalArr[]){
	int shiftIndex, shiftedArr[5];
	cout<<"Enter no. of indexes to shift : ";
	cin>>shiftIndex;
	if(shiftIndex>4)return;
	
	for(int i=shiftIndex;i<=4;i++){
		shiftedArr[i]=originalArr[i-shiftIndex];
	}
	cout<<"Shifted Array after one operation : ";
	for(int i=0;i<=4;i++){
		cout<<shiftedArr[i]<<" ";
	}
	int length=4; // length of original Array
	cout<<endl;
	for(int i=shiftIndex-1;i>=0;i--){
//		int temp=
		shiftedArr[i]=originalArr[length];
		length--;
	}
	cout<<"Shifted Array : ";
	for(int i=0;i<=4;i++){
		cout<<shiftedArr[i]<<" ";
	}
}
int main() {
	int originalArr[5]= {1,2,3,4,5};
	shiftIndexFunc(originalArr);
	
	return 0;
}