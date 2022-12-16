
// MFCApplicationDlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication.h"
#include "MFCApplicationDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()

};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)

END_MESSAGE_MAP()


// CMFCApplicationDlg 대화 상자
CMFCApplicationDlg::CMFCApplicationDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION_DIALOG, pParent)
	, input_name(_T(""))
	, m_img_input_name(_T(""))
	, m_m1_name(_T(""))
	, m_m2_name(_T(""))
	, m_m3_name(_T(""))
	, m_m4_name(_T(""))
	, m_m5_name(_T(""))
	, m_m6_name(_T(""))
	, m_m7_name(_T(""))
	, m_m8_name(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplicationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_INPUT, img_input);
	DDX_Text(pDX, IDC_INPUT_NAME, m_img_input_name);
	DDX_Control(pDX, IDC_IMAGE_BUTTON, m_img_button);
	DDX_Control(pDX, IDC_M1, m_m1);
	DDX_Control(pDX, IDC_M2, m_m2);
	DDX_Control(pDX, IDC_M3, m_m3);
	DDX_Control(pDX, IDC_M4, m_m4);
	DDX_Control(pDX, IDC_M5, m_m5);
	DDX_Control(pDX, IDC_M6, m_m6);
	DDX_Control(pDX, IDC_M7, m_m7);
	DDX_Control(pDX, IDC_M8, m_m8);
	DDX_Text(pDX, IDC_EDIT1, m_m1_name);
	DDX_Text(pDX, IDC_EDIT2, m_m2_name);
	DDX_Text(pDX, IDC_EDIT3, m_m3_name);
	DDX_Text(pDX, IDC_EDIT4, m_m4_name);
	DDX_Text(pDX, IDC_EDIT5, m_m5_name);
	DDX_Text(pDX, IDC_EDIT6, m_m6_name);
	DDX_Text(pDX, IDC_EDIT7, m_m7_name);
	DDX_Text(pDX, IDC_EDIT8, m_m8_name);
	DDX_Control(pDX, IDC_DOWN_IMG1, m_down_img1);
	DDX_Control(pDX, IDC_DOWN_IMG2, m_down_img2);
	DDX_Control(pDX, IDC_DOWN_IMG3, m_down_img3);
	DDX_Control(pDX, IDC_DOWN_IMG4, m_down_img4);
	DDX_Control(pDX, IDC_DOWN_IMG5, m_down_img5);
	DDX_Control(pDX, IDC_DOWN_IMG6, m_down_img6);
	DDX_Control(pDX, IDC_DOWN_IMG7, m_down_img7);
	DDX_Control(pDX, IDC_DOWN_IMG8, m_down_img8);
	DDX_Control(pDX, IDC_UP_IMG1, m_up_img1);
	DDX_Control(pDX, IDC_UP_IMG2, m_up_img2);
	DDX_Control(pDX, IDC_UP_IMG3, m_up_img3);
	DDX_Control(pDX, IDC_UP_IMG4, m_up_img4);
	DDX_Control(pDX, IDC_UP_IMG5, m_up_img5);
	DDX_Control(pDX, IDC_UP_IMG6, m_up_img6);
	DDX_Control(pDX, IDC_UP_IMG7, m_up_img7);
	DDX_Control(pDX, IDC_UP_IMG8, m_up_img8);
}

