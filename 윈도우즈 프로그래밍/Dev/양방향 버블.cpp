#define swap(type, x, y) do { type t = x; x = y; y = t;} while(0) 

int main()
{
	int j;
	int left = 0; 
	int right = n - 1;
	int last = left; 

	// ���� ���� ������ pass���� ��ħ
	while (left < right) { // ���� �Ǻ��� ������ �Ǻ����� ���ų� Ŭ�� ���� 
		for (j = left; j < right; j++) { // ���� �� ���� 
			if (a[j] > a[j + 1]) { // ��
				swap(int, a[j], a[j + 1]); // ��ȯ
				last = j; // ������ ������ ��ȯ���� �ε��� ����
			}
		}
		right = last; // �������� ������ ��ȯ���� �ε��� �� 

		for (j = right; j > left; j--) { // ���� �� ���� 
			if (a[j - 1] > a[j]) { // ��
				swap(int, a[j - 1], a[j]); // ��ȯ
				last = j; // ������ ������ ��ȯ���� �ε��� ����
			}
		}
		left = last; // ������ ������ ��ȯ���� �ε��� �Ǻ�
	}
}
