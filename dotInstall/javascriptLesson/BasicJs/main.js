'use strict'

// function sum(a, b, c) {
//   return a + b + c;
// }

// 以下のように関数式に変えずとも、基本的には関数宣言で構いませんが、こういった書き方もあるということは知っておきましょう

const sum = function(a, b, c) {
  return a + b + c;
}

const total = sum(1, 2, 3) + sum(4, 5, 6);
console.log(total);