BEGIN_MESSAGE_MAP(CMFCApplicationDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_GETMINMAXINFO()
	
	ON_BN_CLICKED(IDC_START_END, &CMFCApplicationDlg::OnBnClickedStartEnd)
	ON_BN_CLICKED(IDC_IMAGE, &CMFCApplicationDlg::OnBnClickedImage)
//	ON_WM_ERASEBKGND()
	//ON_EN_CHANGE(IDC_EDIT1, &CMFCApplicationDlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_IMAGE_BUTTON, &CMFCApplicationDlg::OnBnClickedImageButton)
	ON_BN_CLICKED(IDC_GAME2, &CMFCApplicationDlg::OnBnClickedGame2)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_DOWN1, &CMFCApplicationDlg::OnBnClickedDown1)
	ON_BN_CLICKED(IDC_DOWN2, &CMFCApplicationDlg::OnBnClickedDown2)
	ON_BN_CLICKED(IDC_DOWN3, &CMFCApplicationDlg::OnBnClickedDown3)
	ON_BN_CLICKED(IDC_DOWN4, &CMFCApplicationDlg::OnBnClickedDown4)
	ON_BN_CLICKED(IDC_DOWN5, &CMFCApplicationDlg::OnBnClickedDown5)
	ON_BN_CLICKED(IDC_DOWN6, &CMFCApplicationDlg::OnBnClickedDown6)
	ON_BN_CLICKED(IDC_DOWN8, &CMFCApplicationDlg::OnBnClickedDown8)
	ON_BN_CLICKED(IDC_DOWN7, &CMFCApplicationDlg::OnBnClickedDown7)
	ON_BN_CLICKED(IDC_GAME1, &CMFCApplicationDlg::OnBnClickedGame1)
	ON_BN_CLICKED(IDC_UP1, &CMFCApplicationDlg::OnBnClickedUp1)
	ON_BN_CLICKED(IDC_UP2, &CMFCApplicationDlg::OnBnClickedUp2)
	ON_BN_CLICKED(IDC_UP3, &CMFCApplicationDlg::OnBnClickedUp3)
	ON_BN_CLICKED(IDC_UP4, &CMFCApplicationDlg::OnBnClickedUp4)
	ON_BN_CLICKED(IDC_UP5, &CMFCApplicationDlg::OnBnClickedUp5)
	ON_BN_CLICKED(IDC_UP6, &CMFCApplicationDlg::OnBnClickedUp6)
	ON_BN_CLICKED(IDC_UP7, &CMFCApplicationDlg::OnBnClickedUp7)
	ON_BN_CLICKED(IDC_UP8, &CMFCApplicationDlg::OnBnClickedUp8)
END_MESSAGE_MAP()


// CMFCApplicationDlg 메시지 처리기
BOOL CMFCApplicationDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}

	}

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.
	if (bOpen == false)
	{
		bOpen = m_file.Open(_T(".\\temp.txt"), CStdioFile::modeCreate | CStdioFile::modeNoTruncate | CStdioFile::modeReadWrite);
		if (!bOpen) {
			AfxMessageBox(_T("Open Error"));
		}
	}
	srand((unsigned int)time(NULL));
	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CMFCApplicationDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 애플리케이션의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CMFCApplicationDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
	//배경 지정
	CClientDC dc(this);
	CImage back_ground;
	back_ground.Load(L"res/back.png");
	back_ground.Draw(dc, 0, 0);
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CMFCApplicationDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMFCApplicationDlg::OnGetMinMaxInfo(MINMAXINFO* lpMMI)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	lpMMI->ptMaxTrackSize = CPoint(1280, 760);
	lpMMI->ptMinTrackSize = CPoint(1280, 760);
	CDialogEx::OnGetMinMaxInfo(lpMMI);
}

void CMFCApplicationDlg::OnBnClickedStartEnd()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//main으로 돌아가면서 이미지 불러오기 화면 끄기
	img_input_window(false);
	Invalidate();

	//msize 이미지 보기
	msize_img_window(true);

	down_img_window(false);
	up_img_window(false);
	//저장되어 있는 이미지 불러옴
	read_img();
	msize_put_img();
	g2_game = false;
	g1_game = false;
}

void CMFCApplicationDlg::OnBnClickedImage()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//이미지 불러오기 위한 객체 시각화
	img_input_window(true);
	msize_img_window(false);
	up_img_window(false);
	down_img_window(false);
	Invalidate();


}

void CMFCApplicationDlg::OnBnClickedImageButton()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	

	//이미지 불러오는 과정
	if (m_image_uploading == false)
	{
		GetDlgItem(IDC_INPUT)->ShowWindow(true);
		m_img_button.SetWindowTextW(L"추가");
		CFileDialog dig(true);
		if (dig.DoModal() == IDOK)
		{
			put_img(img_input, dig.GetPathName());
			GetDlgItem(IDC_INPUT_NAME)->ShowWindow(true);
			input_path = dig.GetPathName();
			MessageBox(input_path);
		}
		m_image_uploading = true;
		
	}
	else
	{
		
		//이미지가 추가 입력되었기 때문에 +1 해준 다음 수정
		CString line;
		int img_num = read_img_num();
		
		img_num++;
		line.Format(_T("%d"), img_num);
		m_file.SeekToBegin();
		m_file.WriteString(line);
		//이름 저장
		m_file.SeekToEnd();
		UpdateData(true);
		m_file.WriteString(m_img_input_name);
		m_file.WriteString(_T("\n"));
		m_img_input_name = L"";
		UpdateData(false);
		//추가 버튼 입력시 이미지 주소 및 이름 저장
		m_file.WriteString(input_path);
		m_file.WriteString(_T("\n"));
		m_img_button.SetWindowTextW(L"이미지 불러오기");
		m_image_uploading = false;
		MessageBox(L"카드가 추가되었습니다.");
		Invalidate(true);
	}
}

