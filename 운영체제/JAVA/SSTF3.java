package test2;

public class SSTF3 {
	public static void main(String[] args) {
		int[] arr = { 46, 110, 32, 52, 14, 120, 36, 96 };
		int[] arr2 = { 0, 0, 0, 0, 0, 0, 0, 0 };
		int[] dis = { 0, 0, 0, 0, 0, 0, 0, 0 };
		int target = 50;
		int answer = 0;
		int save = 0;
		int min = Integer.MAX_VALUE;

		for (int j = 0; j < arr.length; j++) {
			for (int i = 0; i < arr.length; i++) {
				int abs = Math.abs(arr[i] - target); // 차이값의 절대값 반환
				if (abs < min) { // 절대값이 최소값보다 작다면
					min = abs; // 최소값 교체
					answer = arr[i]; // 정답
					save = i;
				}
			}
			if (answer == target) {
				arr[save] = 0;
			}
			System.out.println(answer + " ");
		}

	}
}