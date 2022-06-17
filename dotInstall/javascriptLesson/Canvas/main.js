'use strict';

{
  function draw() {
    const canvas = document.querySelector('canvas');
    if (typeof canvas.getContext === 'undefined') {
      return;
    }
    const ctx = canvas.getContext('2d');

    ctx.beginPath();
    ctx.moveTo(100, 100);
    ctx.arc(100, 100, 50, 0, 300 / 180 * Math.PI);
    ctx.stroke();
  }
  draw();
}