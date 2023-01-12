public class Add{			//Add라는 객체를 생성
		public static void main(String[] args) { //접근 한정자를 public으로 설정(어디서든지 사용가능)
						//static으로 메모리를 미리 할당
						//void는 함수가 끝날 때 리턴값이 없다.
						//main은 메인 함수로 쓰여지는것
						//String[] args는 args를 문자열로 사용하겠다 라는 의미

int a=1;		// a라는 변수가 가지고 있는 주솟값에 있는 메모리에 1이 있다는 뜻 (초기화)
int b=2;		// b라는 변수가 가지고 있는 주솟값에 있는 메모리에 2가 있다는 뜻 (초기화)
int c=0;		// c를 0으로 초기화시켜줌

c = a + b;		// a+b = c라는 연산자

System.out.println("IT융합학부 1971070 2학년 이재은 - 자바 연산자");	//출력
System.out.println("c값 : " + c);		//출력
	}
}