#pragma once

#include <d3d12.h>
#include <stdio.h>
#include <Windows.h>
#include <ostream>

class RenderModule
{
public:
	static void Render();
	static LPCWSTR User;

	static int LevelData(LPCWSTR LevelName, LPINT LevelID);
};

