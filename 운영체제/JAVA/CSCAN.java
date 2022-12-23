package test2;

public class CSCAN { // CSCAN 클래스를 선언합니다.

	public static void main(String[] args) {
		// public: 언제 어디서든 접근이 가능하다는 것입니다. 접근제어지시자입니다.
		// static: 메모리를 미리 할당시켜서 실행할 수 있도록 합니다.
		// void: 반환값이 없는 것을 의미합니다.
		int arr[] = { 46, 110, 32, 52, 14, 120, 36, 96 }; // 전체 배열 세로 8칸짜리 선언
		int record[][] = new int[8][2]; // 결과를 나타낼 int형 배열 세로 8칸 가로 2칸 짜리를 선언합니다.
		int header = 50; // 중심이 될 헤더를 선언한다.
		int temp = 0; // 자리를 바꾸는 용도로 사용될 int형변수 temp를 0으로 초기화한다.
		int find = 0; // 헤더를 중심으로 값을 구하기위해 사용되는 find함수입니다.
		int sum = 0; // 전체 이동횟수를 알기 위해 int형변수 sum을 선언하여 0으로 초기화한다.
		int sik = 0; // 차이 값을 알기위한 식을 밑에서 따로 정의를 해놓았습니다
		int count = 0; // 인덱스를 증가시키기위한 int형변수 count를 선언과 동시에 0으로 초기화한다.
		System.out.println("\nIT 2학년 1971014 김민재 - CSCAN"); // 출력문
		System.out.println(); // 줄띄기

		// 전부 데이터의 초기화가 끝났다면?
		System.out.println("================================================================================"); // 출력문

		// 오름차순 정렬진행
		for (int i = 0; i < 7; i++) { // i는 0부터 7까지 돌립니다.
			for (int j = 0; j < 7; j++) { // j도 0부터 7까지 돌립니다.
				if (arr[j] > arr[j + 1]) { // 만약 arr[j]에 있는 값이 arr[j+1]보다 크다면
					temp = arr[j]; // temp에 해당 arr[j]값을 넣고
					arr[j] = arr[j + 1]; // arr[j] 에다가 arr[j+1]
					arr[j + 1] = temp; // arr[j+1]에 temp값을 넣어줍니다!
				}
			}
		}

		// 이제 중앙값을 잡기 위함으로 딱 넘어가는 첨자를 구합니다.
		for (int i = 0; i < 8; i++) { // i를 0부터 7까지 총 8번 돌리게 됩니다.
			if (arr[i] <= header) { // 헤더보다 arr[i]가 작거나 같으면 넘어가면 해당이 되지않음
				find = i; // 헤더의 중심으로 작거나 같은 값의 첨자를 find 변수에 넣어줍니다. 곧 헤더값보다 넘어가기 전의 첨자번호를 알기 위함이다.
			}
		}

		// 우측시작해야죠?
		for (int i = find + 1; i < 8; i++) {
			sik = Math.abs(arr[i] - header); // 가장가까운 것을 구하기 위한 식
			record[count][1] = sik; // 차이값 record[count][1]칸에 집어 넣어서 확인을 합니다.
			record[count][0] = arr[i]; // 본래의 값을 넣는다 접근한 순서대로!!

			if (i == find + 1) { // i가 맨처음 시작지점인 find+1부터 시작을 할때 여기서 위치가 어떻게 되는지 출력하는 조건문이다.
				if (header < arr[i]) // 헤더가 arr[i]보다 작으면 오른쪽 방향
					System.out.println("헤드위치: " + header + "   ->"); // 출력문 오른쪽방향!

				else // 헤더가 arr[i]보다 크면 왼쪽방향!
					System.out.println("헤드위치: " + header + "   <-"); // 출력문 왼쪽방향!
			}

			header = arr[i]; // 해당arr[i]를 헤더에 초기화
			sum += record[count][1]; // 각 이동한 총거리를 알기위해 record[count][1]에 있는 값을 sum으로 계속 더해진다.
			count++; // count 1씩 증가!

			if (i == arr.length - 1) { // i가 배열의 크기보다 1작을경우 즉 for문의 마지막을 할경우에! 120이 헤더일때!
				sum += Math.abs(header - 140); // 140까지의 차이를 절댓값으로 값을 산출하고 sum에 더한다!
				header = 140; // 그리고 헤더는 140으로 이동!
			}
		}

		// 좌측 실행!
		for (int i = 0; i <= find; i++) {
			if (i == 0) { // i가 0일때!
				sum += Math.abs(header); // 현재 헤더가 140이므로 0까지 오는 거리가 140이므로 그 값을 절댓값으로 받아 sum에 더해준다.
				header = 0; // 헤더는 0에서 시작임
			}
			sik = Math.abs(header - arr[i]); // 헤더를 증심으로 가장 가까운 큐 값을 알기위함! Math클래스의 abs()메소드는 절댓값으로 값을 저장시켜준다.
			record[count][1] = sik; // 차이값을 알기 위함으로 값을 [count][1]에 각각 접근한 순서대로 넣어준다.
			record[count][0] = arr[i]; // 본래의 값을 넣는다 접근한 순서대로
			sum += record[count][1]; // 이동한 거리의 총 합을 구하기 위함이다.
			header = arr[i];// 헤더에 arr[i]를 반복문실행 할때마다 초기화진행해준다. 그래야 접근하는 것을 알 수 있기 때문이다.
			count++; // count를 1씩 증가시킵니다.

		}

		System.out.print("실행순서 결과:"); // 출력문
		for (int i = 0; i < 8; i++) { // 각각 접근했을때 나왔던 식값과 본래 입력값들을 접근한 순서대로 출력한다.
			System.out.print(record[i][0] + "(" + record[i][1] + ")   "); // 출력문
		}
		System.out.println(); // 줄띄기
		System.out.println("총 이동의 합은?: " + sum); // 총 이동의 합을 출력합니다.
		System.out.println("================================================================================"); // 출력문
	}
}
