'use strict'

for (let i = 1; i <= 10; i++) {
  if (i % 3 == 0) {      // iを３で割った時の余理が０がどうか　 
    continue;           // 即ち３の倍数の時に処理をスキップする
  } else if (i == 7) {   // 7になったら処理を停止させる
    break;
  } else {
    console.log(i);     // iか７になるまで上記２行の処理結果を出力する
  }
}