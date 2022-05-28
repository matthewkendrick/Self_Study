'use strict'

{
  const scores = [10, 3, 9];

  let sum = 0;

  scores.forEach(score => {
    sum += score;
  });

  const avg = sum / scores.length;

  // console.log(sum);
  // console.log(avg);
  
  console.log(Math.floor(avg));
  console.log(Math.ceil(avg));
  console.log(Math.round(avg));
  console.log(avg.toFixed(3));

  console.log(Math.random());
}