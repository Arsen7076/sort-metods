#include"sort.hpp"
void selection (int* arr,int size){
	int arr2[size];
	for(int i=0;i<size;i++){
		int num=arr[i];
		for(int j=i;j<size;j++){
			if(num>arr[j]){
				num=arr[j];
			}
		}
		arr2[i]=num;
	}
	for(int i=0;i<size;i++){
		cout<<arr2[i]<<", ";
	}
	cout<<"---------------------------------"<<endl;
}
