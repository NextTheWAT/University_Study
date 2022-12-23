package test2;

import java.util.Scanner; //Scanner를 사용하기위해 import를 통해 외부 클래스를 호출
//Scanner는 java.util 패키지에 포함되어있다.

public class SJF // SJF객체를 생성.
{
	public static void main(String[] args) // 접근 한정자를 public으로 설정(어디서든지 사용가능)
	// static으로 메모리를 미리 할당
	// void는 함수가 끝날 때 리턴값이 없다.
	// main은 메인 함수로 쓰여지는것
	// String[] args는 args를 문자열로 사용하겠다 라는 의미
	{
		System.out.println("IT융합학부 1971070 2학년 이재은 SJF"); // 학부, 학번, 학년, 이름, 과제명 출력문, 줄바꿈
		int arr[] = { 0, 0, 0 }; // arr 이라는 배열이 가르키는 주소 메모리 값을 3으로 선언과 동시에 0,0,0으로 초기화
		Scanner sc = new Scanner(System.in); // 객체를 생성 System.in은 키보드로 입력받기위해 사용
		int arr2 = 0; // arr2라는 변수가 가르키는 주소값의 메모리안에 0으로 값을 초기화 /스캐너 클래스로 입력받을 변수
		int cnt3 = 0; // cnt3라는 변수가 가르키는 주소값의 메모리안에 0으로 값을 초기화 /총 중복을 체크하기위한 변수

		System.out.println("\n----------START----------"); // 시작 출력문, 줄바꿈
		for (int i = 0; i < 10; i++) // 0 ~ 4까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
		{
			System.out.print("값을 입력해주세요: "); // 값 입력 출력문
			arr2 = sc.nextInt(); // 입력받은 정수를 변수 arr2라는 주솟값이 가르키는 메모리에 저장
			int notEmpty = 0; // 공백을 알아보기위한 변수
			// notEmpty라는 변수가 가르키는 주소값의 메모리안에 0으로 값을 초기화
			int sameCount = 0; // 중복을 알아보기위한 변수
			// sameCount라는 변수가 가르키는 주소값의 메모리안에 0으로 값을 초기화
			int temp = 0; // 공백이 일어났을 시 공백의 인덱스 값을 받기위해 진행합니다.
			// temp라는 변수가 가르키는 주소값의 메모리안에 0으로 값을 초기화

			for (int j = 0; j < arr.length; j++) // 0 ~ arr배열 길이-1까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
			{
				if (arr[j] == 0) { // arr[j]값이 0 이라면 조건문 실행
					temp = j; // 조건이 true 라면 temp 값 j에 대입
					break; // 검사후 for문 탈출
				} else {
					cnt3++; // 조건문이 false면 cnt3값 증가
					notEmpty++; // 조건문이 false면 notEmpty값 증가
				}
			}
			for (int j = 0; j < arr.length; j++) // 0 ~ arr배열 길이-1까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
			{
				if (arr[j] == arr2) { // arr[j]와 arr2값이 같다면 조건문 실행
					sameCount++; // sameCount값 증가
				}
			}
			for (int j = 0; j < arr.length; j++) // 0 ~ arr배열 길이-1까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
			{
				if ((sameCount == 0) && (j == arr.length - 1) && (notEmpty != 3)) { // 중복이 존재하지 않을시 조건문 실행
					arr[temp] = arr2; // arr[temp]값에 arr2 대입
				}
			}
			if ((notEmpty == 3) && (sameCount == 0)) // notEmpty==3은 공백이 없다는 뜻이고 sameCount==0이라는 것은
			// 공백이 없다는 것을 의미하기에 포화상태일 경우를 의미한다. true라면 조건문 실행
			{
				int temp2 = 0; // 변수 temp2를 0으로 초기화합니다.
				for (int j = 0; j < arr.length - 1; j++) // 0 ~ arr배열 길이-1까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
				{

					for (int k = 0; k < arr.length - 1; k++) // 0 ~ arr배열 길이-1까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시
																// 조건식
					{
						if (arr[k] > arr[k + 1]) { // arr[k] > arr[k+1] 값이 true라면 조건문 실행
							temp2 = arr[k]; // temp2 값을 arr[k]에 대입
							arr[k] = arr[k + 1]; // arr[k]값을 arr[k+1]에 대입
							arr[k + 1] = temp2; // arr[k+1]값을 temp2에 대입
						}
					}
				}
				arr[0] = arr[1]; // arr[0]값을 arr[1]에 대입
				arr[1] = arr[2]; // arr[1]값을 arr[2]에 대입
				arr[2] = arr2; // arr2[]값을 arr2에 대입

				for (int j = 0; j < arr.length - 1; j++) // 0 ~ arr배열 길이-1까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
				{

					for (int k = 0; k < arr.length - 1; k++) // 0 ~ arr배열 길이-1까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시
																// 조건식
					{
						if (arr[k] > arr[k + 1]) { // arr[k] > arr[k+1] 값이 true라면 조건문 실행
							temp2 = arr[k]; // temp2 값을 arr[k]에 대입
							arr[k] = arr[k + 1]; // arr[k]값을 arr[k+1]에 대입
							arr[k + 1] = temp2; // arr[k+1]값을 temp2에 대입
						}
					}
				}
			}
			System.out.print(i + 1 + "번째, 현재 들어간 값: "); // 현재 들어간 값 출력문
			for (int k = 0; k < arr.length; k++) { // 0 ~ arr배열 길이-1까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
				System.out.print(arr[k] + " "); // arr[k]값 출력문
			}
			System.out.println(); // 줄바꿈
		}
		System.out.println("----------END----------\n");
	}
}