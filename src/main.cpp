#include"sort.hpp"
int main (){
	int size;
	cout<<"pleass insert size for array--";
	cin>>size;
	int arr[size]={5,4,3,2,1};
	cout<<"pleas add number in array"<<endl;
	for(int i=0;i<size;i++){
		int ad;
		cin>>ad;
		arr[i]=ad;
	}
	cout<<"esnsdna";
qsort(arr,size);
for(int i=0;i<size;i++){
	cout<<arr[i]<<",";
}cout<<"It is qsort"<<"\n"<<"-----------------------------"<<endl;
bubble(arr,size);
selection(arr,size);
string s;
cout<<"pleass insert char-";
cin>>s;
charsort(s);
return 0;
}
