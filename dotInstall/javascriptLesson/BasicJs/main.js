'use strict'

for (let i = 1; i < 10; i++) {
  // console.log('Hello' + i);

  // 以下のようにバッククォートを用いることで、${}内が数値であっても文字列に変換してくれます
  console.log(`Hello ${i}`);
}