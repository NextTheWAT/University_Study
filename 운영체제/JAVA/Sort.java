import java.util.Scanner;	//Scanner를 사용하기위해 import를 통해 외부 클래스를 호출
					//Scanner는 java.util 패키지에 포함되어있다.

public class Sort{					//Sort 이라는 객체를 생성
		public static void main(String[] args) { //접근 한정자를 public으로 설정(어디서든지 사용가능)
						//static으로 메모리를 미리 할당
						//void는 함수가 끝날 때 리턴값이 없다.
						//main은 메인 함수로 쓰여지는것
						//String[] args는 args를 문자열로 사용하겠다 라는 의미


System.out.println("IT융합학부 1971070 2학년 이재은 - 배열정렬");	// 출력문


int[] arr = new int[4];				//배열 선언
int temp = 0;
Scanner in = new Scanner(System.in);		//객체를 생성 System.in은 키보드로 입력받기위해 사용


for(int i=0; i<4; i++){				//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
System.out.print( i+1 + "번째 값을 입력해주세요 : " );			//0~4까지 1씩 증가 출력문
	 arr[i] = in.nextInt();						//Scanner 입력
}

for(int j=0; j<5; j++){		//0~4까지 1씩 증가//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
for(int i=0; i<3; i++){		//0~2까지 1씩 증가 //조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
	if(arr[i] > arr[i+1]){		//arr[i]가 a[i+1]보다 클때 실행
	temp = arr[i];		//temp, arr[i], arr[i+1] 을 템프로 솔트해준다
	arr[i] = arr[i+1];
	arr[i+1] = temp;
		}
	}
System.out.println(j + "번째 정렬 결과 : ");
for(int c=0; c<4; c++){
	System.out.print(arr[j]);
}
}

for(int i=0; i<=4; i++){		//0~4까지 1씩 증가//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
	System.out.println(i+1 + "번째 값 : " +arr[i]);		//출력문
}
}}