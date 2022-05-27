'use strict'

{
  const scores = [80, 90, 40, 70];
  // 以下のような記述によって配列を操作できたりもするので、覚えておくといいでしょう
  // unshift : 先頭に要素を追加する
  // push    : 末尾に要素を追加する
  // shift   : 先頭の要素を削除する
  // pop     : 末尾の要素を削除する
  scores.push(60, 50);
  scores.shift();

  for (let i = 0; i < scores.length; i++) {
    console.log(`Score ${i}: ${ scores[i] }`);
  }
}