//이미지 상자에 이미지를 넣는 함수
//인자로 (이미지의 CStatic, 경로의 CString)
void CMFCApplicationDlg::put_img(CStatic& img_box, CString path)
{
	if (path != _T(""))
	{
		CImage img;
		CRect rect;
		CDC* dc;
		img.Load(path);
		img_box.GetWindowRect(rect);
		dc = img_box.GetDC();
		img.StretchBlt(dc->m_hDC, 0, 0, rect.Width(), rect.Height(), SRCCOPY);
		ReleaseDC(dc);
	}
}

void CMFCApplicationDlg::read_img()
{
	int img_num = read_img_num();
	MessageBox(L"카드를 불러옵니다.");
	int img_rand[8] = { 0 };
	bool check = false;
	int for_num = img_num;
	//사진 수가 적으면 8번 반복 안함
	if (img_num > 8)
	{
		for_num = 8;
	}
	
	for (int i = 0; i < for_num; i++)
	{
		check = false;
		//랜덤하게 불려온 카드가 겹치는 것을 방지
		img_rand[i] = rand() % img_num;
		for (int j = 0; j < i; j++)
		{
			if (img_rand[j] == img_rand[i])
			{
				check = true;
			}
		}
		img_info1[i] = read_n_line(img_rand[i]*2 + 2);
		img_info2[i] = read_n_line(img_rand[i]*2 + 3);
		if (check == true)
		{
			i--;
		}
	}
}

void CMFCApplicationDlg::msize_put_img()
{
	put_img(m_m1, img_info2[0]);
	put_img(m_m2, img_info2[1]);
	put_img(m_m3, img_info2[2]);
	put_img(m_m4, img_info2[3]);
	put_img(m_m5, img_info2[4]);
	put_img(m_m6, img_info2[5]);
	put_img(m_m7, img_info2[6]);
	put_img(m_m8, img_info2[7]);

	m_m1_name = img_info1[0];
	m_m2_name = img_info1[1];
	m_m3_name = img_info1[2];
	m_m4_name = img_info1[3];
	m_m5_name = img_info1[4];
	m_m6_name = img_info1[5];
	m_m7_name = img_info1[6];
	m_m8_name = img_info1[7];
	UpdateData(false);
}

int CMFCApplicationDlg::read_img_num()
{
	//메모장 첫줄에는 저장된 이미지의 수
	//첫 줄로 이동 후 숫자를 int로 저장
	CString line;
	line = read_n_line(1);
	int img_num;
	//sscanf_s((char*)(LPCTSTR)line, " %d", &img_num);
	img_num = _ttoi(line);
	return img_num;
}

CString CMFCApplicationDlg::read_n_line(int n)
{
	m_file.SeekToBegin();
	CString line;
	for (int i = 0; i < n; i++)
	{
		m_file.ReadString(line);
	}
	return line;
}

void CMFCApplicationDlg::msize_img_window(bool sta)
{
	GetDlgItem(IDC_M1)->ShowWindow(sta);
	GetDlgItem(IDC_M2)->ShowWindow(sta);
	GetDlgItem(IDC_M3)->ShowWindow(sta);
	GetDlgItem(IDC_M4)->ShowWindow(sta);
	GetDlgItem(IDC_M5)->ShowWindow(sta);
	GetDlgItem(IDC_M6)->ShowWindow(sta);
	GetDlgItem(IDC_M7)->ShowWindow(sta);
	GetDlgItem(IDC_M8)->ShowWindow(sta);
	GetDlgItem(IDC_EDIT1)->ShowWindow(sta);
	GetDlgItem(IDC_EDIT2)->ShowWindow(sta);
	GetDlgItem(IDC_EDIT3)->ShowWindow(sta);
	GetDlgItem(IDC_EDIT4)->ShowWindow(sta);
	GetDlgItem(IDC_EDIT5)->ShowWindow(sta);
	GetDlgItem(IDC_EDIT6)->ShowWindow(sta);
	GetDlgItem(IDC_EDIT7)->ShowWindow(sta);
	GetDlgItem(IDC_EDIT8)->ShowWindow(sta);

}

