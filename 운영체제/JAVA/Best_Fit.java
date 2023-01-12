

public class Best_Fit { // Best_Fit이라는 객체를 생성
	public static void main(String[] args) {// 접근 한정자를 public으로 설정(어디서든지 사용가능)
		// static으로 메모리를 미리 할당
		// void는 함수가 끝날 때 리턴값이 없다.
		// main은 메인 함수로 쓰여지는것
		// String[] args는 args를 문자열로 사용하겠다 라는 의미

		int mem[] = { 10, 2, 1, 12, 4 }; // 정수형 mem 배열에 10, 2, 1, 12, 4 값으로 초기화 크기는 5 메모리값이다
		int selmem = 3; // 정수형 변수 selmem 값을 3으로 초기화 사용할 메모리값
		int temp = 0; // 정수형 변수 temp값을 0으로 초기화

		System.out.println("IT융합학부 1971070 2학년 이재은 최적적합"); // 학부, 학번, 학년, 이름, 과제명 출력문, 줄바꿈
		System.out.println();// 줄띄우기

		System.out.print("메모리 크기 : ");// 메모리크기 출력문
		for (int i = 0; i < 5; i++) { // i는 0~4까지
			System.out.print(mem[i] + "  "); // 메모리값 출력문
		}
		System.out.println(); // 줄띄우기
		System.out.println("현재 넣을 값 : " + selmem);// selmem값 출력문

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
			if (selmem < mem[i]) { // selmem값이 mem[i]보다 작다면 조건문 실행
				System.out.print("사용된 메모리 공간 : " + mem[i]); // mem값 출력문
				mem[i] = mem[i] - selmem; // mem[i]값에 selmem빼기
				System.out.print("[" + mem[i] + "]"); // 빠진 메모리값 출력문
				break; // 값을 빼줬다면 for문 탈출
			}
		}

	}
}