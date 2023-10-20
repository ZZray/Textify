#pragma once
#include "../../resources/resource.h"
#include <windows.h>

class Window
{
public:
  Window();
  ~Window();

  HWND get() const { return hwnd_; }

  // 初始化窗口
  void initWin();

  // 初始化 tray
  void initTray();

  // 初始化 UI
  void initUI() const;

  // 显示
  void show() const;
  void show(int x, int y, int w, int h) const;

  // 隐藏
  void hide() const;

  // 创建托盘图标菜单
  static HMENU createTrayMenu();

  // 事件管理
  static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

private:
  HWND hwnd_;
  WNDCLASS wc_;
  HWND input_;
  NOTIFYICONDATA nid_;

  int w = 160, h = 80;
};