void CMFCApplicationDlg::img_input_window(bool sta)
{
	GetDlgItem(IDC_INPUT)->ShowWindow(sta);
	GetDlgItem(IDC_INPUT_NAME)->ShowWindow(sta);
	GetDlgItem(IDC_IMAGE_BUTTON)->ShowWindow(sta);
}

void CMFCApplicationDlg::down_img_window(bool sta)
{
	GetDlgItem(IDC_DOWN_IMG1)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN_IMG2)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN_IMG3)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN_IMG4)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN_IMG5)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN_IMG6)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN_IMG7)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN_IMG8)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN1)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN2)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN3)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN4)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN5)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN6)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN7)->ShowWindow(sta);
	GetDlgItem(IDC_DOWN8)->ShowWindow(sta);
}

void CMFCApplicationDlg::up_img_window(bool sta)
{
	GetDlgItem(IDC_UP_IMG1)->ShowWindow(sta);
	GetDlgItem(IDC_UP_IMG2)->ShowWindow(sta);
	GetDlgItem(IDC_UP_IMG3)->ShowWindow(sta);
	GetDlgItem(IDC_UP_IMG4)->ShowWindow(sta);
	GetDlgItem(IDC_UP_IMG5)->ShowWindow(sta);
	GetDlgItem(IDC_UP_IMG6)->ShowWindow(sta);
	GetDlgItem(IDC_UP_IMG7)->ShowWindow(sta);
	GetDlgItem(IDC_UP_IMG8)->ShowWindow(sta);
	GetDlgItem(IDC_UP1)->ShowWindow(sta);
	GetDlgItem(IDC_UP2)->ShowWindow(sta);
	GetDlgItem(IDC_UP3)->ShowWindow(sta);
	GetDlgItem(IDC_UP4)->ShowWindow(sta);
	GetDlgItem(IDC_UP5)->ShowWindow(sta);
	GetDlgItem(IDC_UP6)->ShowWindow(sta);
	GetDlgItem(IDC_UP7)->ShowWindow(sta);
	GetDlgItem(IDC_UP8)->ShowWindow(sta);
}

void CMFCApplicationDlg::button_window(bool sta)
{
	GetDlgItem(IDC_START_END)->ShowWindow(sta);
	GetDlgItem(IDC_IMAGE)->ShowWindow(sta);
	GetDlgItem(IDC_GAME1)->ShowWindow(sta);
	GetDlgItem(IDC_GAME2)->ShowWindow(sta);
	
}

void CMFCApplicationDlg::OnBnClickedGame1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	g1_correct_num = 0;
	g1_game = true;
	g2_game = false;
	if (read_img_num() < 8)
	{
		MessageBox(L"게임을 위해서는 최소 8장의 이미지가 필요합니다.");
	}
	else
	{
		//짝 맞추기 게임 시작
		read_img();
		msize_img_window(false);
		up_img_window(true);
		down_img_window(true);
		img_input_window(false);
		GetDlgItem(IDC_UP1)->EnableWindow(true);
		g1_shuffle_img();
		Invalidate();
		MessageBox(L"짝 맞추기 게임을 시작합니다.");
		g1_put_card_back();
	}
}

