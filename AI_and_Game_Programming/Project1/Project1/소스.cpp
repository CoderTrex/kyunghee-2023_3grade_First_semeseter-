#include <windows.h>

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR ipCmdline, int CmdShow)
{	

	/*함수의 사용 예제 및 활용*/
	//MessageBox(NULL, ipCmdline, "Title", MB_OKCANCEL | MB_ICONEXCLAMATION);

	/*함수의 실행결과에 따른 연속 실행 코드*/
	if (MessageBox(NULL, ipCmdline, "Title", MB_OKCANCEL) == IDOK) {
		MessageBox(NULL, ipCmdline, "Title", MB_ICONEXCLAMATION);
	}
	return 0;
}
