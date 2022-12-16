
// MFCApplicationDlg.h: 헤더 파일
//

#pragma once


// CMFCApplicationDlg 대화 상자
class CMFCApplicationDlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCApplicationDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
	
	afx_msg void OnBnClickedStartEnd();
	
	bool m_image_uploading = false;
	CString input_path;
	afx_msg void OnBnClickedImage();
	CButton m_img_button;
	CStatic img_input;
	afx_msg void OnEnChangeEdit1();
	CString input_name;
	CString m_img_input_name;
	afx_msg void OnBnClickedImageButton();
	//메모장
	CStdioFile m_file;
	BOOL bOpen = false;
	//이미지를 넣는 함수
	void put_img(CStatic& img_box, CString path);
	//이미지를 메모장에서 불러오는 함수
	void read_img();
	//이미지를 m-size 칸에 넣는 함수
	void msize_put_img();
	//메모장의 이미지수 불러옴
	int read_img_num();
	//메모장 n 번쨰 줄 불러옴
	CString read_n_line(int n);
	//m 사이즈의 이미지 보기 설정
	void msize_img_window(bool sta);
	//버튼의 이미지 보기 설정
	void button_window(bool sta);
	//이미지 입력 메뉴 보기 설정
	void img_input_window(bool sta);
	//하단 이미지 보기 설정
	void down_img_window(bool sta);
	//상단 이미지 보기 설정
	void up_img_window(bool sta);
	//up_down 버튼 활성화
	void CMFCApplicationDlg::up_down_button_active();
	CString img_info1[8] = {_T("")}; //불러온 8개 이미지의 이름
	CString img_info2[8] = {_T("")}; //불러온 8개의 이미지 주소

	//짝 맞추기 게임 관련
	int g1_correct_num = 0;
	bool g1_game = true;
	CString g1_img_info1[16] = { _T("") };
	CString g1_img_info2[16] = { _T("") };
	CString g1_img1, g1_img2;
	int g1_select = 0;
	void g1_shuffle_img();
	void g1_put_correct(CString img1_info2, CString img2_info2);
	//카드 뒷면 이미지 입력
	void g1_put_card_back();
	// n번째 카드를 다시 뒤집음
	void g1_card_return(int card_n);
	//정답 확인 후 맞으면 해당 이미지 버튼 비활성화
	void g1_check_answer();

	//순서 게임 관련
	int g2_count = 0;
	CString g2_img_info1[8] = { _T("") };
	CString g2_img_info2[8] = { _T("") };
	int g2_correct_num = 0;
	bool g2_game = false;
	//불러온 이미지를 섞음
	void g2_shuffle_img();
	//이미지가 맞으면 위로 올림
	void g2_put_correct(CString info2);
	//4개 모두 맞췄는지 확인
	void CMFCApplicationDlg::g2_check_correct();
	CStatic m_m1;
	CStatic m_m2;
	CStatic m_m3;
	CStatic m_m4;
	CStatic m_m5;
	CStatic m_m6;
	CStatic m_m7;
	CStatic m_m8;
	CString m_m1_name;
	CString m_m2_name;
	CString m_m3_name;
	CString m_m4_name;
	CString m_m5_name;
	CString m_m6_name;
	CString m_m7_name;
	CString m_m8_name;
	afx_msg void OnBnClickedGame2();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CStatic m_down_img1;
	CStatic m_down_img2;
	CStatic m_down_img3;
	CStatic m_down_img4;
	CStatic m_down_img5;
	CStatic m_down_img6;
	CStatic m_down_img7;
	CStatic m_down_img8;
	afx_msg void OnBnClickedDown1();
	afx_msg void OnBnClickedDown2();
	afx_msg void OnBnClickedDown3();
	afx_msg void OnBnClickedDown4();
	afx_msg void OnBnClickedDown5();
	afx_msg void OnBnClickedDown6();
	afx_msg void OnBnClickedDown8();
	afx_msg void OnBnClickedDown7();
	afx_msg void OnBnClickedGame1();
	CStatic m_up_img1;
	CStatic m_up_img2;
	CStatic m_up_img3;
	CStatic m_up_img4;
	CStatic m_up_img5;
	CStatic m_up_img6;
	CStatic m_up_img7;
	CStatic m_up_img8;
	afx_msg void OnBnClickedUp1();
	afx_msg void OnBnClickedUp2();
	afx_msg void OnBnClickedUp3();
	afx_msg void OnBnClickedUp4();
	afx_msg void OnBnClickedUp5();
	afx_msg void OnBnClickedUp6();
	afx_msg void OnBnClickedUp7();
	afx_msg void OnBnClickedUp8();
};
