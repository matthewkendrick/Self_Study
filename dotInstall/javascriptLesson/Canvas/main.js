'use strict';

{
  function draw() {
    const canvas = document.querySelector('canvas');
    if (typeof canvas.getContext === 'undefined') {
      return;
    }
    const ctx = canvas.getContext('2d');

    ctx.ellipse(100, 100, 50, 30, 0, 0, 2 * Math.PI);
    ctx.rect(50, 50, 50, 50);
    ctx.stroke();
  }
  draw();
}