void CMFCApplicationDlg::g1_put_card_back()
{
	put_img(m_down_img1, L"../MFCApplication/res/card_back.jpg");
	put_img(m_down_img2, L"../MFCApplication/res/card_back.jpg");
	put_img(m_down_img3, L"../MFCApplication/res/card_back.jpg");
	put_img(m_down_img4, L"../MFCApplication/res/card_back.jpg");
	put_img(m_down_img5, L"../MFCApplication/res/card_back.jpg");
	put_img(m_down_img6, L"../MFCApplication/res/card_back.jpg");
	put_img(m_down_img7, L"../MFCApplication/res/card_back.jpg");
	put_img(m_down_img8, L"../MFCApplication/res/card_back.jpg");
	put_img(m_up_img1, L"../MFCApplication/res/card_back.jpg");
	put_img(m_up_img2, L"../MFCApplication/res/card_back.jpg");
	put_img(m_up_img3, L"../MFCApplication/res/card_back.jpg");
	put_img(m_up_img4, L"../MFCApplication/res/card_back.jpg");
	put_img(m_up_img5, L"../MFCApplication/res/card_back.jpg");
	put_img(m_up_img6, L"../MFCApplication/res/card_back.jpg");
	put_img(m_up_img7, L"../MFCApplication/res/card_back.jpg");
	put_img(m_up_img8, L"../MFCApplication/res/card_back.jpg");


}

void CMFCApplicationDlg::g1_shuffle_img()
{
	for (int i = 0; i < 8; i++)
	{
		g1_img_info1[i] = img_info1[i];
		g1_img_info1[i + 8] = img_info1[i];
		g1_img_info2[i] = img_info2[i];
		g1_img_info2[i + 8] = img_info2[i];
	}
	//shuffle

	for (int i = 0; i < 40; i++)
	{
		int rand_num1 = rand() % 16;
		int rand_num2 = rand() % 16;
		CString temp;
		temp = g1_img_info1[rand_num1];
		g1_img_info1[rand_num1] = g1_img_info1[rand_num2];
		g1_img_info1[rand_num2] = temp;
		temp = g1_img_info2[rand_num1];
		g1_img_info2[rand_num1] = g1_img_info2[rand_num2];
		g1_img_info2[rand_num2] = temp;
	}
}

//선택한 두 개의 카드가 같은지 확인
void CMFCApplicationDlg::g1_check_answer()
{
	g1_select = 0;
	if (g1_img1 == g1_img2)
	{
		g1_correct_num += 1;

	}
	else
	{
		MessageBox(L"오답입니다.");
		//해당 이미지의 카드를 다시 뒤집음 + 버튼 활성화
		for (int i = 0; i < 16; i++)
		{
			if (g1_img_info2[i] == g1_img1)
			{
				g1_card_return(i);
			}
		}
		for (int i = 0; i < 16; i++)
		{
			if (g1_img_info2[i] == g1_img2)
			{
				g1_card_return(i);
			}
		}

	}
}

//n 번째 카드를 다시 뒤집음
void CMFCApplicationDlg::g1_card_return(int card_n)
{
	switch (card_n)
	{
	case 0:
		//카드 뒤집음
		put_img(m_up_img1, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_UP1)->EnableWindow(true);
		break;
	case 1:
		//카드 뒤집음
		put_img(m_up_img2, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_UP2)->EnableWindow(true);
		break;
	case 2:
		//카드 뒤집음
		put_img(m_up_img3, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_UP3)->EnableWindow(true);
		break;
	case 3:
		//카드 뒤집음
		put_img(m_up_img4, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_UP4)->EnableWindow(true);
		break;
	case 4:
		//카드 뒤집음
		put_img(m_up_img5, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_UP5)->EnableWindow(true);
		break;
	case 5:
		//카드 뒤집음
		put_img(m_up_img6, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_UP6)->EnableWindow(true);
		break;
	case 6:
		//카드 뒤집음
		put_img(m_up_img7, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_UP7)->EnableWindow(true);
		break;
	case 7:
		//카드 뒤집음
		put_img(m_up_img8, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_UP8)->EnableWindow(true);
		break;
	case 8:
		//카드 뒤집음
		put_img(m_down_img1, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_DOWN1)->EnableWindow(true);
		break;
	case 9:
		//카드 뒤집음
		put_img(m_down_img2, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_DOWN2)->EnableWindow(true);
		break;
	case 10:
		//카드 뒤집음
		put_img(m_down_img3, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_DOWN3)->EnableWindow(true);
		break;
	case 11:
		//카드 뒤집음
		put_img(m_down_img4, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_DOWN4)->EnableWindow(true);
		break;
	case 12:
		//카드 뒤집음
		put_img(m_down_img5, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_DOWN5)->EnableWindow(true);
		break;
	case 13:
		//카드 뒤집음
		put_img(m_down_img6, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_DOWN6)->EnableWindow(true);
		break;
	case 14:
		//카드 뒤집음
		put_img(m_down_img7, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_DOWN7)->EnableWindow(true);
		break;
	case 15:
		//카드 뒤집음
		put_img(m_down_img8, L"../MFCApplication/res/card_back.jpg");
		//버튼 활성화
		GetDlgItem(IDC_DOWN8)->EnableWindow(true);
		break;

	default:
		break;
	}
}

