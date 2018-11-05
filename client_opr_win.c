/*****************************************************************
ファイル名	: client_opr_win.c
機能		: クライアントのユーザーインターフェース処理
*****************************************************************/

#include <SDL2/SDL.h>
#include "client_func.h"
#include "common.h"

#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 400

static SDL_Window *gOprWindow;

/*****************************************************************
関数名	: InitWindows
機能	: メインウインドウの表示，設定を行う
引数	: なし
出力	: 正常に設定できたとき0，失敗したとき-1
*****************************************************************/
int InitOprWindows()
{
    
	/* SDLの初期化 */
	if(SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("failed to initialize SDL due to %s.\n", SDL_GetError());
		return -1;
	}
	
	/* メインのウインドウを作成する */
	if((gOprWindow = SDL_CreateWindow(
        "operater_window",          //title
        SDL_WINDOWPOS_UNDEFINED,    //x_position
        SDL_WINDOWPOS_UNDEFINED,    //y_position
        WINDOW_WIDTH,               //width
        WINDOW_HEIGHT,              //height
        0           				//flags
        )) == NULL) {
		    printf("failed to initialize videomode.\n");
		    return -1;
	}

	SDL_Delay(3000);
	SDL_DestroyWindow(gOprWindow);
	SDL_Quit();
	
	return 0;
}
