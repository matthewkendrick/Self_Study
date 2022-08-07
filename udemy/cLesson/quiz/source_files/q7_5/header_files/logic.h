#if !defined(_LOGIC_H_)
#define _LOGIC_H_

int player = 0;
int computer = 0;

// 乱数の初期化
void init();
// プレイヤーの手・値を設定
void setPlayer(int);
// コンピュータの手・値を設定
void setComputer();

#endif // _LOGIC_H_