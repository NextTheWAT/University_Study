package test2;

public class SE {

	public static void main(String[] args) {

		int arr[] = { 5, 2, 1 };
		System.out.println("IT융합학부 1971070 2학년 이재은 시분할");

		for (int j = 0; j < 5; j++) {
			for (int i = 0; i < arr.length; i++) {

				System.out.print("현재 값 : ");
				for (int a = 0; a < 3; a++) {
					if (arr[a] != 0) {
						System.out.print(arr[a] + " ");
					} else {
						break;
					}
				}
				System.out.println();

				if (i == 0) {
					if (arr[0] != 0) {
						arr[0] = arr[0] - 1;
					} else {
						break;
					}
				}
				if (i == 1) {
					if (arr[1] != 0) {
						arr[1] = arr[1] - 1;
					} else {
						break;
					}
				}
				if (i == 2) {
					if (arr[2] != 0) {
						arr[2] = arr[2] - 1;
					} else {
						break;
					}
				}
			}
		}
	}
}