void CMFCApplicationDlg::up_down_button_active()
{
	GetDlgItem(IDC_DOWN1)->EnableWindow(true);
	GetDlgItem(IDC_DOWN2)->EnableWindow(true);
	GetDlgItem(IDC_DOWN3)->EnableWindow(true);
	GetDlgItem(IDC_DOWN4)->EnableWindow(true);
	GetDlgItem(IDC_DOWN5)->EnableWindow(true);
	GetDlgItem(IDC_DOWN6)->EnableWindow(true);
	GetDlgItem(IDC_DOWN7)->EnableWindow(true);
	GetDlgItem(IDC_DOWN8)->EnableWindow(true);
	GetDlgItem(IDC_UP1)->EnableWindow(true);
	GetDlgItem(IDC_UP2)->EnableWindow(true);
	GetDlgItem(IDC_UP3)->EnableWindow(true);
	GetDlgItem(IDC_UP4)->EnableWindow(true);
	GetDlgItem(IDC_UP5)->EnableWindow(true);
	GetDlgItem(IDC_UP6)->EnableWindow(true);
	GetDlgItem(IDC_UP7)->EnableWindow(true);
	GetDlgItem(IDC_UP8)->EnableWindow(true);
}

void CMFCApplicationDlg::OnBnClickedGame2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	g2_correct_num = 0;
	g2_game = true;
	g1_game = false;
	// 카드 8개 확인
	if (read_img_num() < 8)
	{
		MessageBox(L"게임을 위해서는 최소 8장의 이미지가 필요합니다.");
	}
	else
	{
		//순서 맞추기 게임 시작
			//8개의 이미지를 랜덤한 순서로 불러옴 -> img_info 변수에 저장
		read_img();
		//4개의 이미지를 순서대로 보여줌
		msize_img_window(false);
		up_img_window(false);
		down_img_window(false);
		img_input_window(false);
		GetDlgItem(IDC_INPUT)->ShowWindow(true);
		up_down_button_active();
		//추가 입력으로 인한 오류 방지
		button_window(false);
		//Invalidate();
		SetTimer(1, 2000, NULL);
		
	}
}

void CMFCApplicationDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	put_img(img_input, img_info2[g2_count]);
	g2_count += 1;

	if (g2_count == 5)
	{
		g2_count = 0;
		KillTimer(1);
		GetDlgItem(IDC_INPUT)->ShowWindow(false);
		button_window(true);
		down_img_window(true);
		Invalidate();
		g2_shuffle_img();
	}
	CDialogEx::OnTimer(nIDEvent);
}

void CMFCApplicationDlg::g2_shuffle_img()
{
	for (int i = 0; i < 8; i++)
	{
		g2_img_info1[i] = img_info1[i];
		g2_img_info2[i] = img_info2[i];
	}
	//shuffle
	
	for (int i = 0; i < 20; i++)
	{
		int rand_num1 = rand() % 8;
		int rand_num2 = rand() % 8;
		CString temp;
		temp = g2_img_info1[rand_num1];
		g2_img_info1[rand_num1] = g2_img_info1[rand_num2];
		g2_img_info1[rand_num2] = temp;
		temp = g2_img_info2[rand_num1];
		g2_img_info2[rand_num1] = g2_img_info2[rand_num2];
		g2_img_info2[rand_num2] = temp;
	}
	GetDlgItem(IDC_M1)->ShowWindow(true);
	GetDlgItem(IDC_M2)->ShowWindow(true);
	GetDlgItem(IDC_M3)->ShowWindow(true);
	GetDlgItem(IDC_M4)->ShowWindow(true);

	MessageBox(L"순서맞추기게임시작");
	put_img(m_down_img1, g2_img_info2[0]);
	put_img(m_down_img2, g2_img_info2[1]);
	put_img(m_down_img3, g2_img_info2[2]);
	put_img(m_down_img4, g2_img_info2[3]);
	put_img(m_down_img5, g2_img_info2[4]);
	put_img(m_down_img6, g2_img_info2[5]);
	put_img(m_down_img7, g2_img_info2[6]);
	put_img(m_down_img8, g2_img_info2[7]);

	
}

