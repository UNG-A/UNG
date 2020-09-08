#include <stdio.h>
#include <stdlib.h>

int Root=9;

void swap(int* a, int* b) {

	int x;
	x = *a;
	*a = *b;
	*b = x;

}




void making_Heap(int a[], int n) {
	// parent node (i-1)/2 
	//left side child node i*2+1
	//right side child node i*2+2
	int order = 0;
	int counter = 0;
	// * 3개의 노드는 두 번의 검사로 모든 대소관계를 표현할 수 있다 *
	// 한 번으로 끝나는 게 아니라 반복문으로 진행한다. 조건도 생각해준다. 끝내는 조건

	while (1) {

		if (a[(order * 2) + 1] > a[(order - 1) / 2]) {
			swap(&a[(order * 2) + 1], &a[(order - 1) / 2]);

		}

		if (a[(order * 2) + 2] > a[(order - 1) / 2]) {
			swap(&a[(order * 2) + 2], &a[(order - 1) / 2]);
		}
		counter++;// 조건문 왼쪽 오른쪽 부모노드 한 번의 과정이 끝나면 counter ++을해준다.
		if (counter == n / 2 || counter == (n/2)-1)//홀수개인 경우와 짝수개인 경우.
			break;
	}

	heap_Sort(a, Root);


}

/*the problem
1.swap 하는 것이아니라 마지막에 끼워넣는 것이다.	
*/

void heap_Sort(int a[], int root_node) {
	a[root_node]=


}



int main() {


	int i;
	int a[10] = { 10,9,5,8,3,2,4,6,7,1 };
	making_Heap(a, 10);
	for (i = 0; i < 10; i++) {

		printf("%3d", a[i]);
	}

}