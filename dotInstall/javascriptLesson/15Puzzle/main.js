'use strict';

(() => {
  class Puzzle {
    constructor(canvas) {
      this.canvas = canvas;
      this.ctx = this.canvas.getContext('2d');
      this.img = document.createElement('img');
      this.renderTile(9, 2, 1);
    }

    renderTile(n, col, row) {
      this.img.src = 'img/15puzzle.png';
      this.img.addEventListener('load', () => {
        this.ctx.drawImage(
          this.img,
          sx, sy, 70, 70,
          dx, dy, 70, 70,
        );
      });
    }
  }
  const canvas = document.querySelector('canvas');
  if (typeof canvas.getContext === 'undefined') {
    return;
  }
  
  new Puzzle(canvas);
})();