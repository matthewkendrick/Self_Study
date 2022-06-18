'use strict';

{
  function draw() {
    const canvas = document.querySelector('canvas');
    if (typeof canvas.getContext === 'undefined') {
      return;
    }
    const ctx = canvas.getContext('2d');

    ctx.beginPath();
    ctx.moveTo(0, 100);
    ctx.lineTo(canvas.width, 100);
    ctx.moveTo(100, 0);
    ctx.lineTo(100, canvas.height);
    ctx.stroke();

    ctx.font = 'bold 32px Verdana';
    ctx.textAlign = 'right';
    ctx.textBaseline = 'top';

    ctx.strokeText('Tokyo', 100, 100, 100);
  }
  draw();
}