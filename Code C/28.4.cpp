#include <stdio.h>
#include <math.h>
int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i =0;i <n; i++){
		scanf("%d", &a[i]);
	}
	int min_ele = a[0];
	for (int i =0; i <n; i++){
		if (a[i] < min_ele){
			min_ele = a[i];
		}
	}
	printf("So nho nhat trong mang la: %d \n", min_ele);
	int max_ele = a[0];
	for( int i =0;i<n ; i++){
		if(a[i]> max_ele){
			max_ele = a[i];
		}
	}
	printf("So lon nhat trong mang la : %d", max_ele);
}
