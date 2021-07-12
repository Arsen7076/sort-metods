#include"sort.hpp"
int qsort (int *mas,int size) {
int i=0;
int j=size-1;
int mid =mas[size/2];
do{
	for(i=0;mas[i]<mid;i++);
	for(j=size-1;mas[j]>mid;j--);
	if(i<=j){
		int tmp =mas [i];
		mas[i]=mas[j];
		j++;
		i--;
	}}while(i<=j);
if(j>0){
qsort(mas,j+1);
}if(i<size){
qsort (&mas[i],size-i);
}
	return *mas;
}
