package test2;

import java.util.Scanner; //Scanner를 사용하기위해 import를 통해 외부 클래스를 호출
//Scanner는 java.util 패키지에 포함되어있다.

public class LFU { // 클래스 생성

	public static void main(String[] args) {// 어디서든 접근 가능 public 이며 이미 메모리 할당 된 main메소드 선언
		System.out.println("IT융합학부 1971070 2학년 이재은 - LFU" + "\n");// 소속 출력 ln은 줄 바꿈을 위함
		int temp2 = 0;
		int[] count = new int[3];
		int[] arr = new int[3];
		int mem = 0;// 입력 받는 값들을 arr과의 비교를 하기 위해 입력 시 임시로 mem변수에 저장시키는 목적
		Scanner c = new Scanner(System.in);// Scanner클래스 사용하기 위한 참조변수c, 즉 인스턴스 생성, system.in은 입력받기위해
		System.out.print("현재 배열 상태:");// 출력문 줄바꿈 x
		for (int i = 0; i < 3; i++) {// 배열 출력을 위한 3번 반복하는 for문
			System.out.print(arr[i] + " "); // 출력
		}
		System.out.println();
		for (int i = 0; i < 3; i++) {
			System.out.print(count[i] + " ");
		}
		System.out.println("\n");// 줄바꿈
		int cnt3 = 0;
		for (int i = 0; i < 10; i++) { // 큰 for 10번의 입력을 받기 위해 10번 반복시킴~~~~~
			System.out.print("값 입력 : ");// 출력문
			mem = c.nextInt();// 입력 받은 값을 mem변수에 저장
			int cnt = 0;// 공백 검사의 횟수를 기록하기 위한 cnt 변수 0으로 초기화
			int cnt2 = 0;// 중복 검사의 횟수를 기록하기 위한 cnt2 변수 0으로 초기화
			int temp = 0;// 공백 검사 시 공백 인덱스의 번호를 저장해두기 위한 temp문

			for (int j = 0; j < 3; j++) { // 0-2인덱스 총 3번 검사를 하기 위한 3번 반복하는 for문
				if (arr[j] == 0) { // 공백을 검사함
					temp = j;// 공백 시 해당 인덱스 번호를 temp에 저장
					break;// 바로 검사 for문 탈출, temp의 값이 변할 수 있기 때문
				} else {// 공백이 없다면 cnt를 증가시킴 (검사횟수의 증가 즉 공백이 있다는 뜻)
					cnt++;// 증가
				}
			}

			for (int j = 0; j < 3; j++) {// 3번 검사를 진행하기 위해 3번 반복하는 for문 선언 //중복검사
				if (arr[j] == mem) {// arr의 값 중 삽입 하려는 값이 같다면
					cnt2++;// cnt2를 증가시킨다 (즉 증가한다면 중복이 있다는 것)
					cnt3++; // 중복횟수를 기억
					temp2 = j; // temp2값에 현재 인자값인 j 대입
					count[temp2]++; // count[temp2] j의 인자값을 뽑아서 count에 넣어준다
				}
			}

			if ((cnt2 == 0) && (cnt3 == 0)) {// cnt2=은 즉 중복이 없다는 뜻으로 그때 앞서 구한 공백의 인덱스 번호에 값을 넣어주는 if문
				arr[temp] = mem;// 값 삽입
			}

			if ((cnt == 3) && (cnt2 == 0)) {// cnt=3 검사 시 3번 증가하였으므로 0,1,2 모든 인덱스가 공백이 아닌 즉 포화상태,
				// 그리고 cnt2=0 중복이 없다는 뜻으로 즉 삽입하려는 값과 삽입을 하려는 배열간에 중복이 없고
				// 포화상태일때 현재 존재하는 값들을 앞으로 옮기고 맨 뒤에 값을 삽입
				int max = 0; // max값은 0으로 설정
				for (int q = 0; q < 3; q++) { // q는 0~2
					if (count[q] > max) { // count[q]값이 max값 보다 크다면 조건문 실행
						max = count[q]; // max값에 count[q]값 대입
					}
				}
				for (int k = 0; k < 3; k++) { // k는 0~2까지
					if (count[k] == max) { // count[k]값이 max와 같다면
						max = k; // max값에 k값 대입
						break; // for문 탈출
					}
				}

				if ((count[0] >= count[1]) && (count[1] > count[2])) { // count[0]값이 count[1]보다 크거나 같고, count[1]값이
																		// count[2]보다 클때
					arr[2] = mem; // arr[2]값에 mem값 대입
					count[2] = 0; // count[2]는 0
				} else if ((count[0] > count[1]) && (count[1] >= count[2])) { // count[0]값이 count[1]보다 크고, count[1]이
																				// count[2]보다 크거나 같을때
					arr[2] = mem; // arr[2]값에 mem값 대입
					count[2] = 0; // count[2]는 0
				} else if ((count[2] >= count[1]) && (count[1] > count[0])) { // count[2]값이 count[1]보다 크거나 같고, count[1]이
																				// count[0]보다 클때
					arr[0] = mem; // arr[0]값에 mem값 대입
					count[0] = 0; // count[0]은 0
				} else if ((count[2] > count[1]) && (count[1] >= count[0])) { // count[2]값이 count[1]보다 크고, count[1]이
																				// count[0]보다 크거나 같을때
					arr[0] = mem; // arr[0]에 mem값 대입
					count[0] = 0; // count[0]은 0
				} else if ((count[2] < count[1]) && (count[1] > count[0])) { // count[2]값이 count[1]보다 작고, count[1]이
																				// count[0]보다 클때
					arr[0] = mem; // arr[0]값에 mem값 대입
					count[0] = 0; // count[0]은 0
				} else if ((count[2] > count[1]) && (count[1] < count[0])) { // count[2]값이 count[1]보다 크고, count[1]이
																				// count[0]보다 작을때
					arr[1] = mem; // arr[1]값에 mem값 대입
					count[1] = 0; // count[1]은 0
				} else if ((count[0] <= count[1]) && (count[1] > count[2])) { // count[0]값이 count[1]보다 작거나 같고, count[1]이
																				// count[2]보다 클때
					arr[2] = mem; // arr[2]값에 mem값 대입
					count[2] = 0; // count[2]는 0
				} else if ((count[0] < count[1]) && (count[1] >= count[2])) { // count[0]값이 count[1]보다 작고, count[1]이
																				// count[2]보다 크거나 같을때
					arr[0] = mem; // arr[0]값에 mem값 대입
					count[0] = 0; // count[0]은 0
				} else if ((count[0] == count[1]) && (count[1] == count[2])) { // count[0]값이 count[1]값과 같고, count[1]값이
																				// count[2]값과 같을때
					arr[0] = mem; // arr[0]에 mem값 대입
					count[0] = 0; // count[0]은 0
				}
			}

			System.out.print(i + 1 + "번째 삽입 후 결과 : ");// 출력문
			for (int k = 0; k < 3; k++) {// 3번 반복하여 배열 결과를 출력시키기 위한 for문 반복시마다 변한 결과 출력 위함
				System.out.print(arr[k] + " ");
			}
			System.out.println(); // 즐띄우기
			System.out.print(" 각 반복 호출 횟수 : "); // 반복호출 출력문
			for (int h = 0; h < 3; h++) { // h는 0~2
				System.out.print(count[h] + " "); // count 값 출력
			}
			System.out.println("\n");// 줄바꿈
		} // 큰 for문
		System.out.print("\n" + "최종 배열 상태 : ");// 출력문
		for (int j = 0; j < 3; j++) {// 3번 반복하여 배열을 출력시키기 위한 for문 최종결과
			System.out.print(arr[j] + " ");// 배열 출력문
		}
		System.out.println(); // 줄띄우기
		System.out.print("마지막 반복 호출 횟수: "); // 마지막 반복 호출 횟수 출력문
		for (int h = 0; h < 3; h++) { // h는 0~2
			System.out.print(count[h] + " "); // count 값 출력문
		}
	}
}