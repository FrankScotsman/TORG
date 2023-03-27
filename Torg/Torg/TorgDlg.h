
// TorgDlg.h : header file
//

#pragma once


// CTorgDlg dialog
class CTorgDlg : public CDialog
{
	// Generated message map functions
	DECLARE_MESSAGE_MAP()
	afx_msg void OnStartBtn();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	virtual BOOL OnInitDialog();

// Dialog Data
	enum { IDD = IDD_TORG_DIALOG };
	HICON m_hIcon;


// Construction
public:
	CTorgDlg(CWnd* pParent = NULL);	// standard constructor

};
