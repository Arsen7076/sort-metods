#include"sort.hpp"
void bubble (int* arr,int size){
	for(int i =0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(arr[j]>arr[j+1]){
				int pah=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=pah;
			}
		}
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<", ";
	}	
	cout<<"-----------------------------------------"<<endl;
}
