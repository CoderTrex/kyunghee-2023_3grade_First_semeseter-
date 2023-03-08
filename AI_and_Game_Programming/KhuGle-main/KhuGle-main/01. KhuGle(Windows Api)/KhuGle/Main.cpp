//
//	Dept. Software Convergence, Kyung Hee University
//	Prof. Daeho Lee, nize@khu.ac.kr
//

#include "KhuGleWin.h"
#include <iostream>

#pragma warning(disable:4996)

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#ifdef _DEBUG
#ifndef DBG_NEW
// 디버그에서 메모리 릭과 같은 에러를 탐지하기 위해 new는 디버그 모드에서 다음과 같은 정보를 같이 가지고 간다.
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ ) 
#define new DBG_NEW
#endif
#endif  // _DEBUG


int main()
{
	CKhuGleWin *pKhuGleSample = new CKhuGleWin(640, 480);

	KhuGleWinInit(pKhuGleSample);
	return 0;
}