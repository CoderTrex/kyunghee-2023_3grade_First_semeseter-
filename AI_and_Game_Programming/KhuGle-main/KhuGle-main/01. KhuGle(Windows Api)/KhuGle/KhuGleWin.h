//
//	Dept. Software Convergence, Kyung Hee University
//	Prof. Daeho Lee, nize@khu.ac.kr
//
#pragma once

#include <windows.h>

class CKhuGleWin;
void KhuGleWinInit(CKhuGleWin *pApplication);

class CKhuGleWin
{
public:
	HWND m_hWnd;
	int m_nW, m_nH;
	
	// 현재 클래스에 대한 포인터이다. -> 내용을 쉐어하는데 이는 하나만 사용하니까!
	static CKhuGleWin *m_pWinApplication;

	int m_nDesOffsetX, m_nDesOffsetY;
	int m_nViewW, m_nViewH;

	// 시간 계산을 위한 변수들 -> 최신 c++에서 사용하는 시간 측정으로 바꿀 수 있음.
	_int64 m_TimeCountFreq, m_TimeCountStart, m_TimeCountEnd;
	double m_Fps, m_ElapsedTime;

	// 마우스 및 키보드 값
	bool m_bKeyPressed[256];
	bool m_bMousePressed[3];
	int m_MousePosX, m_MousePosY;

	WINDOWPLACEMENT m_wpPrev;

	static LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
	LRESULT CALLBACK WndProcInstanceMember(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

	void Fullscreen();

	void GetFps();
	virtual void Update();
	void OnPaint();

	void ToggleFpsView();

	CKhuGleWin(int nW, int nH);
	virtual ~CKhuGleWin();
	bool m_bViewFps;
};

