#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include "time.h"
#include "cstdio"
#include <fstream>

#define clear cin.get(); cin.get();

using namespace std;

bool check_file_is_empty(ifstream& file);

void CLEAR();
void Menu();

void ClearMap(int mode);

void DrawMapPvC();
void DrawMapCvC();

void Border(int x, int y, int ship, int mode, char map[10][10]);

int CordsPCx();
int CordsPCy();
int  CordsPlayerX();
int  CordsPlayerY();

void ShipPlacePlayer();
void ShipPlaceComp();
void ShipPlaceComp1();

void GamePlayerVSComp();
void GameCompVSComp();

void LeaderboardWrite(int win);
void LeaderboardShow();