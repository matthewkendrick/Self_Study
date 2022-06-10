'use strict';

{
  const source = [];
  for (let i = 0; i < 15; i++) {
    source[i] = i + 1;
  }

  const b = [];
  // b[0] = source.splice(Math.floor(Math.random() * source.length), 1)[0];
  // b[1] = source.splice(Math.floor(Math.random() * source.length), 1)[0];
  // b[2] = source.splice(Math.floor(Math.random() * source.length), 1)[0];
  // b[3] = source.splice(Math.floor(Math.random() * source.length), 1)[0];
  // b[4] = source.splice(Math.floor(Math.random() * source.length), 1)[0];

  for (let i = 0; i < 5; i++) {
    b[i] = source.splice(Math.floor(Math.random() * source.length), 1)[0];
    
  }

  console.log(b);
}