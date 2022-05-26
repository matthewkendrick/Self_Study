'use strict'

// 指定した条件が満たされている間、特定の処理を繰り返す書き方は以下のようになります

// let hp = 100;

// while (hp > 0) {
//   console.log(`${hp} HP left!`);
//   hp -= 15;
// }

// また、一度でも処理を実行したい場合は、以下のように記述します

let hp = -50;

do {
  console.log(`${hp} HP left!`);
  hp -= 15;
} while (hp > 0);
