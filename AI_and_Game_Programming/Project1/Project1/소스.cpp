//#include <windows.h>
//
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR ipCmdline, int CmdShow)
//{	
//
//	/*함수의 사용 예제 및 활용*/
//	//MessageBox(NULL, ipCmdline, "Title", MB_OKCANCEL | MB_ICONEXCLAMATION);
//
//	/*함수의 실행결과에 따른 연속 실행 코드*/
//	if (MessageBox(NULL, ipCmdline, "Title", MB_OKCANCEL) == IDOK) {
//		MessageBox(NULL, ipCmdline, "Title", MB_ICONEXCLAMATION);
//	}
//	return 0;
//}

///**/
//LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) // 상태정보
//{
//	…
//		switch (message) { // 정수
//		case WM_CREATE: break; // 윈도우메세지_생성 -> 여기 스위치문에서 생성함
//			…
//		}
//	…
//}
//
//int APIENTRY WinMain(HINSTANCE hInstance,
//	HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
//{
//	WNDCLASSEX windowClass;
//	…
//		windowClass.lpfnWndProc = WndProc; // calㅣback 함수를 지정한 구조체에서 해당 정보를 저장함.
//	while (1) {
//		// 메세지를 계속해서 받음
//		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
//			…
//		}
//	}

//#include <windows.h>
//LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine,
//	int nCmdShow) {
//	WNDCLASSEX windowClass;
//	windowClass.cbSize = sizeof(WNDCLASSEX);
//	windowClass.style = CS_HREDRAW | CS_VREDRAW;
//	windowClass.lpfnWndProc = WindowProc;
//	windowClass.cbClsExtra = 0;
//	windowClass.cbWndExtra = 0;
//	windowClass.hInstance = hInstance;
//	windowClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
//	windowClass.hCursor = LoadCursor(NULL, IDC_ARROW);
//	windowClass.hbrBackground = NULL;
//	windowClass.lpszMenuName = NULL;
//	windowClass.lpszClassName = "WinApp Class";
//	windowClass.hIconSm = LoadIcon(NULL, IDI_WINLOGO);
//	if (!RegisterClassEx(&windowClass)) return 0;
//	HWND hwnd = CreateWindowEx(
//		NULL,
//		"WinApp Class",
//		"Title of Program",
//		WS_OVERLAPPEDWINDOW,
//		// Size and position
//		CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
//		NULL, // Parent window
//		NULL, // Menu
//		hInstance, // Instance handle
//		NULL // Additional application data
//	);
//	if (hwnd == NULL) return 0;
//	ShowWindow(hwnd, SW_SHOW);// nCmdShow);
//	MSG msg;
//	while (GetMessage(&msg, NULL, 0, 0) > 0) {
//		TranslateMessage(&msg);
//		DispatchMessage(&msg);
//	}
//	return 0;
//}

