#define swap(type, x, y) do { type t = x; x = y; y = t;} while(0) 

int main()
{
	int j;
	int left = 0; 
	int right = n - 1;
	int last = left; 

	// 양쪽 끝을 오가며 pass과정 거침
	while (left < right) { // 왼쪽 피봇이 오른쪽 피봇보다 같거나 클때 종료 
		for (j = left; j < right; j++) { // 왼쪽 끝 부터 
			if (a[j] > a[j + 1]) { // 비교
				swap(int, a[j], a[j + 1]); // 교환
				last = j; // 오른쪽 마지막 교환값의 인덱스 저장
			}
		}
		right = last; // 오른쪽의 마지막 교환값의 인덱스 값 

		for (j = right; j > left; j--) { // 왼쪽 끝 부터 
			if (a[j - 1] > a[j]) { // 비교
				swap(int, a[j - 1], a[j]); // 교환
				last = j; // 왼쪽의 마지막 교환값의 인덱스 저장
			}
		}
		left = last; // 왼쪽의 마지막 교환값의 인덱스 피봇
	}
}
