'use strict';

(() => {
  class Puzzle {
    constructor(canvas, level) {
      this.canvas = canvas;
      this.level = level;
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
      this.canvas.addEventListener('click', e => {
        const rect = this.canvas.getBoundingClientRect();
        const col = Math.floor( (e.clientX - rect.left) / 70 );
        const row = Math.floor( (e.clientY - rect.top) / 70 );
        this.swapTiles(col, row);
        this.render();
      });
      this.shuffle(this.level);
    }

    shuffle(n) {
      let blankCol = 3;
      let blankRow = 3;

      for (let i = 0; i < n; i++) {
        let destCol;
        let destRow;
        do {
          const dir = Math.floor(Math.random() * 4);
          const UDLR = [
            [0, -1],
            [0, 1],
            [-1, 0],
            [1, 0],
          ];
          
          destCol = blankCol + UDLR[dir][0];
          destRow = blankRow + UDLR[dir][1];

        } while (
          destCol < 0 || destCol > 3 ||
          destRow < 0 || destRow > 3
        );
        [
          this.tiles[blankRow][blankCol],
          this.tiles[destRow][destCol],
        ] = [
          this.tiles[destRow][destCol],
          this.tiles[blankRow][blankCol],
        ];

        [blankCol, blankRow] = [destCol, destRow];
      }
    }

    swapTiles(col, row) {
      if (this.tiles[row][col] == 15) {
        return;
      }
      for (let i = 0; i < 4; i++) {
        let destCol;
        let destRow;

        switch (i) {
          case 0:
            destCol = col;
            destRow = row - 1;
            break;
          case 1:
            destCol = col;
            destRow = row + 1;
            break;
          case 2:
            destCol = col - 1;
            destRow = row;
            break;
          case 3:
            destCol = col + 1;
            destRow = row;
            break;
      }

      if (
        destCol < 0 || destCol > 3 ||
        destRow < 0 || destRow > 3
        ) {
          continue;
      }

      if (this.tiles[destRow][destCol] === 15) {
        [
          this.tiles[row][col],
          this.tiles[destRow][destCol],
        ] = [
          this.tiles[destRow][destCol],
          this.tiles[row][col],
        ];
        break;
      }
    }
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
  
  new Puzzle(canvas, 80);
})();