package test2;

public class SSTF2 {
	public static void main(String[] args) {

		System.out.println("IT융합학부 1971070 2학년 이재은 - SSTF" + "\n");

		int que[] = { 46, 110, 32, 52, 14, 120, 36, 96 };
		int que2[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
		int dis[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
		int sel = 50;
		int sel2 = 0;
		int temp = 0;

		System.out.print("현재 큐 : ");
		for (int i = 0; i < 8; i++) {
			System.out.print(que[i] + "  ");
		}
		System.out.println();
		System.out.println("헤드 : " + sel);

		for (int j = 0; j < 7; j++) {
			for (int i = 0; i < 7; i++) {
				if (que[i] > que[i + 1]) {
					temp = que[i];
					que[i] = que[i + 1];
					que[i + 1] = temp;
				}
			}
		}
		for (int i = 0; i < 7; i++) {
			if (que[i] <= que[i + 1] && sel < que[i]) {
				sel2 = i;
				break;
			}
		}
		for (int i = sel2; i < 7; i++) { //
			dis[i] = Math.abs(que[i + 1] - que[i]);
		}
		for (int i = sel2 - 1; i >= 0; i--) { //
			dis[sel2 - i] = Math.abs(que[i] - que[i + 1]);
		}

		System.out.print("트랙출력 : ");
		for (int i = sel2; i < 8; i++) { //
			System.out.print(que[i] + "  ");
		}
		for (int i = sel2 - 1; i >= 0; i--) { //
			System.out.print(que[i] + "  ");
		}
		System.out.println();
		System.out.print("거리 출력: ");
		for (int i = 0; i < 7; i++) {
			System.out.print(dis[i] + "  ");
		}
	}
}
