'use strict';

(() => {
  class Puzzle {
    constructor(canvas) {
      this.canvas = canvas;
      this.ctx = this.canvas.getContext('2d');
      this.img = document.createElement('img');
      // this.renderTile(9, 2, 1);
      this.renderTile(12, 3, 3);
    }

    renderTile(n, col, row) {
      this.img.src = 'img/15puzzle.png';
      this.img.addEventListener('load', () => {
        this.ctx.drawImage(
          this.img,
          (n % 4) * 70, Math.floor(n / 4) * 70, 70, 70,
          col * 70, row * 70, 70, 70,
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