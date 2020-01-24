/******************************************************************************
 * keybdmouse.cpp: keyboard and mouse callback functions
 */
#include <stdlib.h>
#include <stdio.h>

#include "platform.h"

#include "common.h"

#include "sim.h"

#include "calc.h"
#include "player.h"
#include "game_manager.h"

extern SimDataT simdata;
extern WindowDataT window;

extern CPlayerObject *player;

//-------- modifier key status
bool isShiftKeyDown(void);
bool isCtrlKeyDown(void);
bool isAltKeyDown(void);

/*-------------------------------------------------- modifier key status
 * Shift, Ctrl, Alt key status
 */
bool isShiftKeyDown(void)
{
	return (bool)(glutGetModifiers() & GLUT_ACTIVE_SHIFT);
}
bool isCtrlKeyDown(void)
{
	return (bool)(glutGetModifiers() & GLUT_ACTIVE_CTRL);
}
bool isAltKeyDown(void)
{
	return (bool)(glutGetModifiers() & GLUT_ACTIVE_ALT);
}

/*------------------------------------------------------------- charKeyDown/Up
 * charKeyDown/Up - GLUT keyboard callback function
 * key: ASCII code
 * x, y: mouse position
 *--------*/
void charKeyDown(unsigned char key, int x, int y)
{
	switch (key) {
	case 'h': // help
		printf("Instruction\n");
		printf("[H]:Help\n");
		printf("[Q]:Quit\n");
		break;
	case 'q': // quit
		exit(0);
		break;

	case 'a': //Άωρ
		player->Turn(0.2);
		player->IsMoving(true);
		break;
	case 's': //γή
		player->Speed(-0.05);
		player->IsMoving(true);
		break;
	case 'd': //Eωρ
		player->Turn(-0.2);
		player->IsMoving(true);
		break;
	case 'w': //Oi
		player->Speed(0.05);
		player->IsMoving(true);
		break;
	case ' ':
		player->Attack();
		break;
	default:
		break;
	}
	return;
}
void charKeyUp(unsigned char key, int x, int y)
{
	switch (key) {
	case 'w':
		player->IsMoving(false);
		player->Speed(0);
		break;
	case 's':
		player->IsMoving(false);
		player->Speed(0);
		break;
	case 'a':
		player->IsMoving(false);
		player->Turn(0);
		break;
	case 'd':
		player->IsMoving(false);
		player->Turn(0);
		break;
	default:
		simdata.player.move = 0;
		simdata.player.turn = 0;
		simdata.player.isMoving = false;
		break;
	}
}
/*--------------------------------------------------------------- funcKeyDown/Up
 * funcKeyDown/Up - GLUT special key callback
 * key: GLUT key code
 * x, y: mouse position
 */
void funcKeyDown(int key, int x, int y)
{
	//t@NVL[
	//[F*]: GLUT_KEY_F*(*Ν1`12)
	//[F1]: GLUT_KEY_F1
	//[F12]:GLUT_KEY_F12
	//»ΜΌΜ@\L[
	//[PageUp]  : GLUT_KEY_PAGE_UP:
	//[PageDown]: GLUT_KEY_PAGE_DOWN:
	//[Home]    : GLUT_KEY_HOME:
	//[End]     : GLUT_KEY_END:
	//[Insert]  : GLUT_KEY_INSERT:

	//J[\L[
	switch (key) {
	case GLUT_KEY_LEFT: //[©]

		break;
	case GLUT_KEY_RIGHT://[¨]

		break;
	case GLUT_KEY_UP: //[ͺ]

		break;
	case GLUT_KEY_DOWN://[«]

		break;
	}
}
void funcKeyUp(int key, int x, int y)
{
	switch (key) {
	case GLUT_KEY_LEFT: //[©]

		break;
	case GLUT_KEY_RIGHT://[¨]

		break;
	case GLUT_KEY_UP: //[ͺ]

		break;
	case GLUT_KEY_DOWN://[«]

		break;
	}
}
/*------------------------------------------------------------- mouseClick
 * mouseClick - GLUT mouse callback function
 * button: mouse button
 * stateFpress or release
 * x, yFmouse position
 *--------*/
void mouseClick(int button, int state, int x, int y)
{
	switch (button) {
	case GLUT_LEFT_BUTTON:
		switch (state) {
		case GLUT_DOWN: // press
			if (UGameManager::GetInstance().GameState() == START) {
				UGameManager::GetInstance().GameState(ONGAME);
			}
			break;
		case GLUT_UP: // release

			break;
		default:
			break;
		}
		break;
	case GLUT_MIDDLE_BUTTON:
		switch (state) {
		case GLUT_DOWN: // press

			break;
		case GLUT_UP: // release

			break;
		default:
			break;
		}
		break;
	case GLUT_RIGHT_BUTTON:
		switch (state) {
		case GLUT_DOWN: // press

			break;
		case GLUT_UP: // release

			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
	return;
}
/*---------------------------------------------------------------- mouseDrag
 * mouseDrag - mouse drag callback function
 */
void mouseDrag(int x, int y)
{
	////////


	////////
	return;
}
/*-------------------------------------------------------------- mouseMotion
 * mouseMotion - passive mouse motion callback function
 */
void mouseMotion(int x, int y)
{
	////////


	////////
	return;
}