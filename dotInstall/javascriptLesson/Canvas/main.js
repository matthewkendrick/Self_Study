'use strict';

{
  function draw() {
    const canvas = document.querySelector('canvas');
    if (typeof canvas.getContext === 'undefined') {
      return;
    }
    const ctx = canvas.getContext('2d');

    ctx.fillStyle = 'pink';
    ctx.fillRect(0, 0, 200, 200);

    ctx.beginPath();
    ctx.ellipse(100, 100, 40, 30, 0, 0, 2 * Math.PI);
    ctx.fillStyle = 'black';
    ctx.fill();

    ctx.beginPath();
    ctx.ellipse(80, 100, 8, 8, 0, 0, 2 * Math.PI);
    ctx.ellipse(120, 100, 8, 8, 0, 0, 2 * Math.PI);
    ctx.fillStyle = 'skyblue';
    ctx.fill();

    ctx.scale(0.5, 0.5);
    ctx.translate(400, 0);
    ctx.rotate(45 / 180 * Math.PI);

    ctx.fillStyle = 'olive';
    ctx.fillRect(0, 0, 200, 200);

    ctx.beginPath();
    ctx.ellipse(100, 100, 40, 30, 0, 0, 2 * Math.PI);
    ctx.fillStyle = 'black';
    ctx.fill();

    ctx.beginPath();
    ctx.ellipse(80, 100, 8, 8, 0, 0, 2 * Math.PI);
    ctx.ellipse(120, 100, 8, 8, 0, 0, 2 * Math.PI);
    ctx.fillStyle = 'skyblue';
    ctx.fill();
  }
  draw();
}