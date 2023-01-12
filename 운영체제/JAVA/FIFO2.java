import java.util.Scanner;			//Scanner를 사용하기위해 import를 통해 외부 클래스를 호출
							//Scanner는 java.util 패키지에 포함되어있다.

public class FIFO2{				//FIFO2라는 객체를 생성

		public static void main(String[] args) { 	//접근 한정자를 public으로 설정(어디서든지 사용가능)
						//static으로 메모리를 미리 할당
						//void는 함수가 끝날 때 리턴값이 없다.
						//main은 메인 함수로 쓰여지는것
						//String[] args는 args를 문자열로 사용하겠다 라는 의미
      System.out.println("IT융합학부 1971070 2학년 이재은 입력FIFO"+"\n");		//학과, 학번, 학년, 이름, 과제명 출력문
      int arr[]={0,0,0};					//arr 이라는 배열이 가르키는 주소 메모리 값을 3으로 선언과 동시에 0,0,0으로 초기화 
      int[] r = new int[10];				//r 이라는 배열이 가르키는 주소 메모리 값을 3으로 선언과 동시에 0,0,0으로 초기화 
      System.out.print("현재 배열 상태:");	//현재 배열상태 출력문

      for(int i=0;i<3;i++){				//0 ~ 2까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
      System.out.print(arr[i]+" "); 			//배열값 출력문
      }
      System.out.print("\n\n");			//줄바꿈

	Scanner in = new Scanner(System.in);		//객체를 생성 System.in은 키보드로 입력받기위해 사용


      for(int i=0;i<10;i++){			//0 ~ 4까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
         int ct=0;					//공백 검사의 횟수를 기록하기 위한 ct 변수
							//ct라는 변수가 가르키는 주소값의 메모리안에 0으로 값을 초기화
         int ct2=0;				//중복 검사의 횟수를 기록하기 위한 ct2 변수
							//ct2라는 변수가 가르키는 주소값의 메모리안에 0으로 값을 초기화
         int temp=0;				//공백 검사 시 공백 인덱스의 번호를 저장해두기 위한 temp 변수
							//temp라는 변수가 가르키는 주소값의 메모리안에 0으로 값을 초기화
	System.out.print( i + 1 +"번째 값을 입력해주세요 : " );	
	r[i] = in.nextInt();		//입력받은 정수를 변수를 a라는 주솟값이 가르키는 메모리에 저장

      System.out.println(i+1+"번째 삽입 값 : "+r[i]); 	// i+1 번째 삽입값 출력문
       for(int j=0;j<3;j++){ 			//0 ~ 2까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
          if(arr[j]==0) { 				//arr[j]==0이라면 조건문 실행         
             temp=j;				//temp = j 대입
             break;					//값을 대입한후 for문을 바로 탈출
      	  	  }
          else {					//arr[j]가 공백이 아니라면
          ct++;					//ct값 증가
       	}   
       }
       for(int j=0;j<3;j++) {			//0 ~ 2까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
          if(arr[j]==r[i]) {			//arr[j]값과 r[i]이 같다면
           ct2++;					//ct2 값 증가 (중복검사)
          }          
       }
       
       if(ct2==0) {				//ct2가 0이면 중복값이 없으므로
          arr[temp]=r[i];			//arr[temp]=r[i] 값 삽입
       }
       
       if((ct==3)&&(ct2==0)) {	//ct=3 검사 시 3번 증가하였으므로 arr[0], arr[1], arr[2] 모든 인덱스가 공백이 아닌 즉 포화상태, 
						//그리고 ct2=0 중복이 없다는 뜻
       arr[0]=arr[1];			//arr[]배열 값들을 앞으로 당겨줌
       arr[1]=arr[2];			//arr[1] = arr[2]
       arr[2]=r[i];				//r[i] 값을 arr[2]마지막 값에 넣어준다
       }
     
      System.out.print(i+1+"번째 삽입 후 결과 : ");		//i+1번째 삽입 후 결과 출력문
      for(int k=0;k<3;k++){						//0 ~ 2까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
      System.out.print(arr[k]+" "); 					//arr[k]값 출력문
      }
      System.out.println();						//줄바꿈
      } 
      System.out.print("\n"+"최종 배열 상태 : ");		//최종 배열상태 출력문
      for(int j=0;j<3;j++){						//0 ~ 2까지 1++ 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
         System.out.print(arr[j]+" ");				//arr[j]값 출력문
      }
   }
}