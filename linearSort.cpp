#include<iostream>
using namespace std;


int LinearSearch(int arr[],int start,int value);
int main(){

  int array[]={2,12,24,30,65,81,14,96};
 int answer=LinearSearch(array,0,96);

 cout<<answer<<endl;

	return 0;
}



int LinearSearch(int arr[],int start,int value){

   int lenght = 8;
   if(start== lenght){
   	return -1;
   }
	 if(arr[start]== value){
		return start;
	}
	else {
		LinearSearch(arr,start + 1,value);
	}



}
