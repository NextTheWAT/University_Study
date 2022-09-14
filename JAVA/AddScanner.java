import java.util.Scanner;	//Scanner를 사용하기위해 import를 통해 외부 클래스를 호출
					//Scanner는 java.util 패키지에 포함되어있다.

public class AddScanner{			//Add라는 객체를 생성
		public static void main(String[] args) { //접근 한정자를 public으로 설정(어디서든지 사용가능)
						//static으로 메모리를 미리 할당
						//void는 함수가 끝날 때 리턴값이 없다.
						//main은 메인 함수로 쓰여지는것
						//String[] args는 args를 문자열로 사용하겠다 라는 의미

int c=0;					// c를 0으로 초기화시켜줌

Scanner in = new Scanner(System.in);		//객체를 생성 System.in은 키보드로 입력받기위해 사용

System.out.println("IT융합학부 1971070 2학년 이재은 - 자바 연산자");

System.out.print("a값을 입력해주세요 : " );
int a = in.nextInt();					//입력받은 정수를 변수를 a라는 주솟값이 가르키는 메모리에 저장
System.out.print("b값을 입력해주세요 : " );
int b = in.nextInt();					//입력받은 정수를 변수를 a라는 주솟값이 가르키는 메모리에 저장


c = a + b;						 //a+b = c라는 연산자

System.out.println("c값 : " + c);		//출력
	}
}