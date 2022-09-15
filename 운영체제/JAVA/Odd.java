public class Odd {		//Odd라는 클래스 객체를 생성
		public static void main(String[] args) {//접근 한정자를 public으로 설정(어디서든지 사용가능)
						//static으로 메모리를 미리 할당
						//void는 함수가 끝날 때 리턴값이 없다.
						//main은 메인 함수로 쓰여지는것
						//String[] args는 args를 문자열로 사용하겠다 라는 의미

int a=0;					//데이터타입이 int인 정수 a가 가지고 있는 주솟값의 메모리에 0이 있는것
						//값 초기화

System.out.println("IT융합학부 1971070 2학년 이재은 - 홀수의 합");		//출력

for(int i=1; i<=10; i++)		//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식으로 
{					//1부터 10까지 1씩 증가
	if(i%2==1){ a=a+i;		// if문 i%2==1일떄 값은 1이 나온다 트루라면 a에다가 홀수값을 더해준다
System.out.println(i + "번째 홀수 : " +i);}		// 출력
}

System.out.println("홀수들의 합 : " + a);		//출력

	}
}