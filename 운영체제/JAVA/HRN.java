public class HRN {						//FIFO라는 객체를 생성
	public static void main(String[] args) {		//접근 한정자를 public으로 설정(어디서든지 사용가능)
								//static으로 메모리를 미리 할당
								//void는 함수가 끝날 때 리턴값이 없다.
								//main은 메인 함수로 쓰여지는것
								//String[] args는 args를 문자열로 사용하겠다 라는 의미
		float temp=0;				//프로세스 우선순위의 값을 정렬할 실수로 선언된 temp
		int temp2=0;				//나머지 도착시간,시작시간,종료시간,실행시간 정렬을위해 정수로 선언된 temp
		int[] end = new int[5];			//종료시간 크기5 end 배열 선언
		int[] start = new int[5];			//시작시간 크기5 start 배열 선언
		int[] wait = new int[5];			//대기시간 크기5 wait 배열 선언
		int[] arrival = {0, 1, 2, 3, 4};		//도착시간 크기5 arrival 0,1,2,3,4로 초기화한 배열 선언
		int[] run = {10, 28, 6, 4, 14};		//실행시간 크기5 run 10,28,6,4,14로 초기화한 배열 선언
		int[] process_num = {1, 2, 3, 4, 5};	//프로세스 번호 크기5 process_num 1,2,3,4,5로 초기화한 배열 선언
		float[] process = new float[5];		//프로세스 우선순위 값 크기5 인 배열 선언
		end[0] = 10; start[0] = 0;			//프로세스 1번째 종료시간과 시작시간 값 초기화
		
		for(int i=1; i<5; i++) {			//1 ~ 4까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
								//시간들 계산하는 for문	1번 프로세스는 고정 그래서 1부터 시작
			wait[i] = run[0] - arrival[i];		//대기시간 구하는 계산식
			process[i] = (run[i] + wait[i] + process[i-1])/run[i];		//프로세스 우선순위 값 구하는 계산식
			end[i] = end[i] + run[i];						//종료시간 계산식
		}
		for(int j=1; j<3; j++) {					//1 ~ 2까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
			for(int i=1; i<4; i++) {				//1 ~ 4까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식	
										//1부터 시작하는 이유는 프로세스1번은 정렬을 할 필요가 없기 때문
				if(process[i] < process[i+1]) {		//프로세스 우선순위 값이 큰 순서대로 나머지 값도 다 같이 정렬해주는 if문
					temp = process[i];			//우선순위값인 process 정렬
					process[i] = process[i+1];
					process[i+1] = temp;
					temp2 = process_num[i];		//프로세스번호 변수인 process_num 값 정렬
					process_num[i] = process_num[i+1];
					process_num[i+1] = temp2;
					temp2 = end[i];			//종료시간 변수인 end 값 정렬
					end[i] = end[i+1];
					end[i+1] = temp2;
					temp2 = arrival[i];			//도착시간 변수인 arrival 값 정렬
					arrival[i] = arrival[i+1];
					arrival[i+1] = temp2;
					temp2 = run[i];			//실행시간 변수인 run 값 정렬
					run[i] = run[i+1];
					run[i+1] = temp2;
				}
			}
		}
		for(int i=1; i<5; i++) {			//1 ~ 4까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
								//프로세스1번 말고 나머지 종료시간, 시작시간 구하는 for문
			end[i] = end[i] + end[i-1];	//종료시간값 구하는 계산식
			start[i] = end[i-1]+1;		//시작시간값 구하는 계산식
		}
		System.out.println("IT융합학부 1971070 2학년 이재은 HRN"); 				// 학부, 학번, 학년, 이름, 과제명 출력문, 줄바꿈
		System.out.print("프로세스번호  도착시간	 시작시간	 종료시간	 실행시간");	//프로세스번호, 도착시간, 시작시간, 종료시간, 실행시간 출력문
		System.out.println();										//줄바꿈
		for(int i=0; i<5; i++) {					//0 ~ 4까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
			System.out.println("  p" + process_num[i] +"	  	"+ arrival[i]+" 	  "+start[i]+" 		  "+end[i]+" 		  "+run[i]);	
		}								//프로세스번호, 도착시간, 시작시간, 종료시간, 실행시간 배열값 출력문
	}
}