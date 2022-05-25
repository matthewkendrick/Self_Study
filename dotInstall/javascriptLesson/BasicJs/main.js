'use strict'

// 以下のようにして比較と評価を行うことができます
const price = 1200;

// 比較演算子
console.log(price > 1000);    //右辺より大きい
console.log(price < 1000);    //右辺より小さい
console.log(price >= 1000);   //右辺以上
console.log(price <= 1000);   //右辺以下
console.log(price == 1000);   //右辺と同じ
console.log(price != 1000);   //右辺と異なる

// 条件分岐を行うために必要な評価の仕方は以下の通りです
console.log(Boolean(0));
console.log(Boolean('Hello'));