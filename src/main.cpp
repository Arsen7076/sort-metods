#include"sort.hpp"
int main (){
	int size;
	cout<<"pleass insert size for array--"
	cin>>size;
	int arr[size];
	cout<<"pleas add number in array"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
int qsor[size]=qsort(arr,size);
for(int i=0;i<size;i++){
	cout<<qsor[i]<<",";
}cout<<"It is qsort"<<"\n"<<"-----------------------------"<<endl;
bubble(arr,size);
selection(arr,size);
char s;
cout<<"pleass insert char-";
cin>>s;
charsort(s);
return 0;
}
