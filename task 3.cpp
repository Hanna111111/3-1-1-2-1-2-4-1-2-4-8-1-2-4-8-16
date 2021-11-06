#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter the number of array :"<<endl;
	cin>>size;
	
	int num = 1;
	int start = 0;  // сколько чисел добавленно в массив
	int finish = 1; // сколько чисел поставить
	
	int array[size];
	
	for(int i=0; i<size; i++){
	    
	    // здесь 0 элементов в массиве 
	    
	    array[i] = num; // добавали num в массив
		    start++; // здесь 1 элемент в массиве 
		    num*=2;
		    
		if(start == finish){
		    start =0;
		    num =1;
		    finish++;
		    
		}
	}		
		
	 //output
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
	

}
