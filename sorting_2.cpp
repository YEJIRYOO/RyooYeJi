//MergeSort

/*
#include<iostream>
#define SIZE 10
using namespace std;

void get_array(int arr[]);
void merge(int arr[], int left,int mid, int right);
void mergeSort(int arr[],int left,int right);

int sorted[SIZE];

void get_array(int arr[]) {
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
}

void merge(int arr[], int left,int mid, int right) {
	int i, j, k,l;
	//정렬된 왼쪽 리스트 인덱스, 정렬된 오른쪽 리스트 인덱스, 정렬 중인 리스트 인덱스
	i = left;
	j = mid + 1;
	k = left;

	//sorted에 병합하며 값 채우기
	while (i <= mid && j <= right) {
		if (arr[i] < arr[j])
			sorted[k++] = arr[i++];//값 넣어주고 다음 요소로 넘어감
		else
			sorted[k++] = arr[j++];
	}
	
	if (i > mid) {//오른쪽 원소들만 남은 경우 일괄 복사
		for (l = i; l <= right; l++) {
			sorted[k++] = arr[l];
		}
	}
	else{
		for (l = i; l <= mid; l++) {
			sorted[k++] = arr[l]; //!!!!값 잘못 증가시킴!!!!
		}
	}

	for (int i = left; i <= right; i++)
		arr[i] = sorted[i];
}

void mergeSort(int arr[],int left,int right) {
	int mid;

	if (left < right) {
		mid = (left + right) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		for (int i = left; i <= right; i++) {
			sorted[i] = arr[i];
		}
		merge(sorted, left, mid, right);
	}
}

int main(void) {
	int arr[SIZE];

	get_array(arr);
	mergeSort(arr, 0, SIZE - 1);

	for (int i = 0; i < SIZE; i++)
		cout << arr[i];

	return 0;
}*/
/*
#include<iostream>
#define SIZE 10

using namespace std;

void get_array(int arr[]);
void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);

int sorted[SIZE];

void get_array(int arr[]) {
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
}

void merge(int arr[], int left, int mid, int right) {
	int i, j, k;

	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right) {
		if (arr[i] < arr[j])
			sorted[k++] = arr[i++];
		else
			sorted[k++] = arr[j++];
	}

	while (i <= mid)
		sorted[k++] = arr[i++];
	while (j <= right)
		sorted[k++] = arr[j++];

	for (int i = left; i <= right; i++)
		arr[i] = sorted[i];
}

void mergeSort(int arr[], int left, int right) {
	int mid;

	if (left < right) {
		mid = (left + right) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

int main(void) {
	int arr[SIZE];

	get_array(arr);
	mergeSort(arr, 0, SIZE - 1);

	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";

	return 0;
}
*/

//기수정렬
//radix sort

//boj2751
/*
#include<iostream>
using namespace std;

void radixSort(int arr[],int n,int k);

void radixSort(int arr[], int n, int k) {

}

int main(void) {
	
}
*/

//boj2753

#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {
	int y;
	cin >> y;
	cout << ((y % 4 == 0) ? ((y % 400 == 0) ? 1 : (y % 100 != 0) ? 1 : 0) : 0);

	return 0;
}