void CMFCApplicationDlg::g2_put_correct(CString info2)
{
	switch (g2_correct_num)
	{
	case 0:
		put_img(m_m1, info2);
		break;
	case 1:
		put_img(m_m2, info2);
		break;
	case 2:
		put_img(m_m3, info2);
		break;
	case 3:
		put_img(m_m4, info2);
		break;
	default:
		break;
	}
}

void CMFCApplicationDlg::g2_check_correct()
{
	if (g2_correct_num == 4)
	{
		MessageBox(L"정답입니다.");
		down_img_window(false);
		GetDlgItem(IDC_M1)->ShowWindow(false);
		GetDlgItem(IDC_M2)->ShowWindow(false);
		GetDlgItem(IDC_M3)->ShowWindow(false);
		GetDlgItem(IDC_M4)->ShowWindow(false);
		Invalidate();
		g2_game = false;
		
	}
}

void CMFCApplicationDlg::OnBnClickedDown1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//game 2에서의 작동
	if (g2_game == true)
	{
		if (g2_img_info2[0] == img_info2[g2_correct_num])
		{
			g2_put_correct(img_info2[g2_correct_num]);
			g2_correct_num += 1;
			g2_check_correct();
		}
		else
		{
			MessageBox(L"오답입니다.");
		}
	}
	else if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_DOWN1)->EnableWindow(false);
		//이미지 표시
		put_img(m_down_img1, g1_img_info2[8]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[8];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[8];
			g1_check_answer();
		}
		
	}
	
}

void CMFCApplicationDlg::OnBnClickedDown2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//game 2에서의 작동
	if (g2_game == true)
	{
		if (g2_img_info2[1] == img_info2[g2_correct_num])
		{
			g2_put_correct(img_info2[g2_correct_num]);
			g2_correct_num += 1;
			g2_check_correct();
		}
		else
		{
			MessageBox(L"오답입니다.");
		}
	}
	else if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_DOWN2)->EnableWindow(false);
		//이미지 표시
		put_img(m_down_img2, g1_img_info2[9]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[9];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[9];
			g1_check_answer();
		}

	}
	
}


void CMFCApplicationDlg::OnBnClickedDown3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//game 2에서의 작동
	if (g2_game == true)
	{
		if (g2_img_info2[2] == img_info2[g2_correct_num])
		{
			g2_put_correct(img_info2[g2_correct_num]);
			g2_correct_num += 1;
			g2_check_correct();
		}
		else
		{
			MessageBox(L"오답입니다.");
		}
	}
	else if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_DOWN3)->EnableWindow(false);
		//이미지 표시
		put_img(m_down_img3, g1_img_info2[10]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[10];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[10];
			g1_check_answer();
		}

	}
	
}


void CMFCApplicationDlg::OnBnClickedDown4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//game 2에서의 작동
	if (g2_game == true)
	{
		if (g2_img_info2[3] == img_info2[g2_correct_num])
		{
			g2_put_correct(img_info2[g2_correct_num]);
			g2_correct_num += 1;
			g2_check_correct();
		}
		else
		{
			MessageBox(L"오답입니다.");
		}
	}
	else if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_DOWN4)->EnableWindow(false);
		//이미지 표시
		put_img(m_down_img4, g1_img_info2[11]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[11];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[11];
			g1_check_answer();
		}

	}
	
}


void CMFCApplicationDlg::OnBnClickedDown5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//game 2에서의 작동
	if (g2_game == true)
	{
		if (g2_img_info2[4] == img_info2[g2_correct_num])
		{
			g2_put_correct(img_info2[g2_correct_num]);
			g2_correct_num += 1;
			g2_check_correct();
		}
		else
		{
			MessageBox(L"오답입니다.");
		}
	}
	else if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_DOWN5)->EnableWindow(false);
		//이미지 표시
		put_img(m_down_img5, g1_img_info2[12]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[12];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[12];
			g1_check_answer();
		}

	}
	
}


