'use strict';

{
  function draw() {
    const canvas = document.querySelector('canvas');
    if (typeof canvas.getContext === 'undefined') {
      return;
    }
    const ctx = canvas.getContext('2d');

    ctx.fillStyle = 'pink';
    ctx.strokeStyle = '#f00';
    ctx.fillRect(50, 50, 50, 50); //塗りつぶしの四角
    ctx.strokeRect(50, 50, 50, 50); //枠線の四角

    ctx.fillStyle = 'skyblue';
    ctx.strokeStyle = '#00b';
    ctx.fillRect(70, 70, 50, 50); //塗りつぶしの四角
    ctx.strokeRect(70, 70, 50, 50); //枠線の四角
  }
  draw();
}