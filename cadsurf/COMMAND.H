#ifndef _Command_h_
#define _Command_h_

class CPoint3D;

#ifdef __cplusplus

enum ECommandType	// ������
{
	ctUnknown = 0,
//  ��������������
	ctCreateLine = 1,		// ��������
	ctCreateRectangle = 2,	// ��������
	ctCreateCircle = 3,		// ����Բ
	ctCreateArc = 4,		// ����Բ��
	ctCreateEllipse = 5,    //������Բ
	ctCreateText = 6,       //�����ı�
	ctCreatePolygon = 7,    //����� 
	ctCreateBlock  = 8,		//��
	ctCreateConnect = 9,    //����
	// ...������������
//  �޸�������
	ctMove = 11,			// �ƶ�
	ctRotate = 12,			// ��ת
	ctMirror = 13,			// ����
	// ...������������
//�޸���ͼ������
	ctViewPan = 20 ,
	ctViewZoomRgn = 21
};

class CCommand
{
protected:
	int		m_nStep ; // ���������
	BOOL    m_bCaptured; //��׽
	CPoint3D m_ptCapture; //��׽��
	
	void     ShowCpaturePoint(const CPoint3D &pos,BOOL bShow = FALSE);
	BOOL     GetNearKeyPoint(CPoint3D &pt);
public:
	CCommand() {m_nStep = 0;m_bCaptured = FALSE;}
	~CCommand() {}

	virtual int GetType() = 0; // ������������ ECommandType
	virtual int OnLButtonDown(UINT nFlags, const CPoint3D& pos) = 0 ;
	virtual int OnMouseMove(UINT nFlags, const CPoint3D& pos);
	virtual int OnRButtonDown(UINT nFlags, const CPoint3D& pos) = 0 ;
	virtual int OnLButtonDblClk(UINT nFlags, const CPoint3D& pos) {return 0;}
	virtual int Cancel() = 0 ;
} ;

#endif

#endif