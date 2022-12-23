package test2;

import java.util.Scanner; //정수를 입력하기위해서 Scanner클래스에 접근.

public class SSTF { // SSTF 클래스 선언..

	public static void main(String[] args) {
		// public: 언제 어디서든 접근이 가능하다는 것입니다. 접근제어지시자입니다.
		// static: 메모리를 미리 할당시켜서 실행할 수 있도록 합니다.
		// void: 반환값이 없는 것을 의미합니다.
		Scanner sc = new Scanner(System.in); // Scanner클래스의 sc 객체를 생성해 입력을 받을수 있도록 진행합니다.
		int[] arr = { 46, 110, 32, 52, 14, 120, 36, 96 };
		int[] arr2 = { 0, 0, 0, 0, 0, 0, 0, 0 };
		int record[][] = new int[8][2]; // 결과를 나타낼 int형 배열 세로 8칸 가로 2칸 짜리를 선언합니다.
		int header = 50; // 중심이 될 헤더를 선언한다.
		int sik = 0; // 이제 헤더에서 가장 가까운 큐를 알기위해 식을 따로 정의를 밑에서 할 것! 우선 0으로 초기화!
		int min = 0; // 가장 가까운 최소를 구하기 위함으로 사용될 int형 변수 min을 0으로 초기화한다.
		int sum = 0; // 전체 이동횟수를 알기 위해 int형변수 sum을 선언하여 0으로 초기화한다.

		System.out.println("\nIT융합학부 1971070 2학년 이재은 SSTF"); // 출력문
		System.out.println(); // 줄띄기
		System.out.print("트랙출력: "); // 출력문
		for (int i = 0; i < 8; i++) { // 각각 접근했을때 나왔던 식값과 본래 입력값들을 접근한 순서대로 출력한다.
			System.out.print(arr[i] + "  "); // 출력문
		}
		System.out.println(); // 줄띄기
		for (int i = 0; i < 8; i++) // 핵심이 될 반복문 총 8번 돌아간다.
		{
			// 처음 헤더는 50으로 정해놓았기 때문에 각각 배열의 값에서 50이랑 가장 가까운 놈부터 찾는다.
			for (int j = 0; j < 8; j++) {
				sik = arr[j] - header; // 가장가까운 것을 구하기 위한 식
				if (sik < 0) { // 가장가까운 것을 구하기 위한 식의 값이 0보다 이히인 음수가 나왔을경우
					sik = 100 - (sik + 100); // 부호를 바꿔주는 식을 적용한다.
					arr2[j] = sik; // 1칸에다가 sik을 넣어준다.
					continue; // 하고나면 다음 반복문으로 넘어가게 된다.
				}

				if (arr[j] == 0)
					continue; // 이미 접근했던 내용이면 for문 다음으로 넘어간다.
				else
					arr2[j] = sik; // arr[j][1]칸에다가 sik을 넣어준다.
			}

			min = 1000; // 최솟값을 구하기 위해 1000보다 높은 값이 없으므로 1000으로 제한한다.

			// 이제 식을 각각 추출한 것들 바탕으로 가장 가까운 애를 찾는다.
			for (int j = 0; j < 8; j++) {
				if (min > arr2[j] && arr[j] != 0) { // 식으로 나온 각각 결과값이 min보다 작을 경우에?
					min = arr2[j]; // min값에 arr[j][1]을 넣어준다 [j][1]칸은 각각 식 값이 들어감
				}
			}

			// 처음 헤드 위치를 표기하기위한 반복문이다.
			for (int j = 0; j < 8; j++) {
				if (min == arr2[j] && i == 0) // i가 0이며 처음헤더와 가장 가까운 큐의 값이랑 arr[j][1]같을경우
				{
					if (arr[j] > header && i == 0) { // 처음 접근하는 큐 값이 헤더보다 클경우에
						System.out.println("헤드: " + header); // 출력문 오른쪽방향!
					}
					// 반대로 작을경우는 화살표 왼쪽으로 출력한다.
					if (arr[j] < header && i == 0)
						System.out.println("\n\n헤드위치: " + header + "   <-");
				}
			}

			// 가장 가까운 놈을 min값이 가지고 있기 때문에 얘한테 header를 위임해주고 순서를 부여 넣어둔다.
			for (int j = 0; j < 8; j++) {
				// 가장 가까운놈이랑 데이터 같은 놈이 잡힌다면?
				if (min == arr2[j]) {
					record[i][0] = arr[j]; // 맨처음 접근한 큐값(본래 입력한 값)을 record[i][0]에 넣어버린다.
					header = arr[j]; // 헤더를 이제 입력값으로 초기화
					arr[j] = 0; // 이미 들렀으므로 0으로 초기화 시켜줌 이는 위에서 가까운값찾을때 0인 값을 가진 놈은 넘어갈거임
					record[i][1] = min; // 식으로 구한 값을 순서대로 접근한대로 record[i][1]에 초기화한다.
				}
			}
		} // i선언 for문이 끝나는 괄호이다.

		for (int i = 0; i < 8; i++) { // 여기는 총 이동의 합을 구하기 위함이다!
			sum += record[i][1]; // sum함수로 합을 순서대로 다 더한다!
		}

		System.out.print("트랙출력 결과:"); // 출력문
		for (int i = 0; i < 8; i++) { // 각각 접근했을때 나왔던 식값과 본래 입력값들을 접근한 순서대로 출력한다.
			System.out.print(record[i][0] + "(" + record[i][1] + ")   "); // 출력문
		}
		System.out.println(); // 줄띄기
		System.out.println("총 이동의 합은?: " + sum); // 총 이동의 합을 출력합니다.
	}
}