using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tank : MonoBehaviour
{
    #region 멤버 변수
    //멤버변수 전진, 후진
    public int moveSpeed = 5;   //속도
    public float move;
    public float moveVertical;

    //좌우 이동
    public int rotSpeed = 120;
    public float rotate;
    public float rotHorizon;

    //터렛 회전
    public float rotTurret;
    public GameObject turret;   //유니티에서 직접 할당

    //포신 각도 조절
    public float keyGun;
    public GameObject gun_Right;
    public GameObject gun_Left;
    public GameObject gun_Midle;
    #endregion

    void Start()
    {

    }

    void Update()
    {
        //전진 후진
        move = moveSpeed * Time.deltaTime;      //d = v * t     디스턴스 = 속도 * 시간
        moveVertical = Input.GetAxis("Vertical");   //키보드 정보
        transform.Translate(Vector3.forward * move * moveVertical);//여기서 this는 탱크다 생략될뿐
        // Vector3 v = new Vector3(x,y,z)
        // ( 0 , 0 , 1) 이 값을 가지니까 x, y, 는 움직이지않고 z만 움직임

        //좌우 이동
        rotate = rotSpeed * Time.deltaTime;
        rotHorizon = Input.GetAxis("Horizontal");
        transform.Rotate(new Vector3(0.0f, rotate * rotHorizon, 0.0f));

        //터렛 좌우 이동
        rotTurret = Input.GetAxis("Window Shake X");
        turret.transform.Rotate(Vector3.up * rotTurret * rotate);   //여기선 터렛의 값
        // (0, 1, 0) 으로 사용 된다 y값만 사용


        //포신 각도 조절 가운데
        keyGun = Input.GetAxis("Mouse ScrollWheel");
        gun_Midle.transform.Rotate(Vector3.right * keyGun * 5);  // (1,0,0)

        //포신 오른쪽
        keyGun = Input.GetAxis("Mouse ScrollWheel");
        gun_Right.transform.Rotate(Vector3.down * keyGun * 5);

        //포신 왼쪽
        keyGun = Input.GetAxis("Mouse ScrollWheel");
        gun_Left.transform.Rotate(Vector3.up* keyGun * 5);

        #region 포신 각도 설정
        //포신의 각도 범위설정
        
        //가운데 포신 각도 설정
        Vector3 ang_Midle = gun_Midle.transform.eulerAngles;
        if (ang_Midle.x > 180)
            ang_Midle.x -= 360;
        ang_Midle.x = Mathf.Clamp(ang_Midle.x, -15, 10);
        gun_Midle.transform.eulerAngles = ang_Midle;

        //오른쪽 포신 각도 설정 x
        Vector3 ang_Right = gun_Right.transform.eulerAngles;
        if (ang_Right.x > 180)
            ang_Right.x -= 360;
         ang_Right.x = Mathf.Clamp(ang_Right.x, -15, 5);
         gun_Right.transform.eulerAngles = ang_Right;
        //오른쪽 포신 각도 설정 y
        if (ang_Right.y > 180)
            ang_Right.y -= 360;
        ang_Right.y = Mathf.Clamp(ang_Right.y, -1, 25);
        gun_Right.transform.eulerAngles = ang_Right;

        //왼쪽 포신 각도 설정 x
        Vector3 ang_Left = gun_Left.transform.eulerAngles;
        if (ang_Left.x > 180)
            ang_Left.x -= 360;
         ang_Left.x = Mathf.Clamp(ang_Left.x, -15, 5);
         gun_Left.transform.eulerAngles = ang_Left;
        //왼쪽 포신 각도 설정 y
        if (ang_Left.y > 180)
            ang_Left.y -= 360;
        ang_Left.y = Mathf.Clamp(ang_Left.y, -25, 1);
        gun_Left.transform.eulerAngles = ang_Left;


        #endregion
    }
}
