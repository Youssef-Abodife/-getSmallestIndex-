#include <iostream>
using namespace std;
 getSmallestIndex(int array[],int size){
 	 int min=array[0];
 	for (int i=0;i<size;i++)
 		if (array[i]<min){
		 
 		min=array[i];}
 	
 		for(int j=0;j<size;j++)
 		if (min==array[j])
 		return j;
 }
int main (){
int s=5;
int ar [s]  ;

for (int i=0;i<s;i++)
{ cin>>ar[i];
}

	cout <<"...........................................................\n";
	cout << getSmallestIndex(ar,s);

	
	return 0;
}
