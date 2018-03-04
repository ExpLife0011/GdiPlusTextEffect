#pragma once
#include <Windows.h>
class CMemDC
{
public:
	explicit CMemDC(HDC hdc,const RECT& rect);
	virtual ~CMemDC();

	operator HDC(){return m_hMemDC;}
	// �����ͼ
	void  PaintRect(const RECT& paintRect,bool bRectPaint= true);
private:
	bool m_bRectPaint;
	RECT m_RectPaint;
private:
	HDC m_hdc,m_hMemDC;
	RECT m_rect;
	HBITMAP m_hBitmap,m_hOldBmp;
};