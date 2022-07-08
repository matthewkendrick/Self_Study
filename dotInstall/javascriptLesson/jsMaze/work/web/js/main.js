'use strict';

(() => {
  class Maze {
    constructor(canvas) {
      this.ctx = canvas.getContext('2d');
      this.data = this.geData();
    }

    geData() {
      const data = [];

      for (let row = 0; row < 9; row++) {
        data[row] = [];
        for (let col = 0; col < 7; col++) {
          data[row][col] = 1;
        }
      }

      for (let row = 1; row < 9 - 1; row++) {
        for (let col = 1; col < 7 - 1; col++) {
          data[row][col] = 0;
        }
      }

      for (let row = 2; row < 9 - 2; row += 2) {
        for (let col = 2; col < 7 - 2; col += 2) {
          data[row][col] = 1;
        }
      }
      
      for (let row = 2; row < 9 - 2; row += 2) {
        for (let col = 2; col < 7 - 2; col += 2) {
          let destRow;
          let destCol;
          const dir = Math.floor(Math.random() * 4);
          switch (dir) {
            case 0:
              destRow = row - 1;
              destCol = col;
              break;
            case 1:
              destRow = row + 1;
              destCol = col;
              break;
            case 2:
              destRow = row;
              destCol = col - 1;
              break;
            case 3:
              destRow = row;
              destCol = col + 1;
              break;
          
            default:
              break;
          }
        }
      }
      return data;
    }
    
    render() {
      for (let row = 0; row < this.data.length; row++) {
        for (let col = 0; col < this.data[row].length; col++) {
          if (this.data[row][col] === 1) {
            this.ctx.fillRect(col * 10, row * 10, 10, 10);
          }
        }
      }
    }
  }
  const canvas = document.querySelector('canvas');
  if (typeof canvas.getContext === 'undefined') {
    return;
  }

  const maze = new Maze(canvas);
  maze.render();
})();