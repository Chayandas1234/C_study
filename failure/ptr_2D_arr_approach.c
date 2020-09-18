/*
2차원 배열 arrr을 선언 후 &arr[0] 과 &arr[0][0] 을 각각 출력 시 다른값임을 알 수 있다.
for문을 통해서 2차원 배열 전부에 접근할 때, 반복문에 쓰일 인스턴스 변수의 시작은
int* p = arr; 로 해도 되고
int* p = &arr[0][0] 으로 해도된다

끝에를 arr[row-1][col-1]; 이렇게 잘 잡아주면 반복문을 통해 2차원 배열의 모든 인덱스에 접근이 가능하다.

arr[0][0] arr[0][1] arr[0][2] 이렇게 가다가 arr[1][0] 이렇게 알아서 넘어감
*/

#include <stdio.h>

int main() {
	int arr[][3] = { {1,2,3},{4,5,6} };
	for (int* p = arr; p <= &arr[1][2]; p++) {
		printf("%d\n", *p);
	}

}
