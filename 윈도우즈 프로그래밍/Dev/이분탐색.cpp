#include <iostream>//C++을 구동하기 위한 헤더 파일 선언
using namespace std;//std::의 접두어를 생략한다.


class Base3 {
   int low = 0;
   int mid;
    int count = 0;
   int key;
    int arr[5] = { 1,2,3,4,5 };
   int top = 4;
public:
   void BASE3(int a) { key = a; }//p의 값을 a로 업데이트해준다.
   void Baseprint() {//Base 클래스에 있는 Base_print() 함수를 나타낸다.
      for (int i = 0; i < 5; i++)
      {
         mid = (low + top) / 2;//중앙값
         if (arr[mid] == key)//key값이 mid 값이랑 같을때 mid 반환
         {
            count++;
            cout << "비교 횟수는 " << count << "번 비교를 했습니다."<<endl;
            cout << arr[mid]<<"값을 찾았습니다." << endl;
            break;
         }
         else if (arr[mid] > key)//key 값이 mid 값보다 작을때 (범위를 앞쪽으로 축소)
         {
            top = mid;
            count++;
            cout << "비교 횟수는 " << count << "번 비교를 했습니다."<<endl;
            cout << "아직 같은 수가 없습니다." << arr[mid] << " 와 " << key << "는 같지 않습니다."<<endl;
         }
         else if (arr[mid] < key)//key 값이 mid의 값보다 클때 (범위를 뒤쪽으로 축소)
         {
            low = mid;
            count++;
            cout << "비교 횟수는 " << count << "번 비교를 했습니다."<<endl;
            cout << "아직 같은 수가 없습니다." << arr[mid] << "와" << key << "는 같지 않습니다." << endl;
         }
      }
   }
};

class Sun : public Base3
{
   int m;
public:
   Sun(int a) { m = a; }
   void Sun_print()
   {
      cout << "찾는중..." << endl;
   }
};
int main()
{
   int a;
   cout << "1971049 양재훈 - 이분탐색" << endl;
   cout << "찾고 싶은 숫자를 입력하세요 : ";
   cin >> a;
   Sun Pa(a);
   Pa.Sun_print();
   Pa.BASE3(a);
   Pa.Baseprint();

   return 0;
}
