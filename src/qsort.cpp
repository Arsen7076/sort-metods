#include"sort.hpp"
int qsort (int *mas,int size) {
int i=0;
int j=size-1;
int mid =masa[size/2];
for(i<=j){
	for(i=0;mas[i]<mid;i++)
	for(j=size-1;mas[j]>mid;j--)
	if(i<=j){
		int tmp =mas [i];
		mas[i]=mas[j];
		j++
		i--
	}
}
if(j>0){qsort(mas,j+);
}if(i<size){qsort (&mas,size-i)
}
	return *mas;
}
