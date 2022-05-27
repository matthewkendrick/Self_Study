'use strict'

{
  const scores = [80, 90, 40, 70];

  // const [a, b, c, d] = scores;
  // console.log(c);

  // const [a, b, ...others] = scores;
  // console.log(others);

  // 分割代入
  let x = 30;
  let y = 70;
  [x, y] = [y, x]

  console.log(`x: ${x}`);
  console.log(`y: ${y}`);
}