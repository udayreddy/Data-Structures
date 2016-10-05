#pragma once
#include <iostream>

//Linear Search
template <typename T,typename Elem>
long linearSearch(T& list, long Max, Elem& item) {
	long i = 0;
	while (i != Max && list[i] != item) {
		i++;
	}
	return (i == Max ? -1 : i);
}

template <typename T, typename Elem>
long binaySearch(T list[], long Max, Elem item) {
	int start = 0;
	int end = Max;
	int mid = (start + end ) / 2;
	while (list[mid] != item || start <= end) {
		
		if (list[mid] > item) {
			end = mid-1;
		}
		else if (list[mid] < item) {
			start = mid+1;
		}
		mid = (start + end ) / 2;
	}
	if (start <= end) {
		retun mid
	}
	else {
		return -1;
	}
}