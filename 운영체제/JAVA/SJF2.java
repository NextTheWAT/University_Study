package test2;

public class SJF2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[] = { 0, 0, 0 };// 메모리
		int temparr[] = { 0, 0, 0 };// 윈도우
		int p[] = { 5, 2, 4, 3, 1 };// 넣을꺼
		int temp = 0;// 윈도우 들어갈 인덱스 위치
		int temp3 = 0;// 본체 들어갈 인덱스 위치
		int temp4 = 0;//

		for (int i = 0; i < 5; i++) {
			int temp2 = 0;// 윈도우 공백검사 넣을 곳
			int cnt = 0;// 윈도우 공백검사 cnt
			int cnt2 = 0;// 윈도우 중복검사 cnt
			int ant = 0;// 본제 공백검사 ant
			System.out.println((i + 1) + "번째 삽입 값 : " + p[i]);

			for (int j = 0; j < 3; j++)// (본체 배열 공백검사)
			{
				if (arr[j] == 0) {
					temp3 = j;
					break;
				} else {
					ant++;
				}
			}
			for (int j = 0; j < 3; j++)// (윈도우 공백검사)
			{
				if (temparr[j] == 0) {
					temp2 = j;
					break;
				} else {
					cnt++;
				}
			}
			for (int j = 0; j < 3; j++)// 중복 검사
			{
				if (temparr[j] == p[i]) {
					cnt2++;
				}
			}
			if (cnt2 == 0)// 중복이 없다면
			{
				temparr[temp2] = p[i];// p[i]넣을 값을 윈도우에 넣어준다.
				if (temparr[2] != 0)// 2번째 인덱스가 꽉차면 정렬해줌
				{
					for (int t = 0; t < 2; t++) {
						for (int k = 0; k < 2; k++)// 정렬를 위한 for문 해준다.
						{
							if (temparr[k] > temparr[k + 1])// 정렬을 해준다.
							{
								temp = temparr[k];
								temparr[k] = temparr[k + 1];
								temparr[k + 1] = temp;
							}
						}
					}
					arr[temp3] = temparr[0];
				}
				if (arr[2] != 0) {
					for (int t = 0; t < 2; t++) {
						for (int k = 0; k < 2; k++)// 정렬를 위한 for문 해준다.
						{
							if (arr[k] < arr[k + 1])// 정렬을 해준다.
							{
								temp4 = arr[k + 1];
								arr[k + 1] = arr[k];
								arr[k] = temp4;
							}
						}
					}
				}

			}
			System.out.print("윈도우 arrtemp의 값 : ");
			for (int j = 0; j < 3; j++) {
				System.out.print(temparr[j] + " ");
			}
			System.out.println();
			System.out.print("본체 arr의 값 : ");
			for (int j = 0; j < 3; j++) {
				System.out.print(arr[j] + " ");
			}
			System.out.println();
		}

	}
}