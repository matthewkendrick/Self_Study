'use strict'

function sum(a, b, c) {
  // console.log(a + b + c);  //これをコメントにすると、それぞれ計算されたsumがreturnに返ってきて、totalだけが出力されるようになります
  return a + b + c;
  // return以降の記述は実行されません
}

// sum(1, 2, 3);
// sum(4, 5, 6);

const total = sum(1, 2, 3) + sum(4, 5, 6);

console.log(total);