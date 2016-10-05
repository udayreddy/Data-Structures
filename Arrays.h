// Arrays.h

#pragma once
#include <iostream>
#include <ctime>


namespace Data_Structure {

	typedef enum{
        Selection = 0,
        Insertion = 1,
        Bubble = 2,
		Merge = 3,
		Quick = 4,
		Heap = 5
        } sort;


	template<typename T>
	void selectionSort(T list[] , long Max){
		for (int i = 0 ; i < Max ; i++ ){
			long aMin = i;
			for (int j = i+1; j < Max ; j++){
				// reverse the compare to reverse the list in descending order
				if (list[aMin] > list[j]){
					aMin = j;
				}
			}
			T temp = list[i];
			list[i] = list[aMin];
			list[aMin] = temp;
		}
	}

	template<typename T>
	void insertionSort(T list[] , long Max){
		for (int i = 1 ; i < Max; i++){
			T temp = list[i];
			int j = i;
			// reverse the compare to reverse the list in descending order
			while (list[j-1] > temp && j > 0){
				list[j] = list[j-1];
				--j;
			}
			list[j] = temp;
		}
	}

	template<typename T>
	void bubbleSort(T list[] , long Max){
		for (int i = 0 ; i < Max ; i++){
			for (int j = 0 ; j < Max -1 ; j++) {
				if(list[j] > list [j+1]){
					T temp = list[j];
					list[j] = list[j+1];
					list[j+1] = temp;
				}
			}
		}
	}

	template<typename T>
	void mergeSort(T list[] , long Max){
		if (Max < 2){
			return;
		}
		long mid = Max/2;
		T* left = new T[mid]; 
		T* right = new T[Max-mid] ;
		for (int i = 0 ; i < mid; i++)
			left[i] = list[i];
		for  (int j = mid ; j < Max ; j++)
			right[j-mid] = list[j];
		//printArray(left,mid);
		//printArray(right,Max-mid);
		mergeSort(left,mid);
		mergeSort(right,Max-mid);

		int l= 0,m= 0,n=0;

		while( l < mid && m < (Max-mid)){
			if (left[l] <= right[m] ){
					list[n] = left[l];
					++l;
				}
			else if (left[l] > right[m]){
					list[n] = right[m];
					++m;
			}
			++n;
		}
		while (l < mid){
			list[n] = left[l];
			++n;++l;
		}
		while (m < (Max-mid)){
			list[n] = right[m];
			++m;++n;
		}

		delete[] left;
		delete[] right;
	}

	template<typename T>
	void quickSort(T list[] , long Min, long Max){
		if (Min < Max){
			int wall = Min;
			for (int i = Min ; i < Max ; i++){
				if (list[i] <= list[Max]){
					T temp1 = list[i];
					list[i] = list[wall];
					list[wall] = temp1;
					wall = wall+1;
				}
			}
			T temp2 = list[wall];
			list[wall] = list[Max];
			list[Max] = temp2; 

			quickSort(list,Min,wall-1);
			quickSort(list,wall+1,Max);
		}
	}


	template<typename T>
	void heapSort(T list[] , long Max){
		
	}

	template<typename T>
	void printArray(T list[],long Max){
		for (int i = 0 ; i < Max ; i++)  
			std::cout << list[i] << ",";
		std::cout << std::endl;
	}

	template<typename T>
	void ExecuteSort(sort type, T list[] , long Max){
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Array in: " ;
		printArray(list,Max);
		//auto start = std::chrono::high_resolution_clock::now();
		
		switch(type){
			case Selection:
				std::cout << " Selection sort "<< std::endl;
				selectionSort(list,Max);
				break;
			case Insertion:
				std::cout << " Insertion sort "<< std::endl;
				insertionSort(list,Max);
				break;
			case Bubble:
				std::cout << " Bubble sort "<< std::endl;
				bubbleSort(list,Max);
				break;
			case Merge:
				std::cout << " Merge sort "<< std::endl;
				mergeSort(list,Max);
				break;
			case Quick:
				std::cout << " Quick sort "<< std::endl;
				quickSort(list,0,Max-1);
				break;
			case Heap:
				std::cout << " Heap sort "<< std::endl;
				heapSort(list,Max);
				break;
		}

		//auto elapsed = std::chrono::high_resolution_clock::now() - start;
		std::cout << "Array out: " ;
		printArray(list,Max);
		//std::cout << "Time taken: " <<  std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count() << std::endl;
	}
}
