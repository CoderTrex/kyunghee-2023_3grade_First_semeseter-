#include <windows.h>

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR ipCmdline, int CmdShow)
{	

	/*�Լ��� ��� ���� �� Ȱ��*/
	//MessageBox(NULL, ipCmdline, "Title", MB_OKCANCEL | MB_ICONEXCLAMATION);

	/*�Լ��� �������� ���� ���� ���� �ڵ�*/
	if (MessageBox(NULL, ipCmdline, "Title", MB_OKCANCEL) == IDOK) {
		MessageBox(NULL, ipCmdline, "Title", MB_ICONEXCLAMATION);
	}
	return 0;
}