void CMFCApplicationDlg::OnBnClickedDown6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//game 2에서의 작동
	if (g2_game == true)
	{
		if (g2_img_info2[5] == img_info2[g2_correct_num])
		{
			g2_put_correct(img_info2[g2_correct_num]);
			g2_correct_num += 1;
			g2_check_correct();
		}
		else
		{
			MessageBox(L"오답입니다.");
		}
	}
	else if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_DOWN6)->EnableWindow(false);
		//이미지 표시
		put_img(m_down_img6, g1_img_info2[13]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[13];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[13];
			g1_check_answer();
		}

	}
	
}

void CMFCApplicationDlg::OnBnClickedDown7()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//game 2에서의 작동
	if (g2_game == true)
	{
		if (g2_img_info2[6] == img_info2[g2_correct_num])
		{
			g2_put_correct(img_info2[g2_correct_num]);
			g2_correct_num += 1;
			g2_check_correct();
		}
		else
		{
			MessageBox(L"오답입니다.");
		}
	}
	else if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_DOWN7)->EnableWindow(false);
		//이미지 표시
		put_img(m_down_img7, g1_img_info2[14]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[14];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[14];
			g1_check_answer();
		}

	}
	
}

void CMFCApplicationDlg::OnBnClickedDown8()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//game 2에서의 작동
	if (g2_game == true)
	{
		if (g2_img_info2[7] == img_info2[g2_correct_num])
		{
			g2_put_correct(img_info2[g2_correct_num]);
			g2_correct_num += 1;
			g2_check_correct();
		}
		else
		{
			MessageBox(L"오답입니다.");
		}
	}
	else if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_DOWN8)->EnableWindow(false);
		//이미지 표시
		put_img(m_down_img8, g1_img_info2[15]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[15];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[15];
			g1_check_answer();
		}

	}
	
}


void CMFCApplicationDlg::OnBnClickedUp1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (g1_game == true)
	{
	//버튼 비활성화
	GetDlgItem(IDC_UP1)->EnableWindow(false);
	//이미지 표시
	put_img(m_up_img1, g1_img_info2[0]);
	//첫 번째 선택
	if (g1_select == 0)
	{
		g1_img1 = g1_img_info2[0];
		g1_select += 1;
	}
	//두 번째 카드 선택
	else if (g1_select == 1)
	{
		g1_img2 = g1_img_info2[0];
		g1_check_answer();
	}

	}
}


void CMFCApplicationDlg::OnBnClickedUp2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_UP2)->EnableWindow(false);
		//이미지 표시
		put_img(m_up_img2, g1_img_info2[1]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[1];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[1];
			g1_check_answer();
		}

	}
}


void CMFCApplicationDlg::OnBnClickedUp3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_UP3)->EnableWindow(false);
		//이미지 표시
		put_img(m_up_img3, g1_img_info2[2]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[2];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[2];
			g1_check_answer();
		}

	}
}


void CMFCApplicationDlg::OnBnClickedUp4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_UP4)->EnableWindow(false);
		//이미지 표시
		put_img(m_up_img4, g1_img_info2[3]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[3];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[3];
			g1_check_answer();
		}

	}
}


void CMFCApplicationDlg::OnBnClickedUp5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_UP5)->EnableWindow(false);
		//이미지 표시
		put_img(m_up_img5, g1_img_info2[4]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[4];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[4];
			g1_check_answer();
		}

	}
}


void CMFCApplicationDlg::OnBnClickedUp6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_UP6)->EnableWindow(false);
		//이미지 표시
		put_img(m_up_img6, g1_img_info2[5]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[5];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[5];
			g1_check_answer();
		}

	}
}


void CMFCApplicationDlg::OnBnClickedUp7()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_UP7)->EnableWindow(false);
		//이미지 표시
		put_img(m_up_img7, g1_img_info2[6]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[6];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[6];
			g1_check_answer();
		}

	}
}


void CMFCApplicationDlg::OnBnClickedUp8()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (g1_game == true)
	{
		//버튼 비활성화
		GetDlgItem(IDC_UP8)->EnableWindow(false);
		//이미지 표시
		put_img(m_up_img8, g1_img_info2[7]);
		//첫 번째 선택
		if (g1_select == 0)
		{
			g1_img1 = g1_img_info2[7];
			g1_select += 1;
		}
		//두 번째 카드 선택
		else if (g1_select == 1)
		{
			g1_img2 = g1_img_info2[7];
			g1_check_answer();
		}

	}
}




