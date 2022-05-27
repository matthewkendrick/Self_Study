'use strict'

{
  const scores = [80, 90, 40, 70];
  // splice(X, Y, Z, ...)
  // X : 変化が開始する位置
  // Y : 削除数
  // Z : 追加する要素

  scores.splice(1, 1, 40, 50);

  for (let i = 0; i < scores.length; i++) {
    console.log(`Score ${i}: ${ scores[i] }`);
  }
}