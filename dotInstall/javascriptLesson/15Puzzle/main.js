'use strict';

(() => {
  class Puzzle {
    constructor(canvas) {
      this.canvas = canvas;
      this.ctx = this.canvas.getContext('2d');
      this.tiles = [
        [0, 1, 2, 3],
        [4, 5, 6, 7],
        [8, 9, 10, 11],
        [12, 13, 14, 15],
      ];
      this.img = document.createElement('img');
      this.img.src = 'img/15puzzle.png'
      this.img.addEventListener('load', () => {
        this.render();
      });
    }

    render() {
      for (let row = 0; row < 4; row++) {
        for (let col = 0; col < 4; col++) {
          this.renderTile(this.tiles[row][col], col, row);
        }
      }
    }

    renderTile(n, col, row) {
      this.ctx.drawImage(
        this.img,
        (n % 4) * 70, Math.floor(n / 4) * 70, 70, 70,
        col * 70, row * 70, 70, 70,
      );
    }
  }

  const canvas = document.querySelector('canvas');
  if (typeof canvas.getContext === 'undefined') {
    return;
  }
  
  new Puzzle(canvas);
})();