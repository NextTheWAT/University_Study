public class SE {							//SE객체를 생성.
	public static void main(String[] args) {		//접근 한정자를 public으로 설정(어디서든지 사용가능)
                   							//static으로 메모리를 미리 할당
                   							//void는 함수가 끝날 때 리턴값이 없다.
                   							//main은 메인 함수로 쓰여지는것
                   							//String[] args는 args를 문자열로 사용하겠다 라는 의미
		int arr[] = { 5, 2, 1 };				//arr 이라는 배열이 가르키는 주소 메모리 값을 3으로 선언과 동시에 5,2,1로 초기화 

		System.out.println("IT융합학부 1971070 2학년 이재은 시분할");	//학부, 학번, 학년, 이름, 과제명 출력문, 줄바꿈
		for (int j = 0; j < 5; j++) {							//0 ~ 4까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
			for (int i = 0; i < 3; i++) {						//0 ~ 2까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
				System.out.print("현재 값 : ");				//현재값 출력문
				System.out.println("A = " + arr[0] + ", B = " + arr[1] + ", C = " + arr[2]);	//arr[0], arr[1], arr[2] 배열값 출력문

				if (i == 0) {						//i==0 일때 조건문 실행
					if (arr[0] != 0) {arr[0] = arr[0] - 1;} 	//arr[0]이 0이 아닐때 -1  아니라면 조건문 탈출
						else {break;}
				}
				if (i == 1) {						//i==1 일때 조건문 실행
					if (arr[1] != 0) {arr[1] = arr[1] - 1;} 	//arr[1]이 0이 아닐때 -1  아니라면 조건문 탈출
						else {break;}
				}
				if (i == 2) {						//i==2 일때 조건문 실행
					if (arr[2] != 0) {arr[2] = arr[2] - 1;} 	//arr[1]이 0이 아닐때 -1  아니라면 조건문 탈출
						else {break;}
				}
			}
		}
	}
}