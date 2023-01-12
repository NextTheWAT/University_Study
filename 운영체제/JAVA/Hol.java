import java.util.Scanner;

public class Hol {
	public static void main(String[] args) { 


int num=0;
int i=0;
int[] arr = new int[10];

Scanner in = new Scanner(System.in);	

do{
System.out.print("arr값을 입력해주세요 : " );
arr[i] = in.nextInt();
if(arr[i] < 0){
break;
}
else if(arr[i]%2 ==0){
num = num + arr[i];
}
i++;
}
while(i<5);

System.out.println("짝수의 합 : " + num);	

for(int c=0; c<5; c++){
for(int j=0; j<=c; j++){
System.out.print("*");
}
System.out.println(" ");
}
	}
}
