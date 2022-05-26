'use strict'

{
  const scores = [80, 90, 40, 70];

  // 文字列と一緒に配列の数値を取り出したい場合は以下のように記述します
  // console.log(`Score: ${ scores[0] }`);
  // console.log(`Score: ${ scores[1] }`);
  // console.log(`Score: ${ scores[2] }`);

  // 以下のようにfor文を用いることで、上記をスッキリと書くことができます
  // for (let i = 0; i < 3; i++) { // iが０から始まって、順に１ずつ増やす
  for (let i = 0; i < scores.length; i++) { // 配列の要素に増減があった場合、上記では３の部分を変更しなければならない
    console.log(`Score ${i}: ${ scores[i] }`); // それに合致する数値を配列からとってきて出力する
  }
}