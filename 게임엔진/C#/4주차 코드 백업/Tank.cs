using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tank : MonoBehaviour
{
    #region ��� ����
    //������� ����, ����
    public int moveSpeed = 5;   //�ӵ�
    public float move;
    public float moveVertical;

    //�¿� �̵�
    public int rotSpeed = 120;
    public float rotate;
    public float rotHorizon;

    //�ͷ� ȸ��
    public float rotTurret;
    public GameObject turret;   //����Ƽ���� ���� �Ҵ�

    //���� ���� ����
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
        //���� ����
        move = moveSpeed * Time.deltaTime;      //d = v * t     ���Ͻ� = �ӵ� * �ð�
        moveVertical = Input.GetAxis("Vertical");   //Ű���� ����
        transform.Translate(Vector3.forward * move * moveVertical);//���⼭ this�� ��ũ�� �����ɻ�
        // Vector3 v = new Vector3(x,y,z)
        // ( 0 , 0 , 1) �� ���� �����ϱ� x, y, �� ���������ʰ� z�� ������

        //�¿� �̵�
        rotate = rotSpeed * Time.deltaTime;
        rotHorizon = Input.GetAxis("Horizontal");
        transform.Rotate(new Vector3(0.0f, rotate * rotHorizon, 0.0f));

        //�ͷ� �¿� �̵�
        rotTurret = Input.GetAxis("Window Shake X");
        turret.transform.Rotate(Vector3.up * rotTurret * rotate);   //���⼱ �ͷ��� ��
        // (0, 1, 0) ���� ��� �ȴ� y���� ���


        //���� ���� ���� ���
        keyGun = Input.GetAxis("Mouse ScrollWheel");
        gun_Midle.transform.Rotate(Vector3.right * keyGun * 5);  // (1,0,0)

        //���� ������
        keyGun = Input.GetAxis("Mouse ScrollWheel");
        gun_Right.transform.Rotate(Vector3.down * keyGun * 5);

        //���� ����
        keyGun = Input.GetAxis("Mouse ScrollWheel");
        gun_Left.transform.Rotate(Vector3.up* keyGun * 5);

        #region ���� ���� ����
        //������ ���� ��������
        
        //��� ���� ���� ����
        Vector3 ang_Midle = gun_Midle.transform.eulerAngles;
        if (ang_Midle.x > 180)
            ang_Midle.x -= 360;
        ang_Midle.x = Mathf.Clamp(ang_Midle.x, -15, 10);
        gun_Midle.transform.eulerAngles = ang_Midle;

        //������ ���� ���� ���� x
        Vector3 ang_Right = gun_Right.transform.eulerAngles;
        if (ang_Right.x > 180)
            ang_Right.x -= 360;
         ang_Right.x = Mathf.Clamp(ang_Right.x, -15, 5);
         gun_Right.transform.eulerAngles = ang_Right;
        //������ ���� ���� ���� y
        if (ang_Right.y > 180)
            ang_Right.y -= 360;
        ang_Right.y = Mathf.Clamp(ang_Right.y, -1, 25);
        gun_Right.transform.eulerAngles = ang_Right;

        //���� ���� ���� ���� x
        Vector3 ang_Left = gun_Left.transform.eulerAngles;
        if (ang_Left.x > 180)
            ang_Left.x -= 360;
         ang_Left.x = Mathf.Clamp(ang_Left.x, -15, 5);
         gun_Left.transform.eulerAngles = ang_Left;
        //���� ���� ���� ���� y
        if (ang_Left.y > 180)
            ang_Left.y -= 360;
        ang_Left.y = Mathf.Clamp(ang_Left.y, -25, 1);
        gun_Left.transform.eulerAngles = ang_Left;


        #endregion
    }
}
