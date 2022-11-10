import java.util.Scanner;	//Scanner를 사용하기위해 import를 통해 외부 클래스를 호출
					//Scanner는 java.util 패키지에 포함되어있다.

public class Both_Sort {		//Bubble_Sort라는 클래스 객체를 생성
		public static void main(String[] args) {//접근 한정자를 public으로 설정(어디서든지 사용가능)
						//static으로 메모리를 미리 할당
						//void는 함수가 끝날 때 리턴값이 없다.
						//main은 메인 함수로 쓰여지는것
						//String[] args는 args를 문자열로 사용하겠다 라는 의미

int[] arr = new int[5];
int temp =0;
						//값 초기화

Scanner in = new Scanner(System.in);

System.out.println("IT융합학부 1971070 2학년 이재은 - 양방향정렬");		//출력

for(int i=0; i<5; i++){				//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
System.out.print( i+1 + "번째 값을 입력해주세요 : " );			//0~4까지 1씩 증가 출력문
	 arr[i] = in.nextInt();						//Scanner 입력
}
		for(int j=0; j<2; j++){		//0~4까지 1씩 증가//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
			for(int i=0; i<4; i++){		//0~3까지 1씩 증가 조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
				if(arr[i] > arr[i+1]){		//arr[i]가 a[i+1]보다 클때 실행
				temp = arr[i];		//temp, arr[i] 을 템프로 교환 
				arr[i] = arr[i+1];		//arr[i] 와 arr[i+1]를 교환 
				arr[i+1] = temp;			//arr[i+1]을 temp와 교환 
					}
					System.out.print(j+1 + " - " + i+1+ "번째 정렬 : " );		
						for(int c=0; c<5; c++){		
						System.out.print(arr[c]+ " "); 		
				}
				System.out.println("");			
			}

			for(int c=4; c>=0; c--){		//3~0까지 1씩 감소 //조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
				if(arr[c] < arr[c-1]){		//arr[c]가 a[c-1]보다 작을때
				temp = arr[c];		//temp, arr[c] 을 템프로 교환 
				arr[c] = arr[c-1];		//arr[c] 와 arr[c-1]를 교환 
				arr[c-1] = temp;			//arr[c-1]을 temp와 교환 
					}
					System.out.print(j+1 + " - " + c+1+ "번째 정렬 : " );		
						for(int d=0; d<5; c++){		
						System.out.print(arr[d]+ " "); 		
				}
				System.out.println("");	
		}
}
	System.out.println("=====data=====");				//출력문 
	for(int i=0; i<5; i++){							//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식으로 0~4까지 1++ 
		System.out.println(i+1 + "번째 숫자 - " + arr[i]);			//마지막 정렬된 코드 확인 
	}
}
}