'use strict'

{
  const otherScores = [10, 20];

  // スプレッド構文( ... )を使うことによって、配列内で配列を扱えるようになります
  const scores = [80, 90, 40, 70, ...otherScores];
  // console.log(scores);

  function sum(a, b) {
    console.log(a + b);
  }

  sum(...otherScores)
}