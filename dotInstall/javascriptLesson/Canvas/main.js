'use strict';

{
  let t = 0;

  function draw() {
    const canvas = document.querySelector('canvas');
    if (typeof canvas.getContext === 'undefined') {
      return;
    }
    const ctx = canvas.getContext('2d');

    const CANVAS_WIDTH = 600;
    const CANVAS_HEIGHT = 240;
    const dpr = window.devicePixelRatio || 1;
    canvas.width = CANVAS_WIDTH * dpr;
    canvas.height = CANVAS_HEIGHT * dpr;
    ctx.scale(dpr, dpr);

    ctx.font = 'bold 48px Verdana';
    ctx.strokeText('Tokyo', 200, 200);
    canvas.style.width = CANVAS_WIDTH + 'px';
    canvas.style.height = CANVAS_HEIGHT + 'px';

    ctx.clearRect(0, 0, canvas.width, canvas.height);
    ctx.beginPath();
    ctx.ellipse(100, 100, 40, 30, 0, 0, 2 * Math.PI);
    ctx.fillStyle = 'black';
    ctx.fill()

    ctx.beginPath();
    ctx.ellipse(80 + Math.sin(t / 30), 100, 8, 8, 0, 0, 2 * Math.PI);
    ctx.ellipse(120 + Math.sin(t / 30), 100, 8, 8, 0, 0, 2 * Math.PI);
    ctx.fillStyle = 'skyblue';
    ctx.fill()

    t++;
    setTimeout(draw, 10);
  }
  draw();
}