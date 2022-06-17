'use strict';

{
  function draw() {
    const canvas = document.querySelector('canvas');
    if (typeof canvas.getContext === 'undefined') {
      return;
    }
    const ctx = canvas.getContext('2d');

    ctx.fillStyle = 'skyblue';

    ctx.beginPath();
    ctx.moveTo(50, 50);
    ctx.lineTo(100, 50);
    ctx.lineTo(100, 100);
    ctx.closePath();
    ctx.stroke();
    ctx.fill();
  }
  draw();
}