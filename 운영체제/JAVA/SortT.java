import java.util.Scanner;			//Scanner를 사용하기위해 import를 통해 외부 클래스를 호출
							//Scanner는 java.util 패키지에 포함되어있다.

public class SortT{				//FIFO2라는 객체를 생성
			public static void main(String[] args) { 	//접근 한정자를 public으로 설정(어디서든지 사용가능)

	int[] arr = new int[3];
	int temp;
	
	for(int i=0; i<3; i++){
	arr[i] = i+1;
	}
	for(int i=0; i<3; i++){
	System.out.print(arr[i] + " ");
	}
	System.out.println();	
for(int i=0; i<1; i++){	
	temp = arr[2];
	arr[2] = arr[1];
	arr[1] = arr[0];
	arr[0] = temp;
	}
	System.out.println();	

	for(int i=0; i<3; i++){
	System.out.print(arr[i] + " ");
	}
	System.out.println();	

for(int i=0; i<1; i++){	
	temp = arr[0];
	arr[0] = arr[1];
	arr[1] = arr[2];
	arr[2] = temp;
	
	}
	System.out.println();	

	for(int i=0; i<3; i++){
	System.out.print(arr[i] + " ");
	}
	System.out.println();	
	

	}
}