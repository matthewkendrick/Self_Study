'use strict'

const x = 2;  //　グローバルスコープ

function f() {
  const x = 1;  //ブロック内で宣言された定数はそのブロック内でしか使えません
  console.log(x);
}

f();               // １が出力される
console.log(x);    // ２が出力される
