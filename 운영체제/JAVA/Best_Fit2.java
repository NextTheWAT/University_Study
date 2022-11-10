

import java.util.Scanner;//Scanner를 사용하기위해 import를 통해 외부 클래스를 호출
//Scanner는 java.util 패키지에 포함되어있다.

public class Best_Fit2 { // Best_Fit2 라는 객체를 생성
	public static void main(String[] args) {// 접근 한정자를 public으로 설정(어디서든지 사용가능)
		// static으로 메모리를 미리 할당
		// void는 함수가 끝날 때 리턴값이 없다.
		// main은 메인 함수로 쓰여지는것
		// String[] args는 args를 문자열로 사용하겠다 라는 의미

		Scanner in = new Scanner(System.in); // 객체를 생성 System.in은 키보드로 입력받기위해 사용
		int[] mem = new int[5]; // 정수형mem배열값을 5로 선언
		int[] ps = new int[5]; // 정수형ps배열값을 5로 선언
		int count = 0; // 정수형 변수 count 값을 0으로 초기화 - mem의 배열 인자값으로 사용할 변수
		int temp = 0; // 정수형 변수 temp값을 0으로 초기화

		System.out.println("IT융합학부 1971070 2학년 이재은 입력 데이터 - 최적적합"); // 학부, 학번, 학년, 이름, 과제명 출력문, 줄바꿈
		System.out.println(); // 줄띄우기

		System.out.print("메모리 입력 : "); // 메모리 입력 - 출력문
		for (int i = 0; i < 5; i++) { // i 는 0~4까지
			mem[i] = in.nextInt(); // mem[i] 에 값을 입력
		}
		System.out.print("프로세스값 입력 : "); // 프로세스 입력 - 출력문
		for (int i = 0; i < 5; i++) { // i는 0~4까지
			ps[i] = in.nextInt(); // ps[i] 에 값을 입력
		}

		System.out.println(); // 줄띄우기
		System.out.println(); // 줄띄우기

		for (int j = 0; j < 4; j++) { // 0~4까지 1씩 증가//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
			for (int i = 0; i < 4; i++) { // 0~3까지 1씩 증가 //조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
				if (mem[i] > mem[i + 1]) { // mem[i]가 mem[i+1]보다 클때 실행
					temp = mem[i]; // temp, mem[i] 을 템프로 교환
					mem[i] = mem[i + 1]; // mem[i] 와 mem[i+1]를 교환
					mem[i + 1] = temp; // mem[i+1]을 temp와 교환
				}
			}
		}
		for (int i = 0; i < 5; i++) { // i는 0~4까지
			if (ps[i] <= mem[count]) { // ps[i]값이 mem[count]값보다 작거나 같다면 조건문 실행
				System.out.print("p" + count + " - 사용된 메모리 공간 : " + mem[count]); // 사용된 메모리 공간 출력문
				mem[count] = mem[count] - ps[i]; // mem[count]값에 ps[i]값을 빼준다
				if (mem[count] < 0) { // 만약 값을 빼줬는데 0보다 작아진다면
					mem[count] = mem[count] + ps[i]; // 다시 ps[i]값을 더해주고
					count++; // count값을 다시 올려준뒤 - 다음 메모리로 이동
					mem[count] = mem[count] - ps[i];// 증가된 count값으로 mem[count] 에 ps[i]값을 다시 빼준다
				}
				System.out.print("[" + mem[count] + "]"); // mem[count]값 출력문
				System.out.println(); // 줄띄우기
			} else if (mem[count] < ps[i]) { // mem[count]값이 ps[i]보다 작다면
				count++; // count값 증가
				System.out.print("p" + count + " - 사용된 메모리 공간 : " + mem[count]); // 사용된 메모리 공간 출력문
				mem[count] = mem[count] - ps[i]; // mem[count]값에 ps[i]값 빼주기
				System.out.print("[" + mem[count] + "]"); // 빠진 메모릭값 출력문
				System.out.println(); // 줄띄우기
			}
		}

	}
}