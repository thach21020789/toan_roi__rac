#include<bits/stdc++.h>
using namespace std;
#include<iostream>
using namespace std;
void insertionsort(int a[], int n){
	int count = 0;
	for(int i = 1 ; i < n ;i++){
		count++;
		int current = a[i];
		int pos = i - 1;
		while(pos >= 0 && current < a[pos]){
			count++;
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = current;
	}
	cout << count << endl;
}
void binary_sort(int a[] , int n){
	int left,right,mid,key;
	int count  = 0;
	for(int i = 1; i < n ;i++){
	    count++;
		left = 0 ;
		right = i - 1;
		key = a[i];
		while(left <= right){
			count++;
			mid = (left + right)*0.5;
			if(key < a[mid]){
				right = mid - 1;
			}else left = mid + 1;
		}
		for(int j = i - 1; j >= left  ;j--){
			a[j + 1] = a[j];
			count++;
		}
		a[left] = key;
    }
    cout << count << endl;
}


int ternary_search(int a[], int n , int key){
	int left = 0;
	int right = n - 1;
	while(right - left >= 0){
		int oneThirt = (right - left)/3;
		int mid1 = left + oneThirt;
		int mid2 = right - oneThirt;
		if(a[mid1] == key) {
			return mid1;
		}else if(a[mid2] == key){
			return mid2;
		}else if(key < a[mid1]){
			right = mid1 - 1;
		}else if(key > a[mid2]){
			left = mid2 + 1;
		}else{
			left = mid1 + 1;
			right = mid2 - 1;
		}
	}
	return -1;
}
int main(){
	int n ; cin >> n;
	int a[200];
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	int b[100];
	for(int i = 0 ;  i < n ;i++){
		cin >> b[i];
	}
	insertionsort(a,n);
	for(int i = 0 ; i < n ;i++) cout << a[i] << " ";
	cout << endl;
	binary_sort(b,n);
	for(int i = 0 ; i < n ;i++) cout << b[i] << " ";
	return 